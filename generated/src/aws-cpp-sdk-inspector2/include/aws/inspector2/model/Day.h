/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Day
  {
    NOT_SET,
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
  };

namespace DayMapper
{
AWS_INSPECTOR2_API Day GetDayForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForDay(Day value);
} // namespace DayMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
