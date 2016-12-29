add_project(aws-cpp-sdk-workspaces "C++ SDK for the AWS workspaces service" aws-cpp-sdk-core)

file(GLOB AWS_WORKSPACES_HEADERS
    "include/aws/workspaces/*.h"
)

file(GLOB AWS_WORKSPACES_MODEL_HEADERS
    "include/aws/workspaces/model/*.h"
)

file(GLOB AWS_WORKSPACES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKSPACES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKSPACES_UNIFIED_HEADERS
    ${AWS_WORKSPACES_HEADERS}
    ${AWS_WORKSPACES_MODEL_HEADERS}
)

file(GLOB WORKSPACES_UNITY_SRC
    ${AWS_WORKSPACES_SOURCE}
    ${AWS_WORKSPACES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKSPACES" WORKSPACES_UNITY_SRC)
endif()

file(GLOB WORKSPACES_SRC
    ${WORKSPACES_UNIFIED_HEADERS}
    ${WORKSPACES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workspaces" FILES ${AWS_WORKSPACES_HEADERS})
        source_group("Header Files\\aws\\workspaces\\model" FILES ${AWS_WORKSPACES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKSPACES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKSPACES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKSPACES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${WORKSPACES_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_WORKSPACES_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${WORKSPACES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_WORKSPACES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces)
install (FILES ${AWS_WORKSPACES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


