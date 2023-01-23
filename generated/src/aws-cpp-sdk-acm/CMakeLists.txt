add_project(aws-cpp-sdk-acm "C++ SDK for the AWS acm service" aws-cpp-sdk-core)

file(GLOB AWS_ACM_HEADERS
    "include/aws/acm/*.h"
)

file(GLOB AWS_ACM_MODEL_HEADERS
    "include/aws/acm/model/*.h"
)

file(GLOB AWS_ACM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACM_UNIFIED_HEADERS
    ${AWS_ACM_HEADERS}
    ${AWS_ACM_MODEL_HEADERS}
)

file(GLOB ACM_UNITY_SRC
    ${AWS_ACM_SOURCE}
    ${AWS_ACM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACM" ACM_UNITY_SRC)
endif()

file(GLOB ACM_SRC
    ${ACM_UNIFIED_HEADERS}
    ${ACM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\acm" FILES ${AWS_ACM_HEADERS})
        source_group("Header Files\\aws\\acm\\model" FILES ${AWS_ACM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACM_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/acm)
install (FILES ${AWS_ACM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/acm/model)

do_packaging()


