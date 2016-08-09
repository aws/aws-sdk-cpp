cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-elasticfilesystem)

  file(GLOB AWS_ELASTICFILESYSTEM_HEADERS
    "include/aws/elasticfilesystem/*.h"
  )

  file(GLOB AWS_ELASTICFILESYSTEM_MODEL_HEADERS
    "include/aws/elasticfilesystem/model/*.h"
  )

  file(GLOB AWS_ELASTICFILESYSTEM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICFILESYSTEM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICFILESYSTEM_UNIFIED_HEADERS
    ${AWS_ELASTICFILESYSTEM_HEADERS}
    ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS}
  )

  file(GLOB ELASTICFILESYSTEM_UNITY_SRC
    ${AWS_ELASTICFILESYSTEM_SOURCE}
    ${AWS_ELASTICFILESYSTEM_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICFILESYSTEM" ELASTICFILESYSTEM_UNITY_SRC)
  endif()

  file(GLOB ELASTICFILESYSTEM_SRC
    ${ELASTICFILESYSTEM_UNIFIED_HEADERS}
    ${ELASTICFILESYSTEM_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticfilesystem" FILES ${AWS_ELASTICFILESYSTEM_HEADERS})
      source_group("Header Files\\aws\\elasticfilesystem\\model" FILES ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICFILESYSTEM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICFILESYSTEM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICFILESYSTEM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICFILESYSTEM_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_EFS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticfilesystem ${LIBTYPE} ${ELASTICFILESYSTEM_SRC})

  target_include_directories(aws-cpp-sdk-elasticfilesystem PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticfilesystem aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-elasticfilesystem
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-elasticfilesystem)
    else()
      install (TARGETS aws-cpp-sdk-elasticfilesystem
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ELASTICFILESYSTEM_HEADERS} DESTINATION include/aws/elasticfilesystem)
  install (FILES ${AWS_ELASTICFILESYSTEM_MODEL_HEADERS} DESTINATION include/aws/elasticfilesystem/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-elasticfilesystem.autopkg DESTINATION nuget)
  endif()



