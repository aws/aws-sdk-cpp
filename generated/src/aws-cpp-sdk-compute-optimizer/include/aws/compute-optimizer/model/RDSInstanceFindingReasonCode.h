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
  enum class RDSInstanceFindingReasonCode
  {
    NOT_SET,
    CPUOverprovisioned,
    NetworkBandwidthOverprovisioned,
    EBSIOPSOverprovisioned,
    EBSThroughputOverprovisioned,
    CPUUnderprovisioned,
    NetworkBandwidthUnderprovisioned,
    EBSThroughputUnderprovisioned,
    NewGenerationDBInstanceClassAvailable,
    NewEngineVersionAvailable
  };

namespace RDSInstanceFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API RDSInstanceFindingReasonCode GetRDSInstanceFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSInstanceFindingReasonCode(RDSInstanceFindingReasonCode value);
} // namespace RDSInstanceFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
