cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-application-autoscaling)

  file(GLOB AWS_APPLICATION-AUTOSCALING_HEADERS
    "include/aws/application-autoscaling/*.h"
  )

  file(GLOB AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS
    "include/aws/application-autoscaling/model/*.h"
  )

  file(GLOB AWS_APPLICATION-AUTOSCALING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB APPLICATION-AUTOSCALING_UNIFIED_HEADERS
    ${AWS_APPLICATION-AUTOSCALING_HEADERS}
    ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS}
  )

  file(GLOB APPLICATION-AUTOSCALING_UNITY_SRC
    ${AWS_APPLICATION-AUTOSCALING_SOURCE}
    ${AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPLICATION-AUTOSCALING" APPLICATION-AUTOSCALING_UNITY_SRC)
  endif()

  file(GLOB APPLICATION-AUTOSCALING_SRC
    ${APPLICATION-AUTOSCALING_UNIFIED_HEADERS}
    ${APPLICATION-AUTOSCALING_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\application-autoscaling" FILES ${AWS_APPLICATION-AUTOSCALING_HEADERS})
      source_group("Header Files\\aws\\application-autoscaling\\model" FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_APPLICATION-AUTOSCALING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(APPLICATION-AUTOSCALING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${APPLICATION-AUTOSCALING_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_APPLICATIONAUTOSCALING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-application-autoscaling ${LIBTYPE} ${APPLICATION-AUTOSCALING_SRC})

  target_include_directories(aws-cpp-sdk-application-autoscaling PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-application-autoscaling aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-application-autoscaling
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-application-autoscaling)
    else()
      install (TARGETS aws-cpp-sdk-application-autoscaling
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_APPLICATION-AUTOSCALING_HEADERS} DESTINATION include/aws/application-autoscaling)
  install (FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS} DESTINATION include/aws/application-autoscaling/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-application-autoscaling.autopkg DESTINATION nuget)
  endif()



