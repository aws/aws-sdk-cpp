add_project(aws-cpp-sdk-devicefarm "C++ SDK for the AWS devicefarm service" aws-cpp-sdk-core)

file(GLOB AWS_DEVICEFARM_HEADERS
    "include/aws/devicefarm/*.h"
)

file(GLOB AWS_DEVICEFARM_MODEL_HEADERS
    "include/aws/devicefarm/model/*.h"
)

file(GLOB AWS_DEVICEFARM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DEVICEFARM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DEVICEFARM_UNIFIED_HEADERS
    ${AWS_DEVICEFARM_HEADERS}
    ${AWS_DEVICEFARM_MODEL_HEADERS}
)

file(GLOB DEVICEFARM_UNITY_SRC
    ${AWS_DEVICEFARM_SOURCE}
    ${AWS_DEVICEFARM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DEVICEFARM" DEVICEFARM_UNITY_SRC)
endif()

file(GLOB DEVICEFARM_SRC
    ${DEVICEFARM_UNIFIED_HEADERS}
    ${DEVICEFARM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\devicefarm" FILES ${AWS_DEVICEFARM_HEADERS})
        source_group("Header Files\\aws\\devicefarm\\model" FILES ${AWS_DEVICEFARM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DEVICEFARM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DEVICEFARM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DEVICEFARM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${DEVICEFARM_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DEVICEFARM_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${DEVICEFARM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_DEVICEFARM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devicefarm)
install (FILES ${AWS_DEVICEFARM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devicefarm/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


