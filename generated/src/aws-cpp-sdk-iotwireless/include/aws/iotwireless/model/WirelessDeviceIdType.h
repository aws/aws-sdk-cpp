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
  enum class WirelessDeviceIdType
  {
    NOT_SET,
    WirelessDeviceId,
    DevEui,
    ThingName,
    SidewalkManufacturingSn
  };

namespace WirelessDeviceIdTypeMapper
{
AWS_IOTWIRELESS_API WirelessDeviceIdType GetWirelessDeviceIdTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessDeviceIdType(WirelessDeviceIdType value);
} // namespace WirelessDeviceIdTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
