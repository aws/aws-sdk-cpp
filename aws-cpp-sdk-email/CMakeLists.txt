add_project(aws-cpp-sdk-email "C++ SDK for the AWS email service" aws-cpp-sdk-core)

file(GLOB AWS_EMAIL_HEADERS
    "include/aws/email/*.h"
)

file(GLOB AWS_EMAIL_MODEL_HEADERS
    "include/aws/email/model/*.h"
)

file(GLOB AWS_EMAIL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EMAIL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EMAIL_UNIFIED_HEADERS
    ${AWS_EMAIL_HEADERS}
    ${AWS_EMAIL_MODEL_HEADERS}
)

file(GLOB EMAIL_UNITY_SRC
    ${AWS_EMAIL_SOURCE}
    ${AWS_EMAIL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EMAIL" EMAIL_UNITY_SRC)
endif()

file(GLOB EMAIL_SRC
    ${EMAIL_UNIFIED_HEADERS}
    ${EMAIL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\email" FILES ${AWS_EMAIL_HEADERS})
        source_group("Header Files\\aws\\email\\model" FILES ${AWS_EMAIL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EMAIL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EMAIL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EMAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${EMAIL_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SES_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${EMAIL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_EMAIL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/email)
install (FILES ${AWS_EMAIL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/email/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


