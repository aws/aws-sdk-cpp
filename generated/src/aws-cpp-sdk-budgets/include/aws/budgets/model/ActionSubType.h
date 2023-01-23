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
  enum class ActionSubType
  {
    NOT_SET,
    STOP_EC2_INSTANCES,
    STOP_RDS_INSTANCES
  };

namespace ActionSubTypeMapper
{
AWS_BUDGETS_API ActionSubType GetActionSubTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForActionSubType(ActionSubType value);
} // namespace ActionSubTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
