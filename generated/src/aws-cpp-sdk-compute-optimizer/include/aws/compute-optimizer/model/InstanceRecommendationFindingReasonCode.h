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
  enum class InstanceRecommendationFindingReasonCode
  {
    NOT_SET,
    CPUOverprovisioned,
    CPUUnderprovisioned,
    MemoryOverprovisioned,
    MemoryUnderprovisioned,
    EBSThroughputOverprovisioned,
    EBSThroughputUnderprovisioned,
    EBSIOPSOverprovisioned,
    EBSIOPSUnderprovisioned,
    NetworkBandwidthOverprovisioned,
    NetworkBandwidthUnderprovisioned,
    NetworkPPSOverprovisioned,
    NetworkPPSUnderprovisioned,
    DiskIOPSOverprovisioned,
    DiskIOPSUnderprovisioned,
    DiskThroughputOverprovisioned,
    DiskThroughputUnderprovisioned,
    GPUUnderprovisioned,
    GPUOverprovisioned,
    GPUMemoryUnderprovisioned,
    GPUMemoryOverprovisioned
  };

namespace InstanceRecommendationFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API InstanceRecommendationFindingReasonCode GetInstanceRecommendationFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInstanceRecommendationFindingReasonCode(InstanceRecommendationFindingReasonCode value);
} // namespace InstanceRecommendationFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
