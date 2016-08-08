cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-machinelearning)

  file(GLOB AWS_MACHINELEARNING_HEADERS
    "include/aws/machinelearning/*.h"
  )

  file(GLOB AWS_MACHINELEARNING_MODEL_HEADERS
    "include/aws/machinelearning/model/*.h"
  )

  file(GLOB AWS_MACHINELEARNING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_MACHINELEARNING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB MACHINELEARNING_UNIFIED_HEADERS
    ${AWS_MACHINELEARNING_HEADERS}
    ${AWS_MACHINELEARNING_MODEL_HEADERS}
  )

  file(GLOB MACHINELEARNING_UNITY_SRC
    ${AWS_MACHINELEARNING_SOURCE}
    ${AWS_MACHINELEARNING_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("MACHINELEARNING" MACHINELEARNING_UNITY_SRC)
  endif()

  file(GLOB MACHINELEARNING_SRC
    ${MACHINELEARNING_UNIFIED_HEADERS}
    ${MACHINELEARNING_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\machinelearning" FILES ${AWS_MACHINELEARNING_HEADERS})
      source_group("Header Files\\aws\\machinelearning\\model" FILES ${AWS_MACHINELEARNING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_MACHINELEARNING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_MACHINELEARNING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(MACHINELEARNING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${MACHINELEARNING_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_MACHINELEARNING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-machinelearning ${LIBTYPE} ${MACHINELEARNING_SRC})

  target_include_directories(aws-cpp-sdk-machinelearning PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-machinelearning aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-machinelearning
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-machinelearning)
    else()
      install (TARGETS aws-cpp-sdk-machinelearning
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_MACHINELEARNING_HEADERS} DESTINATION include/aws/machinelearning)
  install (FILES ${AWS_MACHINELEARNING_MODEL_HEADERS} DESTINATION include/aws/machinelearning/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-machinelearning.autopkg DESTINATION nuget)
  endif()



