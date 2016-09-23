cmake_minimum_required(VERSION 2.8.12)
set(PROJECT_NAME "aws-cpp-sdk-cognitoidentity-integration-tests")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "Tests for C++ interface for Amazon Cognito Identity")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-core")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-cognito-identity")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-access-management")
list(APPEND PROJECT_LIBS "aws-cpp-sdk-iam")
list(APPEND PROJECT_LIBS "testing-resources")
 
cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_COGNITO_SRC
"${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_COGNITO_INTEGRATION_TESTS_SRC
  ${AWS_COGNITO_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})
