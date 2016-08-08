cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-iam)

  file(GLOB AWS_IAM_HEADERS
    "include/aws/iam/*.h"
  )

  file(GLOB AWS_IAM_MODEL_HEADERS
    "include/aws/iam/model/*.h"
  )

  file(GLOB AWS_IAM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_IAM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB IAM_UNIFIED_HEADERS
    ${AWS_IAM_HEADERS}
    ${AWS_IAM_MODEL_HEADERS}
  )

  file(GLOB IAM_UNITY_SRC
    ${AWS_IAM_SOURCE}
    ${AWS_IAM_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("IAM" IAM_UNITY_SRC)
  endif()

  file(GLOB IAM_SRC
    ${IAM_UNIFIED_HEADERS}
    ${IAM_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\iam" FILES ${AWS_IAM_HEADERS})
      source_group("Header Files\\aws\\iam\\model" FILES ${AWS_IAM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_IAM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_IAM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(IAM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${IAM_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IAM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-iam ${LIBTYPE} ${IAM_SRC})

  target_include_directories(aws-cpp-sdk-iam PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-iam aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-iam
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-iam)
    else()
      install (TARGETS aws-cpp-sdk-iam
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_IAM_HEADERS} DESTINATION include/aws/iam)
  install (FILES ${AWS_IAM_MODEL_HEADERS} DESTINATION include/aws/iam/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-iam.autopkg DESTINATION nuget)
  endif()



