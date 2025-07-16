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
  enum class CodeInterpreterSessionStatus
  {
    NOT_SET,
    READY,
    TERMINATED
  };

namespace CodeInterpreterSessionStatusMapper
{
AWS_BEDROCKAGENTCORE_API CodeInterpreterSessionStatus GetCodeInterpreterSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCodeInterpreterSessionStatus(CodeInterpreterSessionStatus value);
} // namespace CodeInterpreterSessionStatusMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
