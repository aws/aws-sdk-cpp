add_project(aws-cpp-sdk-appflow "C++ SDK for the AWS appflow service" aws-cpp-sdk-core)

file(GLOB AWS_APPFLOW_HEADERS
    "include/aws/appflow/*.h"
)

file(GLOB AWS_APPFLOW_MODEL_HEADERS
    "include/aws/appflow/model/*.h"
)

file(GLOB AWS_APPFLOW_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPFLOW_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPFLOW_UNIFIED_HEADERS
    ${AWS_APPFLOW_HEADERS}
    ${AWS_APPFLOW_MODEL_HEADERS}
)

file(GLOB APPFLOW_UNITY_SRC
    ${AWS_APPFLOW_SOURCE}
    ${AWS_APPFLOW_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPFLOW" APPFLOW_UNITY_SRC)
endif()

file(GLOB APPFLOW_SRC
    ${APPFLOW_UNIFIED_HEADERS}
    ${APPFLOW_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appflow" FILES ${AWS_APPFLOW_HEADERS})
        source_group("Header Files\\aws\\appflow\\model" FILES ${AWS_APPFLOW_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPFLOW_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPFLOW_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPFLOW_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPFLOW_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPFLOW_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPFLOW_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appflow)
install (FILES ${AWS_APPFLOW_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appflow/model)

do_packaging()


