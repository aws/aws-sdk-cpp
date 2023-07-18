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
  enum class Status
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

namespace StatusMapper
{
AWS_IOTDEVICEADVISOR_API Status GetStatusForName(const Aws::String& name);

AWS_IOTDEVICEADVISOR_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
