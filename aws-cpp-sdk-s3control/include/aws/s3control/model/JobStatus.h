/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    Active,
    Cancelled,
    Cancelling,
    Complete,
    Completing,
    Failed,
    Failing,
    New,
    Paused,
    Pausing,
    Preparing,
    Ready,
    Suspended
  };

namespace JobStatusMapper
{
AWS_S3CONTROL_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
