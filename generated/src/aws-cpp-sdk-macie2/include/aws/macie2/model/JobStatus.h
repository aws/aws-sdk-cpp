/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    RUNNING,
    PAUSED,
    CANCELLED,
    COMPLETE,
    IDLE,
    USER_PAUSED
  };

namespace JobStatusMapper
{
AWS_MACIE2_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
