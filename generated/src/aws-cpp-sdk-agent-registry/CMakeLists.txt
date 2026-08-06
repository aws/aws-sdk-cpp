add_project(aws-cpp-sdk-agent-registry "C++ SDK for the AWS agent-registry service" aws-cpp-sdk-core)

file(GLOB AWS_AGENT-REGISTRY_HEADERS
    "include/aws/agent-registry/*.h"
)

file(GLOB AWS_AGENT-REGISTRY_MODEL_HEADERS
    "include/aws/agent-registry/model/*.h"
)

file(GLOB AWS_AGENT-REGISTRY_INTERNAL_HEADERS
    "include/aws/agent-registry/internal/*.h"
)

file(GLOB AWS_AGENT-REGISTRY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AGENT-REGISTRY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AGENT-REGISTRY_UNIFIED_HEADERS
    ${AWS_AGENT-REGISTRY_HEADERS}
    ${AWS_AGENT-REGISTRY_INTERNAL_HEADERS}
    ${AWS_AGENT-REGISTRY_MODEL_HEADERS}
)

file(GLOB AGENT-REGISTRY_UNITY_SRC
    ${AWS_AGENT-REGISTRY_SOURCE}
    ${AWS_AGENT-REGISTRY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AGENT-REGISTRY" AGENT-REGISTRY_UNITY_SRC)
endif()

file(GLOB AGENT-REGISTRY_SRC
    ${AGENT-REGISTRY_UNIFIED_HEADERS}
    ${AGENT-REGISTRY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\agent-registry" FILES ${AWS_AGENT-REGISTRY_HEADERS})
        source_group("Header Files\\aws\\agent-registry\\internal" FILES ${AWS_AGENT-REGISTRY_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\agent-registry\\model" FILES ${AWS_AGENT-REGISTRY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AGENT-REGISTRY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AGENT-REGISTRY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AGENT-REGISTRY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AGENT-REGISTRY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AGENTREGISTRY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AGENT-REGISTRY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/agent-registry)
install (FILES ${AWS_AGENT-REGISTRY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/agent-registry/model)

do_packaging()


