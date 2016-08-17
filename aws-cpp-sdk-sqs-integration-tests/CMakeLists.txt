cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-sqs-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_SQS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_SQS_INTEGRATION_TESTS_SRC
    ${AWS_SQS_SRC}
  )

set(AWS_SQS_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-sqs/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-access-management/include/"  
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-iam/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${AWS_SQS_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runSqsIntegrationTests ${LIBTYPE} ${AWS_SQS_INTEGRATION_TESTS_SRC})
else()
    add_executable(runSqsIntegrationTests ${AWS_SQS_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runSqsIntegrationTests aws-cpp-sdk-sqs aws-cpp-sdk-access-management aws-cpp-sdk-iam aws-cpp-sdk-cognito-identity testing-resources)
copyDlls(runSqsIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-sqs aws-cpp-sdk-access-management aws-cpp-sdk-iam aws-cpp-sdk-cognito-identity testing-resources)
