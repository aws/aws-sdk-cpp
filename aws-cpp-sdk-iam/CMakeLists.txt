add_project(aws-cpp-sdk-iam "C++ SDK for the AWS iam service" aws-cpp-sdk-core)

file(GLOB AWS_IAM_HEADERS
    "include/aws/iam/*.h"
)

file(GLOB AWS_IAM_MODEL_HEADERS
    "include/aws/iam/model/*.h"
)

file(GLOB AWS_IAM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IAM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IAM_UNIFIED_HEADERS
    ${AWS_IAM_HEADERS}
    ${AWS_IAM_MODEL_HEADERS}
)

file(GLOB IAM_UNITY_SRC
    ${AWS_IAM_SOURCE}
    ${AWS_IAM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IAM" IAM_UNITY_SRC)
endif()

file(GLOB IAM_SRC
    ${IAM_UNIFIED_HEADERS}
    ${IAM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iam" FILES ${AWS_IAM_HEADERS})
        source_group("Header Files\\aws\\iam\\model" FILES ${AWS_IAM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IAM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IAM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IAM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${IAM_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IAM_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${IAM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_IAM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iam)
install (FILES ${AWS_IAM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iam/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


