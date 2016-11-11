add_project(aws-cpp-sdk-ecr "C++ SDK for the AWS ecr service" aws-cpp-sdk-core)

file(GLOB AWS_ECR_HEADERS
    "include/aws/ecr/*.h"
)

file(GLOB AWS_ECR_MODEL_HEADERS
    "include/aws/ecr/model/*.h"
)

file(GLOB AWS_ECR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ECR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ECR_UNIFIED_HEADERS
    ${AWS_ECR_HEADERS}
    ${AWS_ECR_MODEL_HEADERS}
)

file(GLOB ECR_UNITY_SRC
    ${AWS_ECR_SOURCE}
    ${AWS_ECR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ECR" ECR_UNITY_SRC)
endif()

file(GLOB ECR_SRC
    ${ECR_UNIFIED_HEADERS}
    ${ECR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ecr" FILES ${AWS_ECR_HEADERS})
        source_group("Header Files\\aws\\ecr\\model" FILES ${AWS_ECR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ECR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ECR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ECR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${ECR_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ECR_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ECR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ECR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecr)
install (FILES ${AWS_ECR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecr/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


