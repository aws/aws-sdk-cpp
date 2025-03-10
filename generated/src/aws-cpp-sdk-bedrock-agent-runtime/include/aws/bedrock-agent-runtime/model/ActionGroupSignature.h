/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class ActionGroupSignature
  {
    NOT_SET,
    AMAZON_UserInput,
    AMAZON_CodeInterpreter,
    ANTHROPIC_Computer,
    ANTHROPIC_Bash,
    ANTHROPIC_TextEditor
  };

namespace ActionGroupSignatureMapper
{
AWS_BEDROCKAGENTRUNTIME_API ActionGroupSignature GetActionGroupSignatureForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForActionGroupSignature(ActionGroupSignature value);
} // namespace ActionGroupSignatureMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
