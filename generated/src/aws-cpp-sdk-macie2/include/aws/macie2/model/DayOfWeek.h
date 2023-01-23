/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class DayOfWeek
  {
    NOT_SET,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

namespace DayOfWeekMapper
{
AWS_MACIE2_API DayOfWeek GetDayOfWeekForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForDayOfWeek(DayOfWeek value);
} // namespace DayOfWeekMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
