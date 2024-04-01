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
  enum class BudgetActionType
  {
    NOT_SET,
    STOP_SCHEDULING_AND_COMPLETE_TASKS,
    STOP_SCHEDULING_AND_CANCEL_TASKS
  };

namespace BudgetActionTypeMapper
{
AWS_DEADLINE_API BudgetActionType GetBudgetActionTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBudgetActionType(BudgetActionType value);
} // namespace BudgetActionTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
