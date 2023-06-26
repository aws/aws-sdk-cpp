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
  enum class WirelessGatewayIdType
  {
    NOT_SET,
    GatewayEui,
    WirelessGatewayId,
    ThingName
  };

namespace WirelessGatewayIdTypeMapper
{
AWS_IOTWIRELESS_API WirelessGatewayIdType GetWirelessGatewayIdTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayIdType(WirelessGatewayIdType value);
} // namespace WirelessGatewayIdTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
