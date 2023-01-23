add_project(aws-cpp-sdk-cloudhsm "C++ SDK for the AWS cloudhsm service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDHSM_HEADERS
    "include/aws/cloudhsm/*.h"
)

file(GLOB AWS_CLOUDHSM_MODEL_HEADERS
    "include/aws/cloudhsm/model/*.h"
)

file(GLOB AWS_CLOUDHSM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDHSM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDHSM_UNIFIED_HEADERS
    ${AWS_CLOUDHSM_HEADERS}
    ${AWS_CLOUDHSM_MODEL_HEADERS}
)

file(GLOB CLOUDHSM_UNITY_SRC
    ${AWS_CLOUDHSM_SOURCE}
    ${AWS_CLOUDHSM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDHSM" CLOUDHSM_UNITY_SRC)
endif()

file(GLOB CLOUDHSM_SRC
    ${CLOUDHSM_UNIFIED_HEADERS}
    ${CLOUDHSM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudhsm" FILES ${AWS_CLOUDHSM_HEADERS})
        source_group("Header Files\\aws\\cloudhsm\\model" FILES ${AWS_CLOUDHSM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDHSM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDHSM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDHSM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDHSM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDHSM_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDHSM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudhsm)
install (FILES ${AWS_CLOUDHSM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudhsm/model)

do_packaging()


