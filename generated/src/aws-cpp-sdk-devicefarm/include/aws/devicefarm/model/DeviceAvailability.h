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
  enum class DeviceAvailability
  {
    NOT_SET,
    TEMPORARY_NOT_AVAILABLE,
    BUSY,
    AVAILABLE,
    HIGHLY_AVAILABLE
  };

namespace DeviceAvailabilityMapper
{
AWS_DEVICEFARM_API DeviceAvailability GetDeviceAvailabilityForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceAvailability(DeviceAvailability value);
} // namespace DeviceAvailabilityMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
