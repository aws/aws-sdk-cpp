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
  enum class PositionResourceType
  {
    NOT_SET,
    WirelessDevice,
    WirelessGateway
  };

namespace PositionResourceTypeMapper
{
AWS_IOTWIRELESS_API PositionResourceType GetPositionResourceTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositionResourceType(PositionResourceType value);
} // namespace PositionResourceTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
