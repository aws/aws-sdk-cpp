add_project(aws-cpp-sdk-rbin "C++ SDK for the AWS rbin service" aws-cpp-sdk-core)

file(GLOB AWS_RBIN_HEADERS
    "include/aws/rbin/*.h"
)

file(GLOB AWS_RBIN_MODEL_HEADERS
    "include/aws/rbin/model/*.h"
)

file(GLOB AWS_RBIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_RBIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB RBIN_UNIFIED_HEADERS
    ${AWS_RBIN_HEADERS}
    ${AWS_RBIN_MODEL_HEADERS}
)

file(GLOB RBIN_UNITY_SRC
    ${AWS_RBIN_SOURCE}
    ${AWS_RBIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("RBIN" RBIN_UNITY_SRC)
endif()

file(GLOB RBIN_SRC
    ${RBIN_UNIFIED_HEADERS}
    ${RBIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rbin" FILES ${AWS_RBIN_HEADERS})
        source_group("Header Files\\aws\\rbin\\model" FILES ${AWS_RBIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_RBIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_RBIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(RBIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${RBIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RECYCLEBIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_RBIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rbin)
install (FILES ${AWS_RBIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rbin/model)

do_packaging()


