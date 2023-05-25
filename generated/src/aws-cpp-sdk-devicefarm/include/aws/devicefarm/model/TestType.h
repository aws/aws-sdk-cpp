/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class TestType
  {
    NOT_SET,
    BUILTIN_FUZZ,
    BUILTIN_EXPLORER,
    WEB_PERFORMANCE_PROFILE,
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
    CALABASH,
    INSTRUMENTATION,
    UIAUTOMATION,
    UIAUTOMATOR,
    XCTEST,
    XCTEST_UI,
    REMOTE_ACCESS_RECORD,
    REMOTE_ACCESS_REPLAY
  };

namespace TestTypeMapper
{
AWS_DEVICEFARM_API TestType GetTestTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForTestType(TestType value);
} // namespace TestTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
