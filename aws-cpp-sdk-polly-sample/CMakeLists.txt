add_project(polly_sample
    "Sample driver app for polly app."
    aws-cpp-sdk-polly-to-output
    aws-cpp-sdk-polly    
    aws-cpp-sdk-core)

file(GLOB AWS_SAMPLE_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

add_executable(${PROJECT_NAME} ${AWS_SAMPLE_SRC})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS} pulse-simple)
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})
