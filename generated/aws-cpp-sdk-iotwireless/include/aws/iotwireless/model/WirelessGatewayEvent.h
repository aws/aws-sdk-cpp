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
  enum class WirelessGatewayEvent
  {
    NOT_SET,
    CUPS_Request,
    Certificate
  };

namespace WirelessGatewayEventMapper
{
AWS_IOTWIRELESS_API WirelessGatewayEvent GetWirelessGatewayEventForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayEvent(WirelessGatewayEvent value);
} // namespace WirelessGatewayEventMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
