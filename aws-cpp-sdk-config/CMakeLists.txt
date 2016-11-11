add_project(aws-cpp-sdk-config "C++ SDK for the AWS config service" aws-cpp-sdk-core)

file(GLOB AWS_CONFIG_HEADERS
    "include/aws/config/*.h"
)

file(GLOB AWS_CONFIG_MODEL_HEADERS
    "include/aws/config/model/*.h"
)

file(GLOB AWS_CONFIG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONFIG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONFIG_UNIFIED_HEADERS
    ${AWS_CONFIG_HEADERS}
    ${AWS_CONFIG_MODEL_HEADERS}
)

file(GLOB CONFIG_UNITY_SRC
    ${AWS_CONFIG_SOURCE}
    ${AWS_CONFIG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONFIG" CONFIG_UNITY_SRC)
endif()

file(GLOB CONFIG_SRC
    ${CONFIG_UNIFIED_HEADERS}
    ${CONFIG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\config" FILES ${AWS_CONFIG_HEADERS})
        source_group("Header Files\\aws\\config\\model" FILES ${AWS_CONFIG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONFIG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONFIG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONFIG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CONFIG_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CONFIGSERVICE_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CONFIG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CONFIG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/config)
install (FILES ${AWS_CONFIG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/config/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


