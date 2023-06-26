add_project(aws-cpp-sdk-codestar-connections "C++ SDK for the AWS codestar-connections service" aws-cpp-sdk-core)

file(GLOB AWS_CODESTAR-CONNECTIONS_HEADERS
    "include/aws/codestar-connections/*.h"
)

file(GLOB AWS_CODESTAR-CONNECTIONS_MODEL_HEADERS
    "include/aws/codestar-connections/model/*.h"
)

file(GLOB AWS_CODESTAR-CONNECTIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODESTAR-CONNECTIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODESTAR-CONNECTIONS_UNIFIED_HEADERS
    ${AWS_CODESTAR-CONNECTIONS_HEADERS}
    ${AWS_CODESTAR-CONNECTIONS_MODEL_HEADERS}
)

file(GLOB CODESTAR-CONNECTIONS_UNITY_SRC
    ${AWS_CODESTAR-CONNECTIONS_SOURCE}
    ${AWS_CODESTAR-CONNECTIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODESTAR-CONNECTIONS" CODESTAR-CONNECTIONS_UNITY_SRC)
endif()

file(GLOB CODESTAR-CONNECTIONS_SRC
    ${CODESTAR-CONNECTIONS_UNIFIED_HEADERS}
    ${CODESTAR-CONNECTIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codestar-connections" FILES ${AWS_CODESTAR-CONNECTIONS_HEADERS})
        source_group("Header Files\\aws\\codestar-connections\\model" FILES ${AWS_CODESTAR-CONNECTIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODESTAR-CONNECTIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODESTAR-CONNECTIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODESTAR-CONNECTIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODESTAR-CONNECTIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODESTARCONNECTIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODESTAR-CONNECTIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codestar-connections)
install (FILES ${AWS_CODESTAR-CONNECTIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codestar-connections/model)

do_packaging()


