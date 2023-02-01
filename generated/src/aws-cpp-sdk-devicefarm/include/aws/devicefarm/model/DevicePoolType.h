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
  enum class DevicePoolType
  {
    NOT_SET,
    CURATED,
    PRIVATE_
  };

namespace DevicePoolTypeMapper
{
AWS_DEVICEFARM_API DevicePoolType GetDevicePoolTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDevicePoolType(DevicePoolType value);
} // namespace DevicePoolTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
