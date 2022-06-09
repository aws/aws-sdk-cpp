# Testing Dependencies
if (BUILD_TESTING)
    message(STATUS "Building tests")
    # Testing dependency
    find_package(GTest 1.11 REQUIRED)
    include(GoogleTest) # for gtest_discover_tests()
endif ()

# Project dependencies http library (curl or OS), tinyxml2, cJSON, ssl (open or other), CRT
find_package(CURL REQUIRED)
find_package(ZLIB REQUIRED)
find_package(OpenSSL REQUIRED COMPONENTS Crypto)
pkg_check_modules(tinyxml2 REQUIRED IMPORTED_TARGET tinyxml2>=9.0.0)
pkg_check_modules(CJSON REQUIRED IMPORTED_TARGET libcjson>=1.7.15)
find_package(aws-crt-cpp 0.17.9 EXACT REQUIRED COMPONENTS io)