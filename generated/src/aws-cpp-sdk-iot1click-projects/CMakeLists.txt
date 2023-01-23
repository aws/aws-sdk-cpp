add_project(aws-cpp-sdk-iot1click-projects "C++ SDK for the AWS iot1click-projects service" aws-cpp-sdk-core)

file(GLOB AWS_IOT1CLICK-PROJECTS_HEADERS
    "include/aws/iot1click-projects/*.h"
)

file(GLOB AWS_IOT1CLICK-PROJECTS_MODEL_HEADERS
    "include/aws/iot1click-projects/model/*.h"
)

file(GLOB AWS_IOT1CLICK-PROJECTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOT1CLICK-PROJECTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOT1CLICK-PROJECTS_UNIFIED_HEADERS
    ${AWS_IOT1CLICK-PROJECTS_HEADERS}
    ${AWS_IOT1CLICK-PROJECTS_MODEL_HEADERS}
)

file(GLOB IOT1CLICK-PROJECTS_UNITY_SRC
    ${AWS_IOT1CLICK-PROJECTS_SOURCE}
    ${AWS_IOT1CLICK-PROJECTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOT1CLICK-PROJECTS" IOT1CLICK-PROJECTS_UNITY_SRC)
endif()

file(GLOB IOT1CLICK-PROJECTS_SRC
    ${IOT1CLICK-PROJECTS_UNIFIED_HEADERS}
    ${IOT1CLICK-PROJECTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iot1click-projects" FILES ${AWS_IOT1CLICK-PROJECTS_HEADERS})
        source_group("Header Files\\aws\\iot1click-projects\\model" FILES ${AWS_IOT1CLICK-PROJECTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOT1CLICK-PROJECTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOT1CLICK-PROJECTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOT1CLICK-PROJECTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOT1CLICK-PROJECTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOT1CLICKPROJECTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOT1CLICK-PROJECTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot1click-projects)
install (FILES ${AWS_IOT1CLICK-PROJECTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot1click-projects/model)

do_packaging()


