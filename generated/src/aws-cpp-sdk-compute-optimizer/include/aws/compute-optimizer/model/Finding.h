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
  enum class Finding
  {
    NOT_SET,
    Underprovisioned,
    Overprovisioned,
    Optimized,
    NotOptimized
  };

namespace FindingMapper
{
AWS_COMPUTEOPTIMIZER_API Finding GetFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForFinding(Finding value);
} // namespace FindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
