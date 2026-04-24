add_project(aws-cpp-sdk-kms "C++ SDK for the AWS kms service" aws-cpp-sdk-core)

file(GLOB AWS_KMS_HEADERS
    "include/aws/kms/*.h"
)

file(GLOB AWS_KMS_MODEL_HEADERS
    "include/aws/kms/model/*.h"
)

file(GLOB AWS_KMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KMS_UNIFIED_HEADERS
    ${AWS_KMS_HEADERS}
    ${AWS_KMS_MODEL_HEADERS}
)

file(GLOB KMS_UNITY_SRC
    ${AWS_KMS_SOURCE}
    ${AWS_KMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KMS" KMS_UNITY_SRC)
endif()

file(GLOB KMS_SRC
    ${KMS_UNIFIED_HEADERS}
    ${KMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kms" FILES ${AWS_KMS_HEADERS})
        source_group("Header Files\\aws\\kms\\model" FILES ${AWS_KMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kms)
install (FILES ${AWS_KMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kms/model)

do_packaging()


