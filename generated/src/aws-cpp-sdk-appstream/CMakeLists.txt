add_project(aws-cpp-sdk-appstream "C++ SDK for the AWS appstream service" aws-cpp-sdk-core)

file(GLOB AWS_APPSTREAM_HEADERS
    "include/aws/appstream/*.h"
)

file(GLOB AWS_APPSTREAM_MODEL_HEADERS
    "include/aws/appstream/model/*.h"
)

file(GLOB AWS_APPSTREAM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPSTREAM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPSTREAM_UNIFIED_HEADERS
    ${AWS_APPSTREAM_HEADERS}
    ${AWS_APPSTREAM_MODEL_HEADERS}
)

file(GLOB APPSTREAM_UNITY_SRC
    ${AWS_APPSTREAM_SOURCE}
    ${AWS_APPSTREAM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPSTREAM" APPSTREAM_UNITY_SRC)
endif()

file(GLOB APPSTREAM_SRC
    ${APPSTREAM_UNIFIED_HEADERS}
    ${APPSTREAM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appstream" FILES ${AWS_APPSTREAM_HEADERS})
        source_group("Header Files\\aws\\appstream\\model" FILES ${AWS_APPSTREAM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPSTREAM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPSTREAM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPSTREAM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPSTREAM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPSTREAM_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPSTREAM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appstream)
install (FILES ${AWS_APPSTREAM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appstream/model)

do_packaging()


