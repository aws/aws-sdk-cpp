add_project(aws-cpp-sdk-elb-proxy "C++ SDK for Elastic Load Balancing for Envoy" aws-cpp-sdk-core)

file(GLOB AWS_ELB-PROXY_HEADERS
    "include/aws/elb-proxy/*.h"
)

file(GLOB AWS_ELB-PROXY_MODEL_HEADERS
    "include/aws/elb-proxy/model/*.h"
)

file(GLOB AWS_ELB-PROXY_INTERNAL_HEADERS
    "include/aws/elb-proxy/internal/*.h"
)

file(GLOB AWS_ELB-PROXY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELB-PROXY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELB-PROXY_UNIFIED_HEADERS
    ${AWS_ELB-PROXY_HEADERS}
    ${AWS_ELB-PROXY_INTERNAL_HEADERS}
    ${AWS_ELB-PROXY_MODEL_HEADERS}
)

file(GLOB ELB-PROXY_UNITY_SRC
    ${AWS_ELB-PROXY_SOURCE}
    ${AWS_ELB-PROXY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELB-PROXY" ELB-PROXY_UNITY_SRC)
endif()

file(GLOB ELB-PROXY_SRC
    ${ELB-PROXY_UNIFIED_HEADERS}
    ${ELB-PROXY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elb-proxy" FILES ${AWS_ELB-PROXY_HEADERS})
        source_group("Header Files\\aws\\elb-proxy\\internal" FILES ${AWS_ELB-PROXY_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\elb-proxy\\model" FILES ${AWS_ELB-PROXY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELB-PROXY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELB-PROXY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELB-PROXY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELB-PROXY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELBPROXY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELB-PROXY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elb-proxy)
install (FILES ${AWS_ELB-PROXY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elb-proxy/model)

do_packaging()


