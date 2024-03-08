/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class InstanceSavingsEstimationModeSource
  {
    NOT_SET,
    PublicPricing,
    CostExplorerRightsizing,
    CostOptimizationHub
  };

namespace InstanceSavingsEstimationModeSourceMapper
{
AWS_COMPUTEOPTIMIZER_API InstanceSavingsEstimationModeSource GetInstanceSavingsEstimationModeSourceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInstanceSavingsEstimationModeSource(InstanceSavingsEstimationModeSource value);
} // namespace InstanceSavingsEstimationModeSourceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
