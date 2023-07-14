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
  enum class EBSFinding
  {
    NOT_SET,
    Optimized,
    NotOptimized
  };

namespace EBSFindingMapper
{
AWS_COMPUTEOPTIMIZER_API EBSFinding GetEBSFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEBSFinding(EBSFinding value);
} // namespace EBSFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
