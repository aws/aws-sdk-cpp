add_project(aws-cpp-sdk-gamelift "C++ SDK for the AWS gamelift service" aws-cpp-sdk-core)

file(GLOB AWS_GAMELIFT_HEADERS
    "include/aws/gamelift/*.h"
)

file(GLOB AWS_GAMELIFT_MODEL_HEADERS
    "include/aws/gamelift/model/*.h"
)

file(GLOB AWS_GAMELIFT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GAMELIFT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GAMELIFT_UNIFIED_HEADERS
    ${AWS_GAMELIFT_HEADERS}
    ${AWS_GAMELIFT_MODEL_HEADERS}
)

file(GLOB GAMELIFT_UNITY_SRC
    ${AWS_GAMELIFT_SOURCE}
    ${AWS_GAMELIFT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GAMELIFT" GAMELIFT_UNITY_SRC)
endif()

file(GLOB GAMELIFT_SRC
    ${GAMELIFT_UNIFIED_HEADERS}
    ${GAMELIFT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\gamelift" FILES ${AWS_GAMELIFT_HEADERS})
        source_group("Header Files\\aws\\gamelift\\model" FILES ${AWS_GAMELIFT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GAMELIFT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GAMELIFT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GAMELIFT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${GAMELIFT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_GAMELIFT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${GAMELIFT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_GAMELIFT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gamelift)
install (FILES ${AWS_GAMELIFT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gamelift/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


