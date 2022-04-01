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
  enum class WirelessDeviceEvent
  {
    NOT_SET,
    Join,
    Rejoin,
    Uplink_Data,
    Downlink_Data,
    Registration
  };

namespace WirelessDeviceEventMapper
{
AWS_IOTWIRELESS_API WirelessDeviceEvent GetWirelessDeviceEventForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessDeviceEvent(WirelessDeviceEvent value);
} // namespace WirelessDeviceEventMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
