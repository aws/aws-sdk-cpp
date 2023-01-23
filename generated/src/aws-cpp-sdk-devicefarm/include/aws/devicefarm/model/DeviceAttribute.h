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
  enum class DeviceAttribute
  {
    NOT_SET,
    ARN,
    PLATFORM,
    FORM_FACTOR,
    MANUFACTURER,
    REMOTE_ACCESS_ENABLED,
    REMOTE_DEBUG_ENABLED,
    APPIUM_VERSION,
    INSTANCE_ARN,
    INSTANCE_LABELS,
    FLEET_TYPE,
    OS_VERSION,
    MODEL,
    AVAILABILITY
  };

namespace DeviceAttributeMapper
{
AWS_DEVICEFARM_API DeviceAttribute GetDeviceAttributeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceAttribute(DeviceAttribute value);
} // namespace DeviceAttributeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
