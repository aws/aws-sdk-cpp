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
  enum class CostCategorySplitChargeMethod
  {
    NOT_SET,
    FIXED,
    PROPORTIONAL,
    EVEN
  };

namespace CostCategorySplitChargeMethodMapper
{
AWS_COSTEXPLORER_API CostCategorySplitChargeMethod GetCostCategorySplitChargeMethodForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategorySplitChargeMethod(CostCategorySplitChargeMethod value);
} // namespace CostCategorySplitChargeMethodMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
