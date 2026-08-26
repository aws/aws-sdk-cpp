add_project(protocol-rest-xml-input-tests
    "Tests for the protocol rest-xml of AWS C++ SDK"
    testing-resources
    aws-cpp-sdk-protocol-mock
    aws-cpp-sdk-rest-xml-protocol
    aws-cpp-sdk-core)

file(GLOB AWS_PROTOCOL_REST_XML_INPUT_TESTS_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp"
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} "${AWS_PROTOCOL_REST_XML_INPUT_TESTS_SRC}")
else()
    add_executable(${PROJECT_NAME} "${AWS_PROTOCOL_REST_XML_INPUT_TESTS_SRC}")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

include(FetchContent)
set(tinyxml2_BUILD_TESTING OFF CACHE BOOL "" FORCE)
FetchContent_Declare(
    tinyxml2
    GIT_REPOSITORY https://github.com/leethomason/tinyxml2.git
    GIT_TAG 11.0.0
)
FetchContent_MakeAvailable(tinyxml2)
target_link_libraries(${PROJECT_NAME} tinyxml2::tinyxml2)
target_compile_definitions(${PROJECT_NAME} PRIVATE AWS_PROTOCOL_TEST_USE_TINYXML2)

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()