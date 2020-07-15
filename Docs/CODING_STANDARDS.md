# CODING STANDARDS
* Don't make changes to generated clients directly. Make your changes in the generator. Changes to Core, Scripts, and High-Level interfaces are fine directly in the code.
* Do not use non-trivial statics anywhere. This will cause custom memory managers to crash in random places.
* Use 4 spaces for indents and never use tabs.
* No exceptions.... no exceptions. Use the Outcome pattern for returning data if you need to also return an optional error code.
* Always think about platform independence. If this is impossible, put a nice abstraction on top of it and use an abstract factory.
* Use RAII, Aws::New and Aws::Delete should only appear in constructors and destructors.
* Be sure to follow the rule of 5.
* Use the C++ 11 standard where possible.
* Use UpperCamelCase for custom type names and function names. Use m_* for member variables. Don't use statics. If you must, use UpperCammelCase for static variables
* Always be const correct, and be mindful of when you need to support r-values. We don't trust compilers to optimize this uniformly accross builds so please be explicit.
* Namespace names should be UpperCammelCase. Never put a using namespace statement in a header file unless it is scoped by a class. It is fine to use a using namespace statement in a cpp file.
* Use enum class, not enum
* Prefer #pragma once for include guards.
* Forward declare whenever possible.
* Use nullptr instead of NULL.
