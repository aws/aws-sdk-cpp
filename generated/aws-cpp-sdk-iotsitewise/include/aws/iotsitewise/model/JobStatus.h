/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    PENDING,
    CANCELLED,
    RUNNING,
    COMPLETED,
    FAILED,
    COMPLETED_WITH_FAILURES
  };

namespace JobStatusMapper
{
AWS_IOTSITEWISE_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
