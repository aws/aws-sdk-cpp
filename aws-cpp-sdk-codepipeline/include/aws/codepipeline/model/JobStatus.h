/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    Created,
    Queued,
    Dispatched,
    InProgress,
    TimedOut,
    Succeeded,
    Failed
  };

namespace JobStatusMapper
{
AWS_CODEPIPELINE_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
