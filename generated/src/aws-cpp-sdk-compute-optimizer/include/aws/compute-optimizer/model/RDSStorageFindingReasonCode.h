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
  enum class RDSStorageFindingReasonCode
  {
    NOT_SET,
    EBSVolumeAllocatedStorageUnderprovisioned,
    EBSVolumeThroughputUnderprovisioned,
    EBSVolumeIOPSOverprovisioned,
    EBSVolumeThroughputOverprovisioned,
    NewGenerationStorageTypeAvailable,
    DBClusterStorageOptionAvailable,
    DBClusterStorageSavingsAvailable
  };

namespace RDSStorageFindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API RDSStorageFindingReasonCode GetRDSStorageFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSStorageFindingReasonCode(RDSStorageFindingReasonCode value);
} // namespace RDSStorageFindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
