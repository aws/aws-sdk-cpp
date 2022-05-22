/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class FleetMetricUnit
  {
    NOT_SET,
    Seconds,
    Microseconds,
    Milliseconds,
    Bytes,
    Kilobytes,
    Megabytes,
    Gigabytes,
    Terabytes,
    Bits,
    Kilobits,
    Megabits,
    Gigabits,
    Terabits,
    Percent,
    Count,
    Bytes_Second,
    Kilobytes_Second,
    Megabytes_Second,
    Gigabytes_Second,
    Terabytes_Second,
    Bits_Second,
    Kilobits_Second,
    Megabits_Second,
    Gigabits_Second,
    Terabits_Second,
    Count_Second,
    None
  };

namespace FleetMetricUnitMapper
{
AWS_IOT_API FleetMetricUnit GetFleetMetricUnitForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForFleetMetricUnit(FleetMetricUnit value);
} // namespace FleetMetricUnitMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
