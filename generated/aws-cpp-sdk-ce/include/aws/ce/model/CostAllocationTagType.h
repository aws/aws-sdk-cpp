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
  enum class CostAllocationTagType
  {
    NOT_SET,
    AWSGenerated,
    UserDefined
  };

namespace CostAllocationTagTypeMapper
{
AWS_COSTEXPLORER_API CostAllocationTagType GetCostAllocationTagTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForCostAllocationTagType(CostAllocationTagType value);
} // namespace CostAllocationTagTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
