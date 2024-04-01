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
  enum class DefaultQueueBudgetAction
  {
    NOT_SET,
    NONE,
    STOP_SCHEDULING_AND_COMPLETE_TASKS,
    STOP_SCHEDULING_AND_CANCEL_TASKS
  };

namespace DefaultQueueBudgetActionMapper
{
AWS_DEADLINE_API DefaultQueueBudgetAction GetDefaultQueueBudgetActionForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForDefaultQueueBudgetAction(DefaultQueueBudgetAction value);
} // namespace DefaultQueueBudgetActionMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
