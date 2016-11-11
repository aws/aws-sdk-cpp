add_project(aws-cpp-sdk-inspector "C++ SDK for the AWS inspector service" aws-cpp-sdk-core)

file(GLOB AWS_INSPECTOR_HEADERS
    "include/aws/inspector/*.h"
)

file(GLOB AWS_INSPECTOR_MODEL_HEADERS
    "include/aws/inspector/model/*.h"
)

file(GLOB AWS_INSPECTOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_INSPECTOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB INSPECTOR_UNIFIED_HEADERS
    ${AWS_INSPECTOR_HEADERS}
    ${AWS_INSPECTOR_MODEL_HEADERS}
)

file(GLOB INSPECTOR_UNITY_SRC
    ${AWS_INSPECTOR_SOURCE}
    ${AWS_INSPECTOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("INSPECTOR" INSPECTOR_UNITY_SRC)
endif()

file(GLOB INSPECTOR_SRC
    ${INSPECTOR_UNIFIED_HEADERS}
    ${INSPECTOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\inspector" FILES ${AWS_INSPECTOR_HEADERS})
        source_group("Header Files\\aws\\inspector\\model" FILES ${AWS_INSPECTOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_INSPECTOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_INSPECTOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(INSPECTOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${INSPECTOR_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_INSPECTOR_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${INSPECTOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_INSPECTOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/inspector)
install (FILES ${AWS_INSPECTOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/inspector/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


