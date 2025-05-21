add_project(protocol-json-input-tests
    "Tests for the protocol json of AWS C++ SDK"
    testing-resources
    aws-cpp-sdk-protocol-mock
    aws-cpp-sdk-json-protocol
    aws-cpp-sdk-core)

file(GLOB AWS_PROTOCOL_JSON_INPUT_TESTS_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp"
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} "${AWS_PROTOCOL_JSON_INPUT_TESTS_SRC}")
else()
    add_executable(${PROJECT_NAME} "${AWS_PROTOCOL_JSON_INPUT_TESTS_SRC}")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()