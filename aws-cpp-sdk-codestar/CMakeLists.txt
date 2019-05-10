add_project(aws-cpp-sdk-codestar "C++ SDK for the AWS codestar service" aws-cpp-sdk-core)

file(GLOB AWS_CODESTAR_HEADERS
    "include/aws/codestar/*.h"
)

file(GLOB AWS_CODESTAR_MODEL_HEADERS
    "include/aws/codestar/model/*.h"
)

file(GLOB AWS_CODESTAR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODESTAR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODESTAR_UNIFIED_HEADERS
    ${AWS_CODESTAR_HEADERS}
    ${AWS_CODESTAR_MODEL_HEADERS}
)

file(GLOB CODESTAR_UNITY_SRC
    ${AWS_CODESTAR_SOURCE}
    ${AWS_CODESTAR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODESTAR" CODESTAR_UNITY_SRC)
endif()

file(GLOB CODESTAR_SRC
    ${CODESTAR_UNIFIED_HEADERS}
    ${CODESTAR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codestar" FILES ${AWS_CODESTAR_HEADERS})
        source_group("Header Files\\aws\\codestar\\model" FILES ${AWS_CODESTAR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODESTAR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODESTAR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODESTAR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODESTAR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODESTAR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODESTAR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codestar)
install (FILES ${AWS_CODESTAR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codestar/model)

do_packaging()


