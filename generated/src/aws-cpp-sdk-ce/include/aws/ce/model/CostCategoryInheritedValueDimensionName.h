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
  enum class CostCategoryInheritedValueDimensionName
  {
    NOT_SET,
    LINKED_ACCOUNT_NAME,
    TAG
  };

namespace CostCategoryInheritedValueDimensionNameMapper
{
AWS_COSTEXPLORER_API CostCategoryInheritedValueDimensionName GetCostCategoryInheritedValueDimensionNameForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategoryInheritedValueDimensionName(CostCategoryInheritedValueDimensionName value);
} // namespace CostCategoryInheritedValueDimensionNameMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
