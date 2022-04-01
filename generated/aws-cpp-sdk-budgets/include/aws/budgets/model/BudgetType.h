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
  enum class BudgetType
  {
    NOT_SET,
    USAGE,
    COST,
    RI_UTILIZATION,
    RI_COVERAGE,
    SAVINGS_PLANS_UTILIZATION,
    SAVINGS_PLANS_COVERAGE
  };

namespace BudgetTypeMapper
{
AWS_BUDGETS_API BudgetType GetBudgetTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForBudgetType(BudgetType value);
} // namespace BudgetTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
