#include <iostream>

using namespace std;

int main() {
    char operacja;
    double liczba1, liczba2;

    cout << "Podaj rodzaj operacji (dodawanie: +, odejmowanie: -, mnozenie: *, dzielenie: /): ";
    cin >> operacja;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    switch (operacja) {
        case '+':
            cout << "Wynik dodawania: " << liczba1 + liczba2 << endl;
        break;
        case '-':
            cout << "Wynik odejmowania: " << liczba1 - liczba2 << endl;
        break;
        case '*':
            cout << "Wynik mnozenia: " << liczba1 * liczba2 << endl;
        break;
        case '/':
            if (liczba2 == 0) {
                cout << "Blad: Nie mozna dzielic przez zero!" << endl;
            } else {
                cout << "Wynik dzielenia: " << liczba1 / liczba2 << endl;
            }
        break;
        default:
            cout << "Niepoprawny rodzaj operacji. Uzyj +, -, * lub /." << endl;
        break;
    }

    return 0;
}