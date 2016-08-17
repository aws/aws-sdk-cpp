cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-ecr)

  file(GLOB AWS_ECR_HEADERS
    "include/aws/ecr/*.h"
  )

  file(GLOB AWS_ECR_MODEL_HEADERS
    "include/aws/ecr/model/*.h"
  )

  file(GLOB AWS_ECR_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ECR_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ECR_UNIFIED_HEADERS
    ${AWS_ECR_HEADERS}
    ${AWS_ECR_MODEL_HEADERS}
  )

  file(GLOB ECR_UNITY_SRC
    ${AWS_ECR_SOURCE}
    ${AWS_ECR_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ECR" ECR_UNITY_SRC)
  endif()

  file(GLOB ECR_SRC
    ${ECR_UNIFIED_HEADERS}
    ${ECR_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ecr" FILES ${AWS_ECR_HEADERS})
      source_group("Header Files\\aws\\ecr\\model" FILES ${AWS_ECR_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ECR_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ECR_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ECR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ECR_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ECR_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ecr ${LIBTYPE} ${ECR_SRC})

  target_include_directories(aws-cpp-sdk-ecr PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ecr aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-ecr
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-ecr)
    else()
      install (TARGETS aws-cpp-sdk-ecr
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ECR_HEADERS} DESTINATION include/aws/ecr)
  install (FILES ${AWS_ECR_MODEL_HEADERS} DESTINATION include/aws/ecr/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-ecr.autopkg DESTINATION nuget)
  endif()



