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
  enum class ThresholdType
  {
    NOT_SET,
    PERCENTAGE,
    ABSOLUTE_VALUE
  };

namespace ThresholdTypeMapper
{
AWS_BUDGETS_API ThresholdType GetThresholdTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForThresholdType(ThresholdType value);
} // namespace ThresholdTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
