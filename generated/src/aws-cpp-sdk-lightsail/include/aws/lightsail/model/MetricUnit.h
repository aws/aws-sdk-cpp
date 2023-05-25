/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class MetricUnit
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

namespace MetricUnitMapper
{
AWS_LIGHTSAIL_API MetricUnit GetMetricUnitForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForMetricUnit(MetricUnit value);
} // namespace MetricUnitMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
