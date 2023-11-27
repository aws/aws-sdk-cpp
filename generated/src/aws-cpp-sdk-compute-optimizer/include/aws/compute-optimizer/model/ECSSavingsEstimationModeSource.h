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
  enum class ECSSavingsEstimationModeSource
  {
    NOT_SET,
    PublicPricing,
    CostExplorerRightsizing,
    CostOptimizationHub
  };

namespace ECSSavingsEstimationModeSourceMapper
{
AWS_COMPUTEOPTIMIZER_API ECSSavingsEstimationModeSource GetECSSavingsEstimationModeSourceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSSavingsEstimationModeSource(ECSSavingsEstimationModeSource value);
} // namespace ECSSavingsEstimationModeSourceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
