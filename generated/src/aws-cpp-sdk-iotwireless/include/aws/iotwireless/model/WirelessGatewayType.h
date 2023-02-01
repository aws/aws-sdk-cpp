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
  enum class WirelessGatewayType
  {
    NOT_SET,
    LoRaWAN
  };

namespace WirelessGatewayTypeMapper
{
AWS_IOTWIRELESS_API WirelessGatewayType GetWirelessGatewayTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayType(WirelessGatewayType value);
} // namespace WirelessGatewayTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
