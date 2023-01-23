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
  enum class WirelessDeviceFrameInfo
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace WirelessDeviceFrameInfoMapper
{
AWS_IOTWIRELESS_API WirelessDeviceFrameInfo GetWirelessDeviceFrameInfoForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessDeviceFrameInfo(WirelessDeviceFrameInfo value);
} // namespace WirelessDeviceFrameInfoMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
