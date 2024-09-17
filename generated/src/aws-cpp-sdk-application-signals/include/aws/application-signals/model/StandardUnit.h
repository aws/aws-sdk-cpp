/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{
  enum class StandardUnit
  {
    NOT_SET,
    Microseconds,
    Milliseconds,
    Seconds,
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

namespace StandardUnitMapper
{
AWS_APPLICATIONSIGNALS_API StandardUnit GetStandardUnitForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForStandardUnit(StandardUnit value);
} // namespace StandardUnitMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
