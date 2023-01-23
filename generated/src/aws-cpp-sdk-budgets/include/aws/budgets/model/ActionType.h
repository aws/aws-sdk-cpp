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
  enum class ActionType
  {
    NOT_SET,
    APPLY_IAM_POLICY,
    APPLY_SCP_POLICY,
    RUN_SSM_DOCUMENTS
  };

namespace ActionTypeMapper
{
AWS_BUDGETS_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
