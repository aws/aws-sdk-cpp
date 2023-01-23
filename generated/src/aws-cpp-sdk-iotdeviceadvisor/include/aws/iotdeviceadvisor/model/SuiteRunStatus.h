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
  enum class SuiteRunStatus
  {
    NOT_SET,
    PASS,
    FAIL,
    CANCELED,
    PENDING,
    RUNNING,
    STOPPING,
    STOPPED,
    PASS_WITH_WARNINGS,
    ERROR_
  };

namespace SuiteRunStatusMapper
{
AWS_IOTDEVICEADVISOR_API SuiteRunStatus GetSuiteRunStatusForName(const Aws::String& name);

AWS_IOTDEVICEADVISOR_API Aws::String GetNameForSuiteRunStatus(SuiteRunStatus value);
} // namespace SuiteRunStatusMapper
} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
