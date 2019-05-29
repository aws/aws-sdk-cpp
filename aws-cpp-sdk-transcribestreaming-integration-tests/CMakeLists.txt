add_project(aws-cpp-sdk-transcribestreaming-integration-tests
    "Tests for the AWS TranscribeStreaming C++ SDK"
    aws-cpp-sdk-transcribestreaming
    testing-resources
    aws-cpp-sdk-core)

set(AWS_TRANSCRIBESTREAMING_INTEGRATION_TESTS_SRC "RunTests.cpp" "TranscribeTests.cpp")

add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_TRANSCRIBESTREAMING_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_TRANSCRIBESTREAMING_INTEGRATION_TESTS_SRC})
endif()

# We are using WinINet for windows in this test until we figure out why WinHTTP is not working with H2
# HAVE_H2_CLIENT is only used in transcribestreaming integration tests, users will be not be affected by this check.
if((ENABLE_CURL_CLIENT AND CURL_HAS_H2) OR (ENABLE_WINDOWS_CLIENT AND WININET_HAS_H2))
    target_compile_definitions(${PROJECT_NAME} PRIVATE "HAVE_H2_CLIENT")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
