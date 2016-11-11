add_project(aws-cpp-sdk-autoscaling "C++ SDK for the AWS autoscaling service" aws-cpp-sdk-core)

file(GLOB AWS_AUTOSCALING_HEADERS
    "include/aws/autoscaling/*.h"
)

file(GLOB AWS_AUTOSCALING_MODEL_HEADERS
    "include/aws/autoscaling/model/*.h"
)

file(GLOB AWS_AUTOSCALING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AUTOSCALING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AUTOSCALING_UNIFIED_HEADERS
    ${AWS_AUTOSCALING_HEADERS}
    ${AWS_AUTOSCALING_MODEL_HEADERS}
)

file(GLOB AUTOSCALING_UNITY_SRC
    ${AWS_AUTOSCALING_SOURCE}
    ${AWS_AUTOSCALING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AUTOSCALING" AUTOSCALING_UNITY_SRC)
endif()

file(GLOB AUTOSCALING_SRC
    ${AUTOSCALING_UNIFIED_HEADERS}
    ${AUTOSCALING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\autoscaling" FILES ${AWS_AUTOSCALING_HEADERS})
        source_group("Header Files\\aws\\autoscaling\\model" FILES ${AWS_AUTOSCALING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AUTOSCALING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AUTOSCALING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AUTOSCALING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${AUTOSCALING_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_AUTOSCALING_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${AUTOSCALING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_AUTOSCALING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/autoscaling)
install (FILES ${AWS_AUTOSCALING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/autoscaling/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


