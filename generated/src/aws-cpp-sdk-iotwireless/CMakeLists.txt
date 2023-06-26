add_project(aws-cpp-sdk-iotwireless "C++ SDK for the AWS iotwireless service" aws-cpp-sdk-core)

file(GLOB AWS_IOTWIRELESS_HEADERS
    "include/aws/iotwireless/*.h"
)

file(GLOB AWS_IOTWIRELESS_MODEL_HEADERS
    "include/aws/iotwireless/model/*.h"
)

file(GLOB AWS_IOTWIRELESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTWIRELESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTWIRELESS_UNIFIED_HEADERS
    ${AWS_IOTWIRELESS_HEADERS}
    ${AWS_IOTWIRELESS_MODEL_HEADERS}
)

file(GLOB IOTWIRELESS_UNITY_SRC
    ${AWS_IOTWIRELESS_SOURCE}
    ${AWS_IOTWIRELESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTWIRELESS" IOTWIRELESS_UNITY_SRC)
endif()

file(GLOB IOTWIRELESS_SRC
    ${IOTWIRELESS_UNIFIED_HEADERS}
    ${IOTWIRELESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotwireless" FILES ${AWS_IOTWIRELESS_HEADERS})
        source_group("Header Files\\aws\\iotwireless\\model" FILES ${AWS_IOTWIRELESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTWIRELESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTWIRELESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTWIRELESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTWIRELESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTWIRELESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTWIRELESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotwireless)
install (FILES ${AWS_IOTWIRELESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotwireless/model)

do_packaging()


