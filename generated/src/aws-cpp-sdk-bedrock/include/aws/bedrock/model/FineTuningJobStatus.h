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
  enum class FineTuningJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace FineTuningJobStatusMapper
{
AWS_BEDROCK_API FineTuningJobStatus GetFineTuningJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForFineTuningJobStatus(FineTuningJobStatus value);
} // namespace FineTuningJobStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
