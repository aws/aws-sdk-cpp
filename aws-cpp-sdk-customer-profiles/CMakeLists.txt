add_project(aws-cpp-sdk-customer-profiles "C++ SDK for the AWS customer-profiles service" aws-cpp-sdk-core)

file(GLOB AWS_CUSTOMER-PROFILES_HEADERS
    "include/aws/customer-profiles/*.h"
)

file(GLOB AWS_CUSTOMER-PROFILES_MODEL_HEADERS
    "include/aws/customer-profiles/model/*.h"
)

file(GLOB AWS_CUSTOMER-PROFILES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CUSTOMER-PROFILES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CUSTOMER-PROFILES_UNIFIED_HEADERS
    ${AWS_CUSTOMER-PROFILES_HEADERS}
    ${AWS_CUSTOMER-PROFILES_MODEL_HEADERS}
)

file(GLOB CUSTOMER-PROFILES_UNITY_SRC
    ${AWS_CUSTOMER-PROFILES_SOURCE}
    ${AWS_CUSTOMER-PROFILES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CUSTOMER-PROFILES" CUSTOMER-PROFILES_UNITY_SRC)
endif()

file(GLOB CUSTOMER-PROFILES_SRC
    ${CUSTOMER-PROFILES_UNIFIED_HEADERS}
    ${CUSTOMER-PROFILES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\customer-profiles" FILES ${AWS_CUSTOMER-PROFILES_HEADERS})
        source_group("Header Files\\aws\\customer-profiles\\model" FILES ${AWS_CUSTOMER-PROFILES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CUSTOMER-PROFILES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CUSTOMER-PROFILES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CUSTOMER-PROFILES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CUSTOMER-PROFILES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CUSTOMERPROFILES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CUSTOMER-PROFILES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/customer-profiles)
install (FILES ${AWS_CUSTOMER-PROFILES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/customer-profiles/model)

do_packaging()


