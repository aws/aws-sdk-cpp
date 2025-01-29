add_project(aws-cpp-sdk-json-protocol "C++ SDK for the AWS json-protocol service" aws-cpp-sdk-core)

file(GLOB AWS_JSON-PROTOCOL_HEADERS
    "include/aws/json-protocol/*.h"
)

file(GLOB AWS_JSON-PROTOCOL_MODEL_HEADERS
    "include/aws/json-protocol/model/*.h"
)

file(GLOB AWS_JSON-PROTOCOL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_JSON-PROTOCOL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB JSON-PROTOCOL_UNIFIED_HEADERS
    ${AWS_JSON-PROTOCOL_HEADERS}
    ${AWS_JSON-PROTOCOL_MODEL_HEADERS}
)

file(GLOB JSON-PROTOCOL_UNITY_SRC
    ${AWS_JSON-PROTOCOL_SOURCE}
    ${AWS_JSON-PROTOCOL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("JSON-PROTOCOL" JSON-PROTOCOL_UNITY_SRC)
endif()

file(GLOB JSON-PROTOCOL_SRC
    ${JSON-PROTOCOL_UNIFIED_HEADERS}
    ${JSON-PROTOCOL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\json-protocol" FILES ${AWS_JSON-PROTOCOL_HEADERS})
        source_group("Header Files\\aws\\json-protocol\\model" FILES ${AWS_JSON-PROTOCOL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_JSON-PROTOCOL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_JSON-PROTOCOL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(JSON-PROTOCOL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${JSON-PROTOCOL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_JSONPROTOCOL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_JSON-PROTOCOL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/json-protocol)
install (FILES ${AWS_JSON-PROTOCOL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/json-protocol/model)

do_packaging()


