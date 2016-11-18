add_project(aws-cpp-sdk-ssm "C++ SDK for the AWS ssm service" aws-cpp-sdk-core)

file(GLOB AWS_SSM_HEADERS
    "include/aws/ssm/*.h"
)

file(GLOB AWS_SSM_MODEL_HEADERS
    "include/aws/ssm/model/*.h"
)

file(GLOB AWS_SSM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSM_UNIFIED_HEADERS
    ${AWS_SSM_HEADERS}
    ${AWS_SSM_MODEL_HEADERS}
)

file(GLOB SSM_UNITY_SRC
    ${AWS_SSM_SOURCE}
    ${AWS_SSM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM" SSM_UNITY_SRC)
endif()

file(GLOB SSM_SRC
    ${SSM_UNIFIED_HEADERS}
    ${SSM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssm" FILES ${AWS_SSM_HEADERS})
        source_group("Header Files\\aws\\ssm\\model" FILES ${AWS_SSM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${SSM_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SSM_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${SSM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_SSM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm)
install (FILES ${AWS_SSM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


