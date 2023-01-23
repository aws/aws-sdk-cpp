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
  enum class InferredWorkloadTypesPreference
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace InferredWorkloadTypesPreferenceMapper
{
AWS_COMPUTEOPTIMIZER_API InferredWorkloadTypesPreference GetInferredWorkloadTypesPreferenceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInferredWorkloadTypesPreference(InferredWorkloadTypesPreference value);
} // namespace InferredWorkloadTypesPreferenceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
