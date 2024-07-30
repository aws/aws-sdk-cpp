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
  enum class ConditionExecutionStatus
  {
    NOT_SET,
    InProgress,
    Failed,
    Errored,
    Succeeded,
    Cancelled,
    Abandoned,
    Overridden
  };

namespace ConditionExecutionStatusMapper
{
AWS_CODEPIPELINE_API ConditionExecutionStatus GetConditionExecutionStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForConditionExecutionStatus(ConditionExecutionStatus value);
} // namespace ConditionExecutionStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
