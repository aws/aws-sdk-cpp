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
  enum class CostAllocationTagStatus
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace CostAllocationTagStatusMapper
{
AWS_COSTEXPLORER_API CostAllocationTagStatus GetCostAllocationTagStatusForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostAllocationTagStatus(CostAllocationTagStatus value);
} // namespace CostAllocationTagStatusMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
