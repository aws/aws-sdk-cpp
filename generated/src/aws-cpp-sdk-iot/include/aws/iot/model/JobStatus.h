/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    IN_PROGRESS,
    CANCELED,
    COMPLETED,
    DELETION_IN_PROGRESS,
    SCHEDULED
  };

namespace JobStatusMapper
{
AWS_IOT_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
