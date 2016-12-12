add_project(aws-cpp-sdk-text-to-speech-tests
    "Tests for the AWS text-to-speech C++ SDK"
    aws-cpp-sdk-text-to-speech
    aws-cpp-sdk-polly
    testing-resources
    aws-cpp-sdk-core)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB TEXT_TO_SPEECH_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${TEXT_TO_SPEECH_TEST_SRC})
else()
    add_executable(${PROJECT_NAME} ${TEXT_TO_SPEECH_TEST_SRC})
endif()

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})

if(NOT CMAKE_CROSSCOMPILING)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}>)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()
