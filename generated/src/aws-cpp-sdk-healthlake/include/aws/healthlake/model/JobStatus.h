/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED_WITH_ERRORS,
    COMPLETED,
    FAILED,
    CANCEL_SUBMITTED,
    CANCEL_IN_PROGRESS,
    CANCEL_COMPLETED,
    CANCEL_FAILED
  };

namespace JobStatusMapper
{
AWS_HEALTHLAKE_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
