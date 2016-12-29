add_project(aws-cpp-sdk-sns "C++ SDK for the AWS sns service" aws-cpp-sdk-core)

file(GLOB AWS_SNS_HEADERS
    "include/aws/sns/*.h"
)

file(GLOB AWS_SNS_MODEL_HEADERS
    "include/aws/sns/model/*.h"
)

file(GLOB AWS_SNS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SNS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SNS_UNIFIED_HEADERS
    ${AWS_SNS_HEADERS}
    ${AWS_SNS_MODEL_HEADERS}
)

file(GLOB SNS_UNITY_SRC
    ${AWS_SNS_SOURCE}
    ${AWS_SNS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SNS" SNS_UNITY_SRC)
endif()

file(GLOB SNS_SRC
    ${SNS_UNIFIED_HEADERS}
    ${SNS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sns" FILES ${AWS_SNS_HEADERS})
        source_group("Header Files\\aws\\sns\\model" FILES ${AWS_SNS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SNS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SNS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SNS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${SNS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SNS_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${SNS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_SNS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sns)
install (FILES ${AWS_SNS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sns/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


