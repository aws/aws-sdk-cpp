/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    PARTIAL_SUCCESS,
    FAILED,
    STOP_REQUESTED,
    STOPPED
  };

namespace JobStatusMapper
{
AWS_COMPREHENDMEDICAL_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
