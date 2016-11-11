add_project(aws-cpp-sdk-redshift "C++ SDK for the AWS redshift service" aws-cpp-sdk-core)

file(GLOB AWS_REDSHIFT_HEADERS
    "include/aws/redshift/*.h"
)

file(GLOB AWS_REDSHIFT_MODEL_HEADERS
    "include/aws/redshift/model/*.h"
)

file(GLOB AWS_REDSHIFT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_REDSHIFT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB REDSHIFT_UNIFIED_HEADERS
    ${AWS_REDSHIFT_HEADERS}
    ${AWS_REDSHIFT_MODEL_HEADERS}
)

file(GLOB REDSHIFT_UNITY_SRC
    ${AWS_REDSHIFT_SOURCE}
    ${AWS_REDSHIFT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("REDSHIFT" REDSHIFT_UNITY_SRC)
endif()

file(GLOB REDSHIFT_SRC
    ${REDSHIFT_UNIFIED_HEADERS}
    ${REDSHIFT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\redshift" FILES ${AWS_REDSHIFT_HEADERS})
        source_group("Header Files\\aws\\redshift\\model" FILES ${AWS_REDSHIFT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_REDSHIFT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_REDSHIFT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(REDSHIFT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${REDSHIFT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_REDSHIFT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${REDSHIFT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_REDSHIFT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/redshift)
install (FILES ${AWS_REDSHIFT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/redshift/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


