/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    QUEUED
  };

namespace JobStatusMapper
{
AWS_ENTITYRESOLUTION_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
