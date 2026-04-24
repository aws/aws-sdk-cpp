add_project(codebuild-smoke-tests
"Tests for the AWS CODEBUILD C++ SDK"
testing-resources
aws-cpp-sdk-codebuild
aws-cpp-sdk-core
)
file(GLOB AWS_CODEBUILD_GENERATED_SMOKE_TEST_SRC
"${CMAKE_CURRENT_SOURCE_DIR}/../RunTests.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)
if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if (CMAKE_CROSSCOMPILING)
    set(AUTORUN_UNIT_TESTS OFF)
endif()

if (AUTORUN_UNIT_TESTS)
    enable_testing()
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} "${AWS_CODEBUILD_GENERATED_SMOKE_TEST_SRC}")
else()
    add_executable(${PROJECT_NAME} "${AWS_CODEBUILD_GENERATED_SMOKE_TEST_SRC}")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/aws-cpp-sdk-codebuild/include)

target_link_libraries(${PROJECT_NAME}
    ${PROJECT_LIBS})

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()

