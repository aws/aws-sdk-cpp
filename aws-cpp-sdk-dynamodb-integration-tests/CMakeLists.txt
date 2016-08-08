cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-dynamodb-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_DYNAMO_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB AWS_DYNAMO_INTEGRATION_TESTS_SRC ${AWS_DYNAMO_SRC})

set(AWS_DYNAMO_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-dynamodb/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${AWS_DYNAMO_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runDynamoDBIntegrationTests ${LIBTYPE} ${AWS_DYNAMO_INTEGRATION_TESTS_SRC})
else()
    add_executable(runDynamoDBIntegrationTests ${AWS_DYNAMO_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runDynamoDBIntegrationTests aws-cpp-sdk-dynamodb testing-resources)
copyDlls(runDynamoDBIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-dynamodb testing-resources)

