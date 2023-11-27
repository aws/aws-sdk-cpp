add_project(aws-cpp-sdk-eks-auth "C++ SDK for the AWS eks-auth service" aws-cpp-sdk-core)

file(GLOB AWS_EKS-AUTH_HEADERS
    "include/aws/eks-auth/*.h"
)

file(GLOB AWS_EKS-AUTH_MODEL_HEADERS
    "include/aws/eks-auth/model/*.h"
)

file(GLOB AWS_EKS-AUTH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EKS-AUTH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EKS-AUTH_UNIFIED_HEADERS
    ${AWS_EKS-AUTH_HEADERS}
    ${AWS_EKS-AUTH_MODEL_HEADERS}
)

file(GLOB EKS-AUTH_UNITY_SRC
    ${AWS_EKS-AUTH_SOURCE}
    ${AWS_EKS-AUTH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EKS-AUTH" EKS-AUTH_UNITY_SRC)
endif()

file(GLOB EKS-AUTH_SRC
    ${EKS-AUTH_UNIFIED_HEADERS}
    ${EKS-AUTH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\eks-auth" FILES ${AWS_EKS-AUTH_HEADERS})
        source_group("Header Files\\aws\\eks-auth\\model" FILES ${AWS_EKS-AUTH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EKS-AUTH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EKS-AUTH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EKS-AUTH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EKS-AUTH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EKSAUTH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EKS-AUTH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eks-auth)
install (FILES ${AWS_EKS-AUTH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eks-auth/model)

do_packaging()


