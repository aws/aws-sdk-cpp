add_project(aws-cpp-sdk-iotdeviceadvisor "C++ SDK for the AWS iotdeviceadvisor service" aws-cpp-sdk-core)

file(GLOB AWS_IOTDEVICEADVISOR_HEADERS
    "include/aws/iotdeviceadvisor/*.h"
)

file(GLOB AWS_IOTDEVICEADVISOR_MODEL_HEADERS
    "include/aws/iotdeviceadvisor/model/*.h"
)

file(GLOB AWS_IOTDEVICEADVISOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTDEVICEADVISOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTDEVICEADVISOR_UNIFIED_HEADERS
    ${AWS_IOTDEVICEADVISOR_HEADERS}
    ${AWS_IOTDEVICEADVISOR_MODEL_HEADERS}
)

file(GLOB IOTDEVICEADVISOR_UNITY_SRC
    ${AWS_IOTDEVICEADVISOR_SOURCE}
    ${AWS_IOTDEVICEADVISOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTDEVICEADVISOR" IOTDEVICEADVISOR_UNITY_SRC)
endif()

file(GLOB IOTDEVICEADVISOR_SRC
    ${IOTDEVICEADVISOR_UNIFIED_HEADERS}
    ${IOTDEVICEADVISOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotdeviceadvisor" FILES ${AWS_IOTDEVICEADVISOR_HEADERS})
        source_group("Header Files\\aws\\iotdeviceadvisor\\model" FILES ${AWS_IOTDEVICEADVISOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTDEVICEADVISOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTDEVICEADVISOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTDEVICEADVISOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTDEVICEADVISOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTDEVICEADVISOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTDEVICEADVISOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotdeviceadvisor)
install (FILES ${AWS_IOTDEVICEADVISOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotdeviceadvisor/model)

do_packaging()


