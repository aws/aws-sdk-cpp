/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class CostCategoryRuleType
  {
    NOT_SET,
    REGULAR,
    INHERITED_VALUE
  };

namespace CostCategoryRuleTypeMapper
{
AWS_COSTEXPLORER_API CostCategoryRuleType GetCostCategoryRuleTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategoryRuleType(CostCategoryRuleType value);
} // namespace CostCategoryRuleTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
