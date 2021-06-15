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
  enum class BatteryLevel
  {
    NOT_SET,
    normal,
    low,
    critical
  };

namespace BatteryLevelMapper
{
AWS_IOTWIRELESS_API BatteryLevel GetBatteryLevelForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForBatteryLevel(BatteryLevel value);
} // namespace BatteryLevelMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
