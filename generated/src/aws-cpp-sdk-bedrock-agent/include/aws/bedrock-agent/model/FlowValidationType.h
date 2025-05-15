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
  enum class FlowValidationType
  {
    NOT_SET,
    CyclicConnection,
    DuplicateConnections,
    DuplicateConditionExpression,
    UnreachableNode,
    UnknownConnectionSource,
    UnknownConnectionSourceOutput,
    UnknownConnectionTarget,
    UnknownConnectionTargetInput,
    UnknownConnectionCondition,
    MalformedConditionExpression,
    MalformedNodeInputExpression,
    MismatchedNodeInputType,
    MismatchedNodeOutputType,
    IncompatibleConnectionDataType,
    MissingConnectionConfiguration,
    MissingDefaultCondition,
    MissingEndingNodes,
    MissingNodeConfiguration,
    MissingNodeInput,
    MissingNodeOutput,
    MissingStartingNodes,
    MultipleNodeInputConnections,
    UnfulfilledNodeInput,
    UnsatisfiedConnectionConditions,
    Unspecified,
    UnknownNodeInput,
    UnknownNodeOutput,
    MissingLoopInputNode,
    MissingLoopControllerNode,
    MultipleLoopInputNodes,
    MultipleLoopControllerNodes,
    LoopIncompatibleNodeType,
    InvalidLoopBoundary
  };

namespace FlowValidationTypeMapper
{
AWS_BEDROCKAGENT_API FlowValidationType GetFlowValidationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFlowValidationType(FlowValidationType value);
} // namespace FlowValidationTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
