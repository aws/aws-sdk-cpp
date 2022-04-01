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
  enum class CostCategorySplitChargeRuleParameterType
  {
    NOT_SET,
    ALLOCATION_PERCENTAGES
  };

namespace CostCategorySplitChargeRuleParameterTypeMapper
{
AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameterType GetCostCategorySplitChargeRuleParameterTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategorySplitChargeRuleParameterType(CostCategorySplitChargeRuleParameterType value);
} // namespace CostCategorySplitChargeRuleParameterTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
