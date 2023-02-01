/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    PENDING,
    RUNNABLE,
    STARTING,
    RUNNING,
    SUCCEEDED,
    FAILED
  };

namespace JobStatusMapper
{
AWS_BATCH_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
