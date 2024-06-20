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
  enum class RDSInstanceFinding
  {
    NOT_SET,
    Optimized,
    Underprovisioned,
    Overprovisioned
  };

namespace RDSInstanceFindingMapper
{
AWS_COMPUTEOPTIMIZER_API RDSInstanceFinding GetRDSInstanceFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSInstanceFinding(RDSInstanceFinding value);
} // namespace RDSInstanceFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
