add_project(aws-cpp-sdk-dms "C++ SDK for the AWS dms service" aws-cpp-sdk-core)

file(GLOB AWS_DMS_HEADERS
    "include/aws/dms/*.h"
)

file(GLOB AWS_DMS_MODEL_HEADERS
    "include/aws/dms/model/*.h"
)

file(GLOB AWS_DMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DMS_UNIFIED_HEADERS
    ${AWS_DMS_HEADERS}
    ${AWS_DMS_MODEL_HEADERS}
)

file(GLOB DMS_UNITY_SRC
    ${AWS_DMS_SOURCE}
    ${AWS_DMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DMS" DMS_UNITY_SRC)
endif()

file(GLOB DMS_SRC
    ${DMS_UNIFIED_HEADERS}
    ${DMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\dms" FILES ${AWS_DMS_HEADERS})
        source_group("Header Files\\aws\\dms\\model" FILES ${AWS_DMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${DMS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DATABASEMIGRATIONSERVICE_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${DMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_DMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dms)
install (FILES ${AWS_DMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dms/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


