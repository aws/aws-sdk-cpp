cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-cloudformation)

  file(GLOB AWS_CLOUDFORMATION_HEADERS
    "include/aws/cloudformation/*.h"
  )

  file(GLOB AWS_CLOUDFORMATION_MODEL_HEADERS
    "include/aws/cloudformation/model/*.h"
  )

  file(GLOB AWS_CLOUDFORMATION_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDFORMATION_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDFORMATION_UNIFIED_HEADERS
    ${AWS_CLOUDFORMATION_HEADERS}
    ${AWS_CLOUDFORMATION_MODEL_HEADERS}
  )

  file(GLOB CLOUDFORMATION_UNITY_SRC
    ${AWS_CLOUDFORMATION_SOURCE}
    ${AWS_CLOUDFORMATION_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDFORMATION" CLOUDFORMATION_UNITY_SRC)
  endif()

  file(GLOB CLOUDFORMATION_SRC
    ${CLOUDFORMATION_UNIFIED_HEADERS}
    ${CLOUDFORMATION_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudformation" FILES ${AWS_CLOUDFORMATION_HEADERS})
      source_group("Header Files\\aws\\cloudformation\\model" FILES ${AWS_CLOUDFORMATION_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDFORMATION_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDFORMATION_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDFORMATION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDFORMATION_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDFORMATION_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudformation ${LIBTYPE} ${CLOUDFORMATION_SRC})

  target_include_directories(aws-cpp-sdk-cloudformation PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudformation aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-cloudformation
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-cloudformation)
    else()
      install (TARGETS aws-cpp-sdk-cloudformation
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_CLOUDFORMATION_HEADERS} DESTINATION include/aws/cloudformation)
  install (FILES ${AWS_CLOUDFORMATION_MODEL_HEADERS} DESTINATION include/aws/cloudformation/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-cloudformation.autopkg DESTINATION nuget)
  endif()



