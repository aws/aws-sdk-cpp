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
  enum class CostCategoryStatus
  {
    NOT_SET,
    PROCESSING,
    APPLIED
  };

namespace CostCategoryStatusMapper
{
AWS_COSTEXPLORER_API CostCategoryStatus GetCostCategoryStatusForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostCategoryStatus(CostCategoryStatus value);
} // namespace CostCategoryStatusMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
