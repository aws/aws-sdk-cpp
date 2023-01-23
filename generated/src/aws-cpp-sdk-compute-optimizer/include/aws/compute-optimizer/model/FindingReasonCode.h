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
  enum class FindingReasonCode
  {
    NOT_SET,
    MemoryOverprovisioned,
    MemoryUnderprovisioned
  };

namespace FindingReasonCodeMapper
{
AWS_COMPUTEOPTIMIZER_API FindingReasonCode GetFindingReasonCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForFindingReasonCode(FindingReasonCode value);
} // namespace FindingReasonCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
