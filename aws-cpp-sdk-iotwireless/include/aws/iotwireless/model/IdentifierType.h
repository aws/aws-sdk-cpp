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
  enum class IdentifierType
  {
    NOT_SET,
    PartnerAccountId,
    DevEui,
    GatewayEui,
    WirelessDeviceId,
    WirelessGatewayId
  };

namespace IdentifierTypeMapper
{
AWS_IOTWIRELESS_API IdentifierType GetIdentifierTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForIdentifierType(IdentifierType value);
} // namespace IdentifierTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
