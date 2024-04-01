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
  enum class BudgetStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace BudgetStatusMapper
{
AWS_DEADLINE_API BudgetStatus GetBudgetStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBudgetStatus(BudgetStatus value);
} // namespace BudgetStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
