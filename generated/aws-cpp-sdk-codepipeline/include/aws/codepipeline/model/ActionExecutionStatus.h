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
  enum class ActionExecutionStatus
  {
    NOT_SET,
    InProgress,
    Abandoned,
    Succeeded,
    Failed
  };

namespace ActionExecutionStatusMapper
{
AWS_CODEPIPELINE_API ActionExecutionStatus GetActionExecutionStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForActionExecutionStatus(ActionExecutionStatus value);
} // namespace ActionExecutionStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
