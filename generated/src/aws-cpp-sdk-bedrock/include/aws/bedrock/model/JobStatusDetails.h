/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class JobStatusDetails
  {
    NOT_SET,
    InProgress,
    Completed,
    Stopping,
    Stopped,
    Failed,
    NotStarted
  };

namespace JobStatusDetailsMapper
{
AWS_BEDROCK_API JobStatusDetails GetJobStatusDetailsForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForJobStatusDetails(JobStatusDetails value);
} // namespace JobStatusDetailsMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
