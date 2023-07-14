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
  enum class DevicePlatform
  {
    NOT_SET,
    ANDROID_,
    IOS
  };

namespace DevicePlatformMapper
{
AWS_DEVICEFARM_API DevicePlatform GetDevicePlatformForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDevicePlatform(DevicePlatform value);
} // namespace DevicePlatformMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
