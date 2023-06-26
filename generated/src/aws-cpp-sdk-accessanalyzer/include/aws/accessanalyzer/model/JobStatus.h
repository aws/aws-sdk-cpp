/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    CANCELED
  };

namespace JobStatusMapper
{
AWS_ACCESSANALYZER_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
