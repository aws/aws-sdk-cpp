/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class TaskStatus
  {
    NOT_SET,
    submitted,
    working,
    completed,
    canceled,
    failed
  };

namespace TaskStatusMapper
{
AWS_BEDROCKAGENTCORE_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForTaskStatus(TaskStatus value);
} // namespace TaskStatusMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
