cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-cognito-identity)

  file(GLOB AWS_COGNITO-IDENTITY_HEADERS
    "include/aws/cognito-identity/*.h"
  )

  file(GLOB AWS_COGNITO-IDENTITY_MODEL_HEADERS
    "include/aws/cognito-identity/model/*.h"
  )

  file(GLOB AWS_COGNITO-IDENTITY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_COGNITO-IDENTITY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB COGNITO-IDENTITY_UNIFIED_HEADERS
    ${AWS_COGNITO-IDENTITY_HEADERS}
    ${AWS_COGNITO-IDENTITY_MODEL_HEADERS}
  )

  file(GLOB COGNITO-IDENTITY_UNITY_SRC
    ${AWS_COGNITO-IDENTITY_SOURCE}
    ${AWS_COGNITO-IDENTITY_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("COGNITO-IDENTITY" COGNITO-IDENTITY_UNITY_SRC)
  endif()

  file(GLOB COGNITO-IDENTITY_SRC
    ${COGNITO-IDENTITY_UNIFIED_HEADERS}
    ${COGNITO-IDENTITY_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cognito-identity" FILES ${AWS_COGNITO-IDENTITY_HEADERS})
      source_group("Header Files\\aws\\cognito-identity\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_COGNITO-IDENTITY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(COGNITO-IDENTITY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${COGNITO-IDENTITY_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_COGNITOIDENTITY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cognito-identity ${LIBTYPE} ${COGNITO-IDENTITY_SRC})

  target_include_directories(aws-cpp-sdk-cognito-identity PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cognito-identity aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-cognito-identity
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-cognito-identity)
    else()
      install (TARGETS aws-cpp-sdk-cognito-identity
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_COGNITO-IDENTITY_HEADERS} DESTINATION include/aws/cognito-identity)
  install (FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS} DESTINATION include/aws/cognito-identity/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-cognito-identity.autopkg DESTINATION nuget)
  endif()



