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
  enum class EvaluationJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace EvaluationJobStatusMapper
{
AWS_BEDROCK_API EvaluationJobStatus GetEvaluationJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForEvaluationJobStatus(EvaluationJobStatus value);
} // namespace EvaluationJobStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
