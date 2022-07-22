/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{
  enum class TestCaseScenarioType
  {
    NOT_SET,
    Advanced,
    Basic
  };

namespace TestCaseScenarioTypeMapper
{
AWS_IOTDEVICEADVISOR_API TestCaseScenarioType GetTestCaseScenarioTypeForName(const Aws::String& name);

AWS_IOTDEVICEADVISOR_API Aws::String GetNameForTestCaseScenarioType(TestCaseScenarioType value);
} // namespace TestCaseScenarioTypeMapper
} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
