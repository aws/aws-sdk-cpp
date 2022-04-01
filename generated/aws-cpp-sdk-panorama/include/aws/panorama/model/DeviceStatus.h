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
  enum class DeviceStatus
  {
    NOT_SET,
    AWAITING_PROVISIONING,
    PENDING,
    SUCCEEDED,
    FAILED,
    ERROR_,
    DELETING
  };

namespace DeviceStatusMapper
{
AWS_PANORAMA_API DeviceStatus GetDeviceStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceStatus(DeviceStatus value);
} // namespace DeviceStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
