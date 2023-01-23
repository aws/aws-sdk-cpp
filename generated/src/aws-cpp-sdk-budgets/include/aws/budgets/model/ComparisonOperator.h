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
  enum class ComparisonOperator
  {
    NOT_SET,
    GREATER_THAN,
    LESS_THAN,
    EQUAL_TO
  };

namespace ComparisonOperatorMapper
{
AWS_BUDGETS_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
