/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class Interval
  {
    NOT_SET,
    THIS_MONTH,
    THIS_WEEK,
    ONE_WEEK_AGO,
    TWO_WEEKS_AGO,
    ONE_MONTH_AGO,
    TWO_MONTHS_AGO
  };

namespace IntervalMapper
{
AWS_KENDRA_API Interval GetIntervalForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForInterval(Interval value);
} // namespace IntervalMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
