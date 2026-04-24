add_project(aws-cpp-sdk-iotevents "C++ SDK for the AWS iotevents service" aws-cpp-sdk-core)

file(GLOB AWS_IOTEVENTS_HEADERS
    "include/aws/iotevents/*.h"
)

file(GLOB AWS_IOTEVENTS_MODEL_HEADERS
    "include/aws/iotevents/model/*.h"
)

file(GLOB AWS_IOTEVENTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTEVENTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTEVENTS_UNIFIED_HEADERS
    ${AWS_IOTEVENTS_HEADERS}
    ${AWS_IOTEVENTS_MODEL_HEADERS}
)

file(GLOB IOTEVENTS_UNITY_SRC
    ${AWS_IOTEVENTS_SOURCE}
    ${AWS_IOTEVENTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTEVENTS" IOTEVENTS_UNITY_SRC)
endif()

file(GLOB IOTEVENTS_SRC
    ${IOTEVENTS_UNIFIED_HEADERS}
    ${IOTEVENTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotevents" FILES ${AWS_IOTEVENTS_HEADERS})
        source_group("Header Files\\aws\\iotevents\\model" FILES ${AWS_IOTEVENTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTEVENTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTEVENTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTEVENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTEVENTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTEVENTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTEVENTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotevents)
install (FILES ${AWS_IOTEVENTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotevents/model)

do_packaging()


