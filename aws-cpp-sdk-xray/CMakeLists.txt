add_project(aws-cpp-sdk-xray "C++ SDK for the AWS xray service" aws-cpp-sdk-core)

file(GLOB AWS_XRAY_HEADERS
    "include/aws/xray/*.h"
)

file(GLOB AWS_XRAY_MODEL_HEADERS
    "include/aws/xray/model/*.h"
)

file(GLOB AWS_XRAY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_XRAY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB XRAY_UNIFIED_HEADERS
    ${AWS_XRAY_HEADERS}
    ${AWS_XRAY_MODEL_HEADERS}
)

file(GLOB XRAY_UNITY_SRC
    ${AWS_XRAY_SOURCE}
    ${AWS_XRAY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("XRAY" XRAY_UNITY_SRC)
endif()

file(GLOB XRAY_SRC
    ${XRAY_UNIFIED_HEADERS}
    ${XRAY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\xray" FILES ${AWS_XRAY_HEADERS})
        source_group("Header Files\\aws\\xray\\model" FILES ${AWS_XRAY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_XRAY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_XRAY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(XRAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${XRAY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_XRAY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${XRAY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_XRAY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/xray)
install (FILES ${AWS_XRAY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/xray/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


