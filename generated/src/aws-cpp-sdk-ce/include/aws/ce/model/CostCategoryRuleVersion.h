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
  enum class CostCategoryRuleVersion
  {
    NOT_SET,
    CostCategoryExpression_v1
  };

namespace CostCategoryRuleVersionMapper
{
AWS_COSTEXPLORER_API CostCategoryRuleVersion GetCostCategoryRuleVersionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategoryRuleVersion(CostCategoryRuleVersion value);
} // namespace CostCategoryRuleVersionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
