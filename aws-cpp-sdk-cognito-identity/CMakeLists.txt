add_project(aws-cpp-sdk-cognito-identity "C++ SDK for the AWS cognito-identity service" aws-cpp-sdk-core)

file(GLOB AWS_COGNITO-IDENTITY_HEADERS
    "include/aws/cognito-identity/*.h"
)

file(GLOB AWS_COGNITO-IDENTITY_MODEL_HEADERS
    "include/aws/cognito-identity/model/*.h"
)

file(GLOB AWS_COGNITO-IDENTITY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COGNITO-IDENTITY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COGNITO-IDENTITY_UNIFIED_HEADERS
    ${AWS_COGNITO-IDENTITY_HEADERS}
    ${AWS_COGNITO-IDENTITY_MODEL_HEADERS}
)

file(GLOB COGNITO-IDENTITY_UNITY_SRC
    ${AWS_COGNITO-IDENTITY_SOURCE}
    ${AWS_COGNITO-IDENTITY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COGNITO-IDENTITY" COGNITO-IDENTITY_UNITY_SRC)
endif()

file(GLOB COGNITO-IDENTITY_SRC
    ${COGNITO-IDENTITY_UNIFIED_HEADERS}
    ${COGNITO-IDENTITY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cognito-identity" FILES ${AWS_COGNITO-IDENTITY_HEADERS})
        source_group("Header Files\\aws\\cognito-identity\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COGNITO-IDENTITY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COGNITO-IDENTITY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${COGNITO-IDENTITY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_COGNITOIDENTITY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${COGNITO-IDENTITY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_COGNITO-IDENTITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cognito-identity)
install (FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cognito-identity/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


