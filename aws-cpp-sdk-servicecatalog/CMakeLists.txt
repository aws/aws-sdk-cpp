add_project(aws-cpp-sdk-servicecatalog "C++ SDK for the AWS servicecatalog service" aws-cpp-sdk-core)

file(GLOB AWS_SERVICECATALOG_HEADERS
    "include/aws/servicecatalog/*.h"
)

file(GLOB AWS_SERVICECATALOG_MODEL_HEADERS
    "include/aws/servicecatalog/model/*.h"
)

file(GLOB AWS_SERVICECATALOG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SERVICECATALOG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SERVICECATALOG_UNIFIED_HEADERS
    ${AWS_SERVICECATALOG_HEADERS}
    ${AWS_SERVICECATALOG_MODEL_HEADERS}
)

file(GLOB SERVICECATALOG_UNITY_SRC
    ${AWS_SERVICECATALOG_SOURCE}
    ${AWS_SERVICECATALOG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICECATALOG" SERVICECATALOG_UNITY_SRC)
endif()

file(GLOB SERVICECATALOG_SRC
    ${SERVICECATALOG_UNIFIED_HEADERS}
    ${SERVICECATALOG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\servicecatalog" FILES ${AWS_SERVICECATALOG_HEADERS})
        source_group("Header Files\\aws\\servicecatalog\\model" FILES ${AWS_SERVICECATALOG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SERVICECATALOG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SERVICECATALOG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SERVICECATALOG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${SERVICECATALOG_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SERVICECATALOG_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${SERVICECATALOG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_SERVICECATALOG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog)
install (FILES ${AWS_SERVICECATALOG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


