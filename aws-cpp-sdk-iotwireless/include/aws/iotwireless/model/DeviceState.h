/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class DeviceState
  {
    NOT_SET,
    Provisioned,
    RegisteredNotSeen,
    RegisteredReachable,
    RegisteredUnreachable
  };

namespace DeviceStateMapper
{
AWS_IOTWIRELESS_API DeviceState GetDeviceStateForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForDeviceState(DeviceState value);
} // namespace DeviceStateMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
