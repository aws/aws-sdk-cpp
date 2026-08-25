add_project(aws-cpp-sdk-iam-toolbox "C++ SDK for the AWS iam-toolbox service" aws-cpp-sdk-core)

file(GLOB AWS_IAM-TOOLBOX_HEADERS
    "include/aws/iam-toolbox/*.h"
)

file(GLOB AWS_IAM-TOOLBOX_MODEL_HEADERS
    "include/aws/iam-toolbox/model/*.h"
)

file(GLOB AWS_IAM-TOOLBOX_INTERNAL_HEADERS
    "include/aws/iam-toolbox/internal/*.h"
)

file(GLOB AWS_IAM-TOOLBOX_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IAM-TOOLBOX_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IAM-TOOLBOX_UNIFIED_HEADERS
    ${AWS_IAM-TOOLBOX_HEADERS}
    ${AWS_IAM-TOOLBOX_INTERNAL_HEADERS}
    ${AWS_IAM-TOOLBOX_MODEL_HEADERS}
)

file(GLOB IAM-TOOLBOX_UNITY_SRC
    ${AWS_IAM-TOOLBOX_SOURCE}
    ${AWS_IAM-TOOLBOX_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IAM-TOOLBOX" IAM-TOOLBOX_UNITY_SRC)
endif()

file(GLOB IAM-TOOLBOX_SRC
    ${IAM-TOOLBOX_UNIFIED_HEADERS}
    ${IAM-TOOLBOX_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iam-toolbox" FILES ${AWS_IAM-TOOLBOX_HEADERS})
        source_group("Header Files\\aws\\iam-toolbox\\internal" FILES ${AWS_IAM-TOOLBOX_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\iam-toolbox\\model" FILES ${AWS_IAM-TOOLBOX_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IAM-TOOLBOX_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IAM-TOOLBOX_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IAM-TOOLBOX_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IAM-TOOLBOX_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IAMTOOLBOX_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IAM-TOOLBOX_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iam-toolbox)
install (FILES ${AWS_IAM-TOOLBOX_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iam-toolbox/model)

do_packaging()


