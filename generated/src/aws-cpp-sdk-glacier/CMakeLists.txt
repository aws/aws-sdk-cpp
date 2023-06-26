add_project(aws-cpp-sdk-glacier "C++ SDK for the AWS glacier service" aws-cpp-sdk-core)

file(GLOB AWS_GLACIER_HEADERS
    "include/aws/glacier/*.h"
)

file(GLOB AWS_GLACIER_MODEL_HEADERS
    "include/aws/glacier/model/*.h"
)

file(GLOB AWS_GLACIER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GLACIER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GLACIER_UNIFIED_HEADERS
    ${AWS_GLACIER_HEADERS}
    ${AWS_GLACIER_MODEL_HEADERS}
)

file(GLOB GLACIER_UNITY_SRC
    ${AWS_GLACIER_SOURCE}
    ${AWS_GLACIER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GLACIER" GLACIER_UNITY_SRC)
endif()

file(GLOB GLACIER_SRC
    ${GLACIER_UNIFIED_HEADERS}
    ${GLACIER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\glacier" FILES ${AWS_GLACIER_HEADERS})
        source_group("Header Files\\aws\\glacier\\model" FILES ${AWS_GLACIER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GLACIER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GLACIER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GLACIER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GLACIER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GLACIER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GLACIER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/glacier)
install (FILES ${AWS_GLACIER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/glacier/model)

do_packaging()


