add_project(aws-cpp-sdk-non-query-compatible-rpcv2-protocol "C++ SDK for the AWS non-query-compatible-rpcv2-protocol service" aws-cpp-sdk-core)

file(GLOB AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_HEADERS
    "include/aws/non-query-compatible-rpcv2-protocol/*.h"
)

file(GLOB AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_HEADERS
    "include/aws/non-query-compatible-rpcv2-protocol/model/*.h"
)

file(GLOB AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_INTERNAL_HEADERS
    "include/aws/non-query-compatible-rpcv2-protocol/internal/*.h"
)

file(GLOB AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_UNIFIED_HEADERS
    ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_HEADERS}
    ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_INTERNAL_HEADERS}
    ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_HEADERS}
)

file(GLOB NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_UNITY_SRC
    ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_SOURCE}
    ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL" NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_UNITY_SRC)
endif()

file(GLOB NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_SRC
    ${NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_UNIFIED_HEADERS}
    ${NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\non-query-compatible-rpcv2-protocol" FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_HEADERS})
        source_group("Header Files\\aws\\non-query-compatible-rpcv2-protocol\\internal" FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\non-query-compatible-rpcv2-protocol\\model" FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/non-query-compatible-rpcv2-protocol)
install (FILES ${AWS_NON-QUERY-COMPATIBLE-RPCV2-PROTOCOL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/non-query-compatible-rpcv2-protocol/model)

do_packaging()


