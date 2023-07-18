/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class DeviceConnectionStatus
  {
    NOT_SET,
    ONLINE,
    OFFLINE,
    AWAITING_CREDENTIALS,
    NOT_AVAILABLE,
    ERROR_
  };

namespace DeviceConnectionStatusMapper
{
AWS_PANORAMA_API DeviceConnectionStatus GetDeviceConnectionStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceConnectionStatus(DeviceConnectionStatus value);
} // namespace DeviceConnectionStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
