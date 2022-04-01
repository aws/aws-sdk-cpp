﻿/**
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
  enum class WirelessDeviceType
  {
    NOT_SET,
    Sidewalk,
    LoRaWAN
  };

namespace WirelessDeviceTypeMapper
{
AWS_IOTWIRELESS_API WirelessDeviceType GetWirelessDeviceTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessDeviceType(WirelessDeviceType value);
} // namespace WirelessDeviceTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
