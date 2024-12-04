add_project(aws-cpp-sdk-bedrock-data-automation-runtime "C++ SDK for the AWS bedrock-data-automation-runtime service" aws-cpp-sdk-core)

file(GLOB AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_HEADERS
    "include/aws/bedrock-data-automation-runtime/*.h"
)

file(GLOB AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_HEADERS
    "include/aws/bedrock-data-automation-runtime/model/*.h"
)

file(GLOB AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BEDROCK-DATA-AUTOMATION-RUNTIME_UNIFIED_HEADERS
    ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_HEADERS}
    ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_HEADERS}
)

file(GLOB BEDROCK-DATA-AUTOMATION-RUNTIME_UNITY_SRC
    ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_SOURCE}
    ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BEDROCK-DATA-AUTOMATION-RUNTIME" BEDROCK-DATA-AUTOMATION-RUNTIME_UNITY_SRC)
endif()

file(GLOB BEDROCK-DATA-AUTOMATION-RUNTIME_SRC
    ${BEDROCK-DATA-AUTOMATION-RUNTIME_UNIFIED_HEADERS}
    ${BEDROCK-DATA-AUTOMATION-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bedrock-data-automation-runtime" FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\bedrock-data-automation-runtime\\model" FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BEDROCK-DATA-AUTOMATION-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BEDROCK-DATA-AUTOMATION-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BEDROCKDATAAUTOMATIONRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-data-automation-runtime)
install (FILES ${AWS_BEDROCK-DATA-AUTOMATION-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-data-automation-runtime/model)

do_packaging()


