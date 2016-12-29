add_project(aws-cpp-sdk-codedeploy "C++ SDK for the AWS codedeploy service" aws-cpp-sdk-core)

file(GLOB AWS_CODEDEPLOY_HEADERS
    "include/aws/codedeploy/*.h"
)

file(GLOB AWS_CODEDEPLOY_MODEL_HEADERS
    "include/aws/codedeploy/model/*.h"
)

file(GLOB AWS_CODEDEPLOY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEDEPLOY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEDEPLOY_UNIFIED_HEADERS
    ${AWS_CODEDEPLOY_HEADERS}
    ${AWS_CODEDEPLOY_MODEL_HEADERS}
)

file(GLOB CODEDEPLOY_UNITY_SRC
    ${AWS_CODEDEPLOY_SOURCE}
    ${AWS_CODEDEPLOY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEDEPLOY" CODEDEPLOY_UNITY_SRC)
endif()

file(GLOB CODEDEPLOY_SRC
    ${CODEDEPLOY_UNIFIED_HEADERS}
    ${CODEDEPLOY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codedeploy" FILES ${AWS_CODEDEPLOY_HEADERS})
        source_group("Header Files\\aws\\codedeploy\\model" FILES ${AWS_CODEDEPLOY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEDEPLOY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEDEPLOY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEDEPLOY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CODEDEPLOY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODEDEPLOY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CODEDEPLOY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CODEDEPLOY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codedeploy)
install (FILES ${AWS_CODEDEPLOY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codedeploy/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


