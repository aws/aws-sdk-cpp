add_project(polly_sample
    "Sample driver app for polly app."
    aws-cpp-sdk-text-to-speech
    aws-cpp-sdk-polly    
    aws-cpp-sdk-core)

file(GLOB AWS_SAMPLE_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

add_executable(${PROJECT_NAME} ${AWS_SAMPLE_SRC})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})
