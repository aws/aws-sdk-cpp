﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Model {
enum class TestType {
  NOT_SET,
  BUILTIN_FUZZ,
  APPIUM_JAVA_JUNIT,
  APPIUM_JAVA_TESTNG,
  APPIUM_PYTHON,
  APPIUM_NODE,
  APPIUM_RUBY,
  APPIUM_WEB_JAVA_JUNIT,
  APPIUM_WEB_JAVA_TESTNG,
  APPIUM_WEB_PYTHON,
  APPIUM_WEB_NODE,
  APPIUM_WEB_RUBY,
  INSTRUMENTATION,
  XCTEST,
  XCTEST_UI
};

namespace TestTypeMapper {
AWS_DEVICEFARM_API TestType GetTestTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForTestType(TestType value);
}  // namespace TestTypeMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
