/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class FlowNodeType
  {
    NOT_SET,
    Input,
    Output,
    KnowledgeBase,
    Condition,
    Lex,
    Prompt,
    LambdaFunction,
    Storage,
    Agent,
    Retrieval,
    Iterator,
    Collector,
    InlineCode,
    Loop,
    LoopInput,
    LoopController
  };

namespace FlowNodeTypeMapper
{
AWS_BEDROCKAGENT_API FlowNodeType GetFlowNodeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFlowNodeType(FlowNodeType value);
} // namespace FlowNodeTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
