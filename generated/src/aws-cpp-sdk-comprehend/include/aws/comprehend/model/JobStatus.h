/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    STOP_REQUESTED,
    STOPPED
  };

namespace JobStatusMapper
{
AWS_COMPREHEND_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
