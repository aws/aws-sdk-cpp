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
  enum class DimensionName
  {
    NOT_SET,
    DeviceId,
    GatewayId
  };

namespace DimensionNameMapper
{
AWS_IOTWIRELESS_API DimensionName GetDimensionNameForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForDimensionName(DimensionName value);
} // namespace DimensionNameMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
