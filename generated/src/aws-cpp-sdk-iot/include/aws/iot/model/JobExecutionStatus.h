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
  enum class JobExecutionStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    TIMED_OUT,
    REJECTED,
    REMOVED,
    CANCELED
  };

namespace JobExecutionStatusMapper
{
AWS_IOT_API JobExecutionStatus GetJobExecutionStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForJobExecutionStatus(JobExecutionStatus value);
} // namespace JobExecutionStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
