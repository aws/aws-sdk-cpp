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
  enum class JobStatus
  {
    NOT_SET,
    Queued,
    InProgress,
    Complete,
    Failed
  };

namespace JobStatusMapper
{
AWS_COMPUTEOPTIMIZER_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
