add_project(aws-cpp-sdk-acm-pca "C++ SDK for the AWS acm-pca service" aws-cpp-sdk-core)

file(GLOB AWS_ACM-PCA_HEADERS
    "include/aws/acm-pca/*.h"
)

file(GLOB AWS_ACM-PCA_MODEL_HEADERS
    "include/aws/acm-pca/model/*.h"
)

file(GLOB AWS_ACM-PCA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACM-PCA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACM-PCA_UNIFIED_HEADERS
    ${AWS_ACM-PCA_HEADERS}
    ${AWS_ACM-PCA_MODEL_HEADERS}
)

file(GLOB ACM-PCA_UNITY_SRC
    ${AWS_ACM-PCA_SOURCE}
    ${AWS_ACM-PCA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACM-PCA" ACM-PCA_UNITY_SRC)
endif()

file(GLOB ACM-PCA_SRC
    ${ACM-PCA_UNIFIED_HEADERS}
    ${ACM-PCA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\acm-pca" FILES ${AWS_ACM-PCA_HEADERS})
        source_group("Header Files\\aws\\acm-pca\\model" FILES ${AWS_ACM-PCA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACM-PCA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACM-PCA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACM-PCA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACM-PCA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACMPCA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACM-PCA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/acm-pca)
install (FILES ${AWS_ACM-PCA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/acm-pca/model)

do_packaging()


