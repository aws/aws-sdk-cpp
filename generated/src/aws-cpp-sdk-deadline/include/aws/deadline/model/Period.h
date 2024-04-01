/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class Period
  {
    NOT_SET,
    HOURLY,
    DAILY,
    WEEKLY,
    MONTHLY
  };

namespace PeriodMapper
{
AWS_DEADLINE_API Period GetPeriodForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForPeriod(Period value);
} // namespace PeriodMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
