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
  enum class ApproximationDimension
  {
    NOT_SET,
    SERVICE,
    RESOURCE
  };

namespace ApproximationDimensionMapper
{
AWS_COSTEXPLORER_API ApproximationDimension GetApproximationDimensionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForApproximationDimension(ApproximationDimension value);
} // namespace ApproximationDimensionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
