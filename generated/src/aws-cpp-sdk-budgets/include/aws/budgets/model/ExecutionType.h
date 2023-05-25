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
  enum class ExecutionType
  {
    NOT_SET,
    APPROVE_BUDGET_ACTION,
    RETRY_BUDGET_ACTION,
    REVERSE_BUDGET_ACTION,
    RESET_BUDGET_ACTION
  };

namespace ExecutionTypeMapper
{
AWS_BUDGETS_API ExecutionType GetExecutionTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForExecutionType(ExecutionType value);
} // namespace ExecutionTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
