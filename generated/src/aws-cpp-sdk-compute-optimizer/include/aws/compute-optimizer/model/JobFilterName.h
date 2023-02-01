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
  enum class JobFilterName
  {
    NOT_SET,
    ResourceType,
    JobStatus
  };

namespace JobFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API JobFilterName GetJobFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForJobFilterName(JobFilterName value);
} // namespace JobFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
