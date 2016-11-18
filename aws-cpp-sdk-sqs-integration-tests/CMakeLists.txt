add_project(aws-cpp-sdk-sqs-integration-tests
    "Tests for the AWS Sqs C++ SDK"
    aws-cpp-sdk-sqs
    aws-cpp-sdk-access-management
    aws-cpp-sdk-iam
    aws-cpp-sdk-cognito-identity
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_SQS_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_SQS_INTEGRATION_TESTS_SRC
    ${AWS_SQS_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_SQS_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_SQS_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})
