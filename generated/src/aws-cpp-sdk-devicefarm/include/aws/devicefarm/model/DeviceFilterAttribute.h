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
  enum class DeviceFilterAttribute
  {
    NOT_SET,
    ARN,
    PLATFORM,
    OS_VERSION,
    MODEL,
    AVAILABILITY,
    FORM_FACTOR,
    MANUFACTURER,
    REMOTE_ACCESS_ENABLED,
    REMOTE_DEBUG_ENABLED,
    INSTANCE_ARN,
    INSTANCE_LABELS,
    FLEET_TYPE
  };

namespace DeviceFilterAttributeMapper
{
AWS_DEVICEFARM_API DeviceFilterAttribute GetDeviceFilterAttributeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceFilterAttribute(DeviceFilterAttribute value);
} // namespace DeviceFilterAttributeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
