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
  enum class DeviceFormFactor
  {
    NOT_SET,
    PHONE,
    TABLET
  };

namespace DeviceFormFactorMapper
{
AWS_DEVICEFARM_API DeviceFormFactor GetDeviceFormFactorForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceFormFactor(DeviceFormFactor value);
} // namespace DeviceFormFactorMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
