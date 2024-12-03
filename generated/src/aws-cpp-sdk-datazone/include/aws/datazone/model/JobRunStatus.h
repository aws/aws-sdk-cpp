/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class JobRunStatus
  {
    NOT_SET,
    SCHEDULED,
    IN_PROGRESS,
    SUCCESS,
    PARTIALLY_SUCCEEDED,
    FAILED,
    ABORTED,
    TIMED_OUT,
    CANCELED
  };

namespace JobRunStatusMapper
{
AWS_DATAZONE_API JobRunStatus GetJobRunStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForJobRunStatus(JobRunStatus value);
} // namespace JobRunStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
