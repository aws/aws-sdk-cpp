add_project(aws-cpp-sdk-aiops "C++ SDK for the AWS aiops service" aws-cpp-sdk-core)

file(GLOB AWS_AIOPS_HEADERS
    "include/aws/aiops/*.h"
)

file(GLOB AWS_AIOPS_MODEL_HEADERS
    "include/aws/aiops/model/*.h"
)

file(GLOB AWS_AIOPS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AIOPS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AIOPS_UNIFIED_HEADERS
    ${AWS_AIOPS_HEADERS}
    ${AWS_AIOPS_MODEL_HEADERS}
)

file(GLOB AIOPS_UNITY_SRC
    ${AWS_AIOPS_SOURCE}
    ${AWS_AIOPS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AIOPS" AIOPS_UNITY_SRC)
endif()

file(GLOB AIOPS_SRC
    ${AIOPS_UNIFIED_HEADERS}
    ${AIOPS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\aiops" FILES ${AWS_AIOPS_HEADERS})
        source_group("Header Files\\aws\\aiops\\model" FILES ${AWS_AIOPS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AIOPS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AIOPS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AIOPS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AIOPS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AIOPS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AIOPS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/aiops)
install (FILES ${AWS_AIOPS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/aiops/model)

do_packaging()


