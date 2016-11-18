add_project(aws-cpp-sdk-elasticfilesystem "C++ SDK for the AWS elasticfilesystem service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICFILESYSTEM_HEADERS
    "include/aws/elasticfilesystem/*.h"
)

file(GLOB AWS_ELASTICFILESYSTEM_MODEL_HEADERS
    "include/aws/elasticfilesystem/model/*.h"
)

file(GLOB AWS_ELASTICFILESYSTEM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICFILESYSTEM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICFILESYSTEM_UNIFIED_HEADERS
    ${AWS_ELASTICFILESYSTEM_HEADERS}
    ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS}
)

file(GLOB ELASTICFILESYSTEM_UNITY_SRC
    ${AWS_ELASTICFILESYSTEM_SOURCE}
    ${AWS_ELASTICFILESYSTEM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICFILESYSTEM" ELASTICFILESYSTEM_UNITY_SRC)
endif()

file(GLOB ELASTICFILESYSTEM_SRC
    ${ELASTICFILESYSTEM_UNIFIED_HEADERS}
    ${ELASTICFILESYSTEM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticfilesystem" FILES ${AWS_ELASTICFILESYSTEM_HEADERS})
        source_group("Header Files\\aws\\elasticfilesystem\\model" FILES ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICFILESYSTEM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICFILESYSTEM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICFILESYSTEM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${ELASTICFILESYSTEM_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_EFS_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ELASTICFILESYSTEM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ELASTICFILESYSTEM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticfilesystem)
install (FILES ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticfilesystem/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


