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
  enum class ActionStatus
  {
    NOT_SET,
    STANDBY,
    PENDING,
    EXECUTION_IN_PROGRESS,
    EXECUTION_SUCCESS,
    EXECUTION_FAILURE,
    REVERSE_IN_PROGRESS,
    REVERSE_SUCCESS,
    REVERSE_FAILURE,
    RESET_IN_PROGRESS,
    RESET_FAILURE
  };

namespace ActionStatusMapper
{
AWS_BUDGETS_API ActionStatus GetActionStatusForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForActionStatus(ActionStatus value);
} // namespace ActionStatusMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
