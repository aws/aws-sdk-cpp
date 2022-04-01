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
  enum class CostCategoryStatusComponent
  {
    NOT_SET,
    COST_EXPLORER
  };

namespace CostCategoryStatusComponentMapper
{
AWS_COSTEXPLORER_API CostCategoryStatusComponent GetCostCategoryStatusComponentForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategoryStatusComponent(CostCategoryStatusComponent value);
} // namespace CostCategoryStatusComponentMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
