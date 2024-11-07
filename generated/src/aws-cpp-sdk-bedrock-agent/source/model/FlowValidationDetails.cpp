/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowValidationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FlowValidationDetails::FlowValidationDetails() : 
    m_cyclicConnectionHasBeenSet(false),
    m_duplicateConditionExpressionHasBeenSet(false),
    m_duplicateConnectionsHasBeenSet(false),
    m_incompatibleConnectionDataTypeHasBeenSet(false),
    m_malformedConditionExpressionHasBeenSet(false),
    m_malformedNodeInputExpressionHasBeenSet(false),
    m_mismatchedNodeInputTypeHasBeenSet(false),
    m_mismatchedNodeOutputTypeHasBeenSet(false),
    m_missingConnectionConfigurationHasBeenSet(false),
    m_missingDefaultConditionHasBeenSet(false),
    m_missingEndingNodesHasBeenSet(false),
    m_missingNodeConfigurationHasBeenSet(false),
    m_missingNodeInputHasBeenSet(false),
    m_missingNodeOutputHasBeenSet(false),
    m_missingStartingNodesHasBeenSet(false),
    m_multipleNodeInputConnectionsHasBeenSet(false),
    m_unfulfilledNodeInputHasBeenSet(false),
    m_unknownConnectionConditionHasBeenSet(false),
    m_unknownConnectionSourceHasBeenSet(false),
    m_unknownConnectionSourceOutputHasBeenSet(false),
    m_unknownConnectionTargetHasBeenSet(false),
    m_unknownConnectionTargetInputHasBeenSet(false),
    m_unreachableNodeHasBeenSet(false),
    m_unsatisfiedConnectionConditionsHasBeenSet(false),
    m_unspecifiedHasBeenSet(false)
{
}

FlowValidationDetails::FlowValidationDetails(JsonView jsonValue)
  : FlowValidationDetails()
{
  *this = jsonValue;
}

FlowValidationDetails& FlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cyclicConnection"))
  {
    m_cyclicConnection = jsonValue.GetObject("cyclicConnection");

    m_cyclicConnectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duplicateConditionExpression"))
  {
    m_duplicateConditionExpression = jsonValue.GetObject("duplicateConditionExpression");

    m_duplicateConditionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duplicateConnections"))
  {
    m_duplicateConnections = jsonValue.GetObject("duplicateConnections");

    m_duplicateConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incompatibleConnectionDataType"))
  {
    m_incompatibleConnectionDataType = jsonValue.GetObject("incompatibleConnectionDataType");

    m_incompatibleConnectionDataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("malformedConditionExpression"))
  {
    m_malformedConditionExpression = jsonValue.GetObject("malformedConditionExpression");

    m_malformedConditionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("malformedNodeInputExpression"))
  {
    m_malformedNodeInputExpression = jsonValue.GetObject("malformedNodeInputExpression");

    m_malformedNodeInputExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mismatchedNodeInputType"))
  {
    m_mismatchedNodeInputType = jsonValue.GetObject("mismatchedNodeInputType");

    m_mismatchedNodeInputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mismatchedNodeOutputType"))
  {
    m_mismatchedNodeOutputType = jsonValue.GetObject("mismatchedNodeOutputType");

    m_mismatchedNodeOutputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingConnectionConfiguration"))
  {
    m_missingConnectionConfiguration = jsonValue.GetObject("missingConnectionConfiguration");

    m_missingConnectionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingDefaultCondition"))
  {
    m_missingDefaultCondition = jsonValue.GetObject("missingDefaultCondition");

    m_missingDefaultConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingEndingNodes"))
  {
    m_missingEndingNodes = jsonValue.GetObject("missingEndingNodes");

    m_missingEndingNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingNodeConfiguration"))
  {
    m_missingNodeConfiguration = jsonValue.GetObject("missingNodeConfiguration");

    m_missingNodeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingNodeInput"))
  {
    m_missingNodeInput = jsonValue.GetObject("missingNodeInput");

    m_missingNodeInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingNodeOutput"))
  {
    m_missingNodeOutput = jsonValue.GetObject("missingNodeOutput");

    m_missingNodeOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingStartingNodes"))
  {
    m_missingStartingNodes = jsonValue.GetObject("missingStartingNodes");

    m_missingStartingNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multipleNodeInputConnections"))
  {
    m_multipleNodeInputConnections = jsonValue.GetObject("multipleNodeInputConnections");

    m_multipleNodeInputConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unfulfilledNodeInput"))
  {
    m_unfulfilledNodeInput = jsonValue.GetObject("unfulfilledNodeInput");

    m_unfulfilledNodeInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectionCondition"))
  {
    m_unknownConnectionCondition = jsonValue.GetObject("unknownConnectionCondition");

    m_unknownConnectionConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectionSource"))
  {
    m_unknownConnectionSource = jsonValue.GetObject("unknownConnectionSource");

    m_unknownConnectionSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectionSourceOutput"))
  {
    m_unknownConnectionSourceOutput = jsonValue.GetObject("unknownConnectionSourceOutput");

    m_unknownConnectionSourceOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectionTarget"))
  {
    m_unknownConnectionTarget = jsonValue.GetObject("unknownConnectionTarget");

    m_unknownConnectionTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectionTargetInput"))
  {
    m_unknownConnectionTargetInput = jsonValue.GetObject("unknownConnectionTargetInput");

    m_unknownConnectionTargetInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unreachableNode"))
  {
    m_unreachableNode = jsonValue.GetObject("unreachableNode");

    m_unreachableNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unsatisfiedConnectionConditions"))
  {
    m_unsatisfiedConnectionConditions = jsonValue.GetObject("unsatisfiedConnectionConditions");

    m_unsatisfiedConnectionConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unspecified"))
  {
    m_unspecified = jsonValue.GetObject("unspecified");

    m_unspecifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cyclicConnectionHasBeenSet)
  {
   payload.WithObject("cyclicConnection", m_cyclicConnection.Jsonize());

  }

  if(m_duplicateConditionExpressionHasBeenSet)
  {
   payload.WithObject("duplicateConditionExpression", m_duplicateConditionExpression.Jsonize());

  }

  if(m_duplicateConnectionsHasBeenSet)
  {
   payload.WithObject("duplicateConnections", m_duplicateConnections.Jsonize());

  }

  if(m_incompatibleConnectionDataTypeHasBeenSet)
  {
   payload.WithObject("incompatibleConnectionDataType", m_incompatibleConnectionDataType.Jsonize());

  }

  if(m_malformedConditionExpressionHasBeenSet)
  {
   payload.WithObject("malformedConditionExpression", m_malformedConditionExpression.Jsonize());

  }

  if(m_malformedNodeInputExpressionHasBeenSet)
  {
   payload.WithObject("malformedNodeInputExpression", m_malformedNodeInputExpression.Jsonize());

  }

  if(m_mismatchedNodeInputTypeHasBeenSet)
  {
   payload.WithObject("mismatchedNodeInputType", m_mismatchedNodeInputType.Jsonize());

  }

  if(m_mismatchedNodeOutputTypeHasBeenSet)
  {
   payload.WithObject("mismatchedNodeOutputType", m_mismatchedNodeOutputType.Jsonize());

  }

  if(m_missingConnectionConfigurationHasBeenSet)
  {
   payload.WithObject("missingConnectionConfiguration", m_missingConnectionConfiguration.Jsonize());

  }

  if(m_missingDefaultConditionHasBeenSet)
  {
   payload.WithObject("missingDefaultCondition", m_missingDefaultCondition.Jsonize());

  }

  if(m_missingEndingNodesHasBeenSet)
  {
   payload.WithObject("missingEndingNodes", m_missingEndingNodes.Jsonize());

  }

  if(m_missingNodeConfigurationHasBeenSet)
  {
   payload.WithObject("missingNodeConfiguration", m_missingNodeConfiguration.Jsonize());

  }

  if(m_missingNodeInputHasBeenSet)
  {
   payload.WithObject("missingNodeInput", m_missingNodeInput.Jsonize());

  }

  if(m_missingNodeOutputHasBeenSet)
  {
   payload.WithObject("missingNodeOutput", m_missingNodeOutput.Jsonize());

  }

  if(m_missingStartingNodesHasBeenSet)
  {
   payload.WithObject("missingStartingNodes", m_missingStartingNodes.Jsonize());

  }

  if(m_multipleNodeInputConnectionsHasBeenSet)
  {
   payload.WithObject("multipleNodeInputConnections", m_multipleNodeInputConnections.Jsonize());

  }

  if(m_unfulfilledNodeInputHasBeenSet)
  {
   payload.WithObject("unfulfilledNodeInput", m_unfulfilledNodeInput.Jsonize());

  }

  if(m_unknownConnectionConditionHasBeenSet)
  {
   payload.WithObject("unknownConnectionCondition", m_unknownConnectionCondition.Jsonize());

  }

  if(m_unknownConnectionSourceHasBeenSet)
  {
   payload.WithObject("unknownConnectionSource", m_unknownConnectionSource.Jsonize());

  }

  if(m_unknownConnectionSourceOutputHasBeenSet)
  {
   payload.WithObject("unknownConnectionSourceOutput", m_unknownConnectionSourceOutput.Jsonize());

  }

  if(m_unknownConnectionTargetHasBeenSet)
  {
   payload.WithObject("unknownConnectionTarget", m_unknownConnectionTarget.Jsonize());

  }

  if(m_unknownConnectionTargetInputHasBeenSet)
  {
   payload.WithObject("unknownConnectionTargetInput", m_unknownConnectionTargetInput.Jsonize());

  }

  if(m_unreachableNodeHasBeenSet)
  {
   payload.WithObject("unreachableNode", m_unreachableNode.Jsonize());

  }

  if(m_unsatisfiedConnectionConditionsHasBeenSet)
  {
   payload.WithObject("unsatisfiedConnectionConditions", m_unsatisfiedConnectionConditions.Jsonize());

  }

  if(m_unspecifiedHasBeenSet)
  {
   payload.WithObject("unspecified", m_unspecified.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
