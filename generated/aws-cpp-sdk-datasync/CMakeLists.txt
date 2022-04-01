add_project(aws-cpp-sdk-datasync "C++ SDK for the AWS datasync service" aws-cpp-sdk-core)

file(GLOB AWS_DATASYNC_HEADERS
    "include/aws/datasync/*.h"
)

file(GLOB AWS_DATASYNC_MODEL_HEADERS
    "include/aws/datasync/model/*.h"
)

file(GLOB AWS_DATASYNC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DATASYNC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DATASYNC_UNIFIED_HEADERS
    ${AWS_DATASYNC_HEADERS}
    ${AWS_DATASYNC_MODEL_HEADERS}
)

file(GLOB DATASYNC_UNITY_SRC
    ${AWS_DATASYNC_SOURCE}
    ${AWS_DATASYNC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DATASYNC" DATASYNC_UNITY_SRC)
endif()

file(GLOB DATASYNC_SRC
    ${DATASYNC_UNIFIED_HEADERS}
    ${DATASYNC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\datasync" FILES ${AWS_DATASYNC_HEADERS})
        source_group("Header Files\\aws\\datasync\\model" FILES ${AWS_DATASYNC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DATASYNC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DATASYNC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DATASYNC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DATASYNC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DATASYNC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DATASYNC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datasync)
install (FILES ${AWS_DATASYNC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datasync/model)

do_packaging()


