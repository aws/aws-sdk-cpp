add_project(aws-cpp-sdk-fsx "C++ SDK for the AWS fsx service" aws-cpp-sdk-core)

file(GLOB AWS_FSX_HEADERS
    "include/aws/fsx/*.h"
)

file(GLOB AWS_FSX_MODEL_HEADERS
    "include/aws/fsx/model/*.h"
)

file(GLOB AWS_FSX_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FSX_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FSX_UNIFIED_HEADERS
    ${AWS_FSX_HEADERS}
    ${AWS_FSX_MODEL_HEADERS}
)

file(GLOB FSX_UNITY_SRC
    ${AWS_FSX_SOURCE}
    ${AWS_FSX_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FSX" FSX_UNITY_SRC)
endif()

file(GLOB FSX_SRC
    ${FSX_UNIFIED_HEADERS}
    ${FSX_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\fsx" FILES ${AWS_FSX_HEADERS})
        source_group("Header Files\\aws\\fsx\\model" FILES ${AWS_FSX_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FSX_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FSX_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FSX_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FSX_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FSX_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FSX_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fsx)
install (FILES ${AWS_FSX_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fsx/model)

do_packaging()


