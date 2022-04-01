add_project(aws-cpp-sdk-mediapackage "C++ SDK for the AWS mediapackage service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIAPACKAGE_HEADERS
    "include/aws/mediapackage/*.h"
)

file(GLOB AWS_MEDIAPACKAGE_MODEL_HEADERS
    "include/aws/mediapackage/model/*.h"
)

file(GLOB AWS_MEDIAPACKAGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIAPACKAGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIAPACKAGE_UNIFIED_HEADERS
    ${AWS_MEDIAPACKAGE_HEADERS}
    ${AWS_MEDIAPACKAGE_MODEL_HEADERS}
)

file(GLOB MEDIAPACKAGE_UNITY_SRC
    ${AWS_MEDIAPACKAGE_SOURCE}
    ${AWS_MEDIAPACKAGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIAPACKAGE" MEDIAPACKAGE_UNITY_SRC)
endif()

file(GLOB MEDIAPACKAGE_SRC
    ${MEDIAPACKAGE_UNIFIED_HEADERS}
    ${MEDIAPACKAGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mediapackage" FILES ${AWS_MEDIAPACKAGE_HEADERS})
        source_group("Header Files\\aws\\mediapackage\\model" FILES ${AWS_MEDIAPACKAGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIAPACKAGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIAPACKAGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIAPACKAGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIAPACKAGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIAPACKAGE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIAPACKAGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediapackage)
install (FILES ${AWS_MEDIAPACKAGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediapackage/model)

do_packaging()


