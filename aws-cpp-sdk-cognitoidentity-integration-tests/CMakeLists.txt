cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cognitoidentity-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_COGNITO_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_COGNITO_INTEGRATION_TESTS_SRC
    ${AWS_COGNITO_SRC}
  )

set(AWS_COGNITO_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-access-management/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-iam/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${AWS_COGNITO_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runCognitoIntegrationTests ${LIBTYPE} ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
else()
    add_executable(runCognitoIntegrationTests ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runCognitoIntegrationTests aws-cpp-sdk-cognito-identity aws-cpp-sdk-access-management aws-cpp-sdk-iam testing-resources)
copyDlls(runCognitoIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-cognito-identity aws-cpp-sdk-access-management aws-cpp-sdk-iam testing-resources)
