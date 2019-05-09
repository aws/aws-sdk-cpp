add_project(aws-cpp-sdk-s3control-integration-tests
    "Tests for the AWS S3 Control C++ SDK"
    aws-cpp-sdk-s3control
    aws-cpp-sdk-access-management
    aws-cpp-sdk-iam
    aws-cpp-sdk-cognito-identity
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_S3_CONTROL_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_S3_CONTROL_INTEGRATION_TESTS_SRC
    ${AWS_S3_CONTROL_SRC}
)

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_S3_CONTROL_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_S3_CONTROL_INTEGRATION_TESTS_SRC})
endif()

target_compile_definitions(${PROJECT_NAME} PRIVATE -DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE -DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

