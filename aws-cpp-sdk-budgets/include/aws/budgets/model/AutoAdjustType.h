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
  enum class AutoAdjustType
  {
    NOT_SET,
    HISTORICAL,
    FORECAST
  };

namespace AutoAdjustTypeMapper
{
AWS_BUDGETS_API AutoAdjustType GetAutoAdjustTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForAutoAdjustType(AutoAdjustType value);
} // namespace AutoAdjustTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
