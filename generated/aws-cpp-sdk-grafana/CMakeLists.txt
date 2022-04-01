add_project(aws-cpp-sdk-grafana "C++ SDK for the AWS grafana service" aws-cpp-sdk-core)

file(GLOB AWS_GRAFANA_HEADERS
    "include/aws/grafana/*.h"
)

file(GLOB AWS_GRAFANA_MODEL_HEADERS
    "include/aws/grafana/model/*.h"
)

file(GLOB AWS_GRAFANA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GRAFANA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GRAFANA_UNIFIED_HEADERS
    ${AWS_GRAFANA_HEADERS}
    ${AWS_GRAFANA_MODEL_HEADERS}
)

file(GLOB GRAFANA_UNITY_SRC
    ${AWS_GRAFANA_SOURCE}
    ${AWS_GRAFANA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GRAFANA" GRAFANA_UNITY_SRC)
endif()

file(GLOB GRAFANA_SRC
    ${GRAFANA_UNIFIED_HEADERS}
    ${GRAFANA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\grafana" FILES ${AWS_GRAFANA_HEADERS})
        source_group("Header Files\\aws\\grafana\\model" FILES ${AWS_GRAFANA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GRAFANA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GRAFANA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GRAFANA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GRAFANA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MANAGEDGRAFANA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GRAFANA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/grafana)
install (FILES ${AWS_GRAFANA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/grafana/model)

do_packaging()


