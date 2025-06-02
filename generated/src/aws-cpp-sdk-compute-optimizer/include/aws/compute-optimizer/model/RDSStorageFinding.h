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
  enum class RDSStorageFinding
  {
    NOT_SET,
    Optimized,
    Underprovisioned,
    Overprovisioned,
    NotOptimized
  };

namespace RDSStorageFindingMapper
{
AWS_COMPUTEOPTIMIZER_API RDSStorageFinding GetRDSStorageFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSStorageFinding(RDSStorageFinding value);
} // namespace RDSStorageFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
