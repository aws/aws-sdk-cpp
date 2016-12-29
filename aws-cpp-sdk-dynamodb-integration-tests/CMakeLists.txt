add_project(aws-cpp-sdk-dynamodb-integration-tests 
    "Tests for the AWS DynamoDb C++ SDK" 
    aws-cpp-sdk-dynamodb 
    testing-resources 
    aws-cpp-sdk-core)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_DYNAMO_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB AWS_DYNAMO_INTEGRATION_TESTS_SRC ${AWS_DYNAMO_SRC})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_DYNAMO_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_DYNAMO_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})

