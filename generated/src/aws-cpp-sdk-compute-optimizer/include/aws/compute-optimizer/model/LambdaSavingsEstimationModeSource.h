﻿/**
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
  enum class LambdaSavingsEstimationModeSource
  {
    NOT_SET,
    PublicPricing,
    CostExplorerRightsizing,
    CostOptimizationHub
  };

namespace LambdaSavingsEstimationModeSourceMapper
{
AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationModeSource GetLambdaSavingsEstimationModeSourceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLambdaSavingsEstimationModeSource(LambdaSavingsEstimationModeSource value);
} // namespace LambdaSavingsEstimationModeSourceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
