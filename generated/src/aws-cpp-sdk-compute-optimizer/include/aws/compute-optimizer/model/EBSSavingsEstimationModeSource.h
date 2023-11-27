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
  enum class EBSSavingsEstimationModeSource
  {
    NOT_SET,
    PublicPricing,
    CostExplorerRightsizing,
    CostOptimizationHub
  };

namespace EBSSavingsEstimationModeSourceMapper
{
AWS_COMPUTEOPTIMIZER_API EBSSavingsEstimationModeSource GetEBSSavingsEstimationModeSourceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEBSSavingsEstimationModeSource(EBSSavingsEstimationModeSource value);
} // namespace EBSSavingsEstimationModeSourceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
