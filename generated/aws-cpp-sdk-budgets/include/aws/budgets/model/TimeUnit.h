/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class TimeUnit
  {
    NOT_SET,
    DAILY,
    MONTHLY,
    QUARTERLY,
    ANNUALLY
  };

namespace TimeUnitMapper
{
AWS_BUDGETS_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
