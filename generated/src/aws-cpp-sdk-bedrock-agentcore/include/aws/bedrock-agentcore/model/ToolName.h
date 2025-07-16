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
  enum class ToolName
  {
    NOT_SET,
    executeCode,
    executeCommand,
    readFiles,
    listFiles,
    removeFiles,
    writeFiles,
    startCommandExecution,
    getTask,
    stopTask
  };

namespace ToolNameMapper
{
AWS_BEDROCKAGENTCORE_API ToolName GetToolNameForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForToolName(ToolName value);
} // namespace ToolNameMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
