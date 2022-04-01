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
  enum class EBSFilterName
  {
    NOT_SET,
    Finding
  };

namespace EBSFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API EBSFilterName GetEBSFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEBSFilterName(EBSFilterName value);
} // namespace EBSFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
