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
  enum class NodeType
  {
    NOT_SET,
    FlowInputNode,
    FlowOutputNode,
    LambdaFunctionNode,
    KnowledgeBaseNode,
    PromptNode,
    ConditionNode,
    LexNode
  };

namespace NodeTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API NodeType GetNodeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForNodeType(NodeType value);
} // namespace NodeTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
