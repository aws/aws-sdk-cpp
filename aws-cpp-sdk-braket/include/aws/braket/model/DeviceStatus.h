/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class DeviceStatus
  {
    NOT_SET,
    ONLINE,
    OFFLINE
  };

namespace DeviceStatusMapper
{
AWS_BRAKET_API DeviceStatus GetDeviceStatusForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForDeviceStatus(DeviceStatus value);
} // namespace DeviceStatusMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
