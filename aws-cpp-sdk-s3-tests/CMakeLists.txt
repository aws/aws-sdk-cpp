add_project(aws-cpp-sdk-s3-tests
    "Tests for the AWS S3 C++ SDK"
    aws-cpp-sdk-s3
    testing-resources
    aws-cpp-sdk-core )

file(GLOB AWS_S3_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_S3_TESTS_SRC
    ${AWS_S3_SRC}
)

add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_S3_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_S3_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}>
        ARGS "--gtest_shuffle" "--gtest_repeat=3")
endif()
