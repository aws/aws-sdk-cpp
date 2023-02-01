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
  enum class WirelessGatewayTaskDefinitionType
  {
    NOT_SET,
    UPDATE
  };

namespace WirelessGatewayTaskDefinitionTypeMapper
{
AWS_IOTWIRELESS_API WirelessGatewayTaskDefinitionType GetWirelessGatewayTaskDefinitionTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayTaskDefinitionType(WirelessGatewayTaskDefinitionType value);
} // namespace WirelessGatewayTaskDefinitionTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
