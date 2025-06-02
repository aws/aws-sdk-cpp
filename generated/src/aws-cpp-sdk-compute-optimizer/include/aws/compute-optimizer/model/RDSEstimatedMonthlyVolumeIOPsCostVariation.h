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
  enum class RDSEstimatedMonthlyVolumeIOPsCostVariation
  {
    NOT_SET,
    None,
    Low,
    Medium,
    High
  };

namespace RDSEstimatedMonthlyVolumeIOPsCostVariationMapper
{
AWS_COMPUTEOPTIMIZER_API RDSEstimatedMonthlyVolumeIOPsCostVariation GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation value);
} // namespace RDSEstimatedMonthlyVolumeIOPsCostVariationMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
