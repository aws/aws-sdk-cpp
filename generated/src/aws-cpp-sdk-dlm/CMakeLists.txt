add_project(aws-cpp-sdk-dlm "C++ SDK for the AWS dlm service" aws-cpp-sdk-core)

file(GLOB AWS_DLM_HEADERS
    "include/aws/dlm/*.h"
)

file(GLOB AWS_DLM_MODEL_HEADERS
    "include/aws/dlm/model/*.h"
)

file(GLOB AWS_DLM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DLM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DLM_UNIFIED_HEADERS
    ${AWS_DLM_HEADERS}
    ${AWS_DLM_MODEL_HEADERS}
)

file(GLOB DLM_UNITY_SRC
    ${AWS_DLM_SOURCE}
    ${AWS_DLM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DLM" DLM_UNITY_SRC)
endif()

file(GLOB DLM_SRC
    ${DLM_UNIFIED_HEADERS}
    ${DLM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\dlm" FILES ${AWS_DLM_HEADERS})
        source_group("Header Files\\aws\\dlm\\model" FILES ${AWS_DLM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DLM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DLM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DLM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DLM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DLM_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DLM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dlm)
install (FILES ${AWS_DLM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dlm/model)

do_packaging()


