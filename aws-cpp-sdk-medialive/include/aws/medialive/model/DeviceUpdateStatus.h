/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class DeviceUpdateStatus
  {
    NOT_SET,
    UP_TO_DATE,
    NOT_UP_TO_DATE
  };

namespace DeviceUpdateStatusMapper
{
AWS_MEDIALIVE_API DeviceUpdateStatus GetDeviceUpdateStatusForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDeviceUpdateStatus(DeviceUpdateStatus value);
} // namespace DeviceUpdateStatusMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
