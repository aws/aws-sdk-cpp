/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class LookbackPeriodInDays
  {
    NOT_SET,
    SEVEN_DAYS,
    THIRTY_DAYS,
    SIXTY_DAYS
  };

namespace LookbackPeriodInDaysMapper
{
AWS_COSTEXPLORER_API LookbackPeriodInDays GetLookbackPeriodInDaysForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForLookbackPeriodInDays(LookbackPeriodInDays value);
} // namespace LookbackPeriodInDaysMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
