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
  enum class RuleExecutionStatus
  {
    NOT_SET,
    InProgress,
    Abandoned,
    Succeeded,
    Failed
  };

namespace RuleExecutionStatusMapper
{
AWS_CODEPIPELINE_API RuleExecutionStatus GetRuleExecutionStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForRuleExecutionStatus(RuleExecutionStatus value);
} // namespace RuleExecutionStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
