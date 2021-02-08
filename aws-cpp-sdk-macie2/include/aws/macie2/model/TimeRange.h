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
  enum class TimeRange
  {
    NOT_SET,
    MONTH_TO_DATE,
    PAST_30_DAYS
  };

namespace TimeRangeMapper
{
AWS_MACIE2_API TimeRange GetTimeRangeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForTimeRange(TimeRange value);
} // namespace TimeRangeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
