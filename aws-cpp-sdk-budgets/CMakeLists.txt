add_project(aws-cpp-sdk-budgets "C++ SDK for the AWS budgets service" aws-cpp-sdk-core)

file(GLOB AWS_BUDGETS_HEADERS
    "include/aws/budgets/*.h"
)

file(GLOB AWS_BUDGETS_MODEL_HEADERS
    "include/aws/budgets/model/*.h"
)

file(GLOB AWS_BUDGETS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BUDGETS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BUDGETS_UNIFIED_HEADERS
    ${AWS_BUDGETS_HEADERS}
    ${AWS_BUDGETS_MODEL_HEADERS}
)

file(GLOB BUDGETS_UNITY_SRC
    ${AWS_BUDGETS_SOURCE}
    ${AWS_BUDGETS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BUDGETS" BUDGETS_UNITY_SRC)
endif()

file(GLOB BUDGETS_SRC
    ${BUDGETS_UNIFIED_HEADERS}
    ${BUDGETS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\budgets" FILES ${AWS_BUDGETS_HEADERS})
        source_group("Header Files\\aws\\budgets\\model" FILES ${AWS_BUDGETS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BUDGETS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BUDGETS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BUDGETS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${BUDGETS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_BUDGETS_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${BUDGETS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_BUDGETS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/budgets)
install (FILES ${AWS_BUDGETS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/budgets/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


