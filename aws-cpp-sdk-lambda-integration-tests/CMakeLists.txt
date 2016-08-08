cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-lambda-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_LAMBDA_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_LAMBDA_INTEGRATION_TESTS_SRC
    ${AWS_LAMBDA_SRC}
  )

set(AWS_LAMBDA_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-iam/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-access-management/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-lambda/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-kinesis/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

project(${PROJECT_NAME})

include_directories(${AWS_LAMBDA_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(PLATFORM_ANDROID)
  add_definitions(-DRESOURCES_DIR="resources")
else()
  add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")
endif()

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runLambdaIntegrationTests ${LIBTYPE} ${AWS_LAMBDA_INTEGRATION_TESTS_SRC})
else()
    add_executable(runLambdaIntegrationTests ${AWS_LAMBDA_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runLambdaIntegrationTests aws-cpp-sdk-kinesis aws-cpp-sdk-lambda aws-cpp-sdk-cognito-identity aws-cpp-sdk-access-management aws-cpp-sdk-iam testing-resources)
copyDlls(runLambdaIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-kinesis aws-cpp-sdk-lambda aws-cpp-sdk-cognito-identity aws-cpp-sdk-access-management aws-cpp-sdk-iam testing-resources)
