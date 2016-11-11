add_project(aws-cpp-sdk-monitoring "C++ SDK for the AWS monitoring service" aws-cpp-sdk-core)

file(GLOB AWS_MONITORING_HEADERS
    "include/aws/monitoring/*.h"
)

file(GLOB AWS_MONITORING_MODEL_HEADERS
    "include/aws/monitoring/model/*.h"
)

file(GLOB AWS_MONITORING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MONITORING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MONITORING_UNIFIED_HEADERS
    ${AWS_MONITORING_HEADERS}
    ${AWS_MONITORING_MODEL_HEADERS}
)

file(GLOB MONITORING_UNITY_SRC
    ${AWS_MONITORING_SOURCE}
    ${AWS_MONITORING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MONITORING" MONITORING_UNITY_SRC)
endif()

file(GLOB MONITORING_SRC
    ${MONITORING_UNIFIED_HEADERS}
    ${MONITORING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\monitoring" FILES ${AWS_MONITORING_HEADERS})
        source_group("Header Files\\aws\\monitoring\\model" FILES ${AWS_MONITORING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MONITORING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MONITORING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MONITORING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${MONITORING_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDWATCH_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${MONITORING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_MONITORING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/monitoring)
install (FILES ${AWS_MONITORING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/monitoring/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


