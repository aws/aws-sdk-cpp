add_project(aws-cpp-sdk-controltower "C++ SDK for the AWS controltower service" aws-cpp-sdk-core)

file(GLOB AWS_CONTROLTOWER_HEADERS
    "include/aws/controltower/*.h"
)

file(GLOB AWS_CONTROLTOWER_MODEL_HEADERS
    "include/aws/controltower/model/*.h"
)

file(GLOB AWS_CONTROLTOWER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONTROLTOWER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONTROLTOWER_UNIFIED_HEADERS
    ${AWS_CONTROLTOWER_HEADERS}
    ${AWS_CONTROLTOWER_MODEL_HEADERS}
)

file(GLOB CONTROLTOWER_UNITY_SRC
    ${AWS_CONTROLTOWER_SOURCE}
    ${AWS_CONTROLTOWER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONTROLTOWER" CONTROLTOWER_UNITY_SRC)
endif()

file(GLOB CONTROLTOWER_SRC
    ${CONTROLTOWER_UNIFIED_HEADERS}
    ${CONTROLTOWER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\controltower" FILES ${AWS_CONTROLTOWER_HEADERS})
        source_group("Header Files\\aws\\controltower\\model" FILES ${AWS_CONTROLTOWER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONTROLTOWER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONTROLTOWER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONTROLTOWER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONTROLTOWER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONTROLTOWER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONTROLTOWER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/controltower)
install (FILES ${AWS_CONTROLTOWER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/controltower/model)

do_packaging()


