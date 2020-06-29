/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class StageExecutionStatus
  {
    NOT_SET,
    InProgress,
    Failed,
    Stopped,
    Stopping,
    Succeeded
  };

namespace StageExecutionStatusMapper
{
AWS_CODEPIPELINE_API StageExecutionStatus GetStageExecutionStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForStageExecutionStatus(StageExecutionStatus value);
} // namespace StageExecutionStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
