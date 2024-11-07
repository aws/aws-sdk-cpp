/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CyclicConnectionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/DuplicateConditionExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/DuplicateConnectionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/IncompatibleConnectionDataTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MalformedConditionExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MalformedNodeInputExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MismatchedNodeInputTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MismatchedNodeOutputTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingConnectionConfigurationFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingDefaultConditionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingEndingNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeConfigurationFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeOutputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingStartingNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MultipleNodeInputConnectionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnfulfilledNodeInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionConditionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionSourceFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionSourceOutputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionTargetFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionTargetInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnreachableNodeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnsatisfiedConnectionConditionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnspecifiedFlowValidationDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>A union type containing various possible validation issues in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class FlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API FlowValidationDetails();
    AWS_BEDROCKAGENT_API FlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about a cyclic connection in the flow.</p>
     */
    inline const CyclicConnectionFlowValidationDetails& GetCyclicConnection() const{ return m_cyclicConnection; }
    inline bool CyclicConnectionHasBeenSet() const { return m_cyclicConnectionHasBeenSet; }
    inline void SetCyclicConnection(const CyclicConnectionFlowValidationDetails& value) { m_cyclicConnectionHasBeenSet = true; m_cyclicConnection = value; }
    inline void SetCyclicConnection(CyclicConnectionFlowValidationDetails&& value) { m_cyclicConnectionHasBeenSet = true; m_cyclicConnection = std::move(value); }
    inline FlowValidationDetails& WithCyclicConnection(const CyclicConnectionFlowValidationDetails& value) { SetCyclicConnection(value); return *this;}
    inline FlowValidationDetails& WithCyclicConnection(CyclicConnectionFlowValidationDetails&& value) { SetCyclicConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about duplicate condition expressions in a node.</p>
     */
    inline const DuplicateConditionExpressionFlowValidationDetails& GetDuplicateConditionExpression() const{ return m_duplicateConditionExpression; }
    inline bool DuplicateConditionExpressionHasBeenSet() const { return m_duplicateConditionExpressionHasBeenSet; }
    inline void SetDuplicateConditionExpression(const DuplicateConditionExpressionFlowValidationDetails& value) { m_duplicateConditionExpressionHasBeenSet = true; m_duplicateConditionExpression = value; }
    inline void SetDuplicateConditionExpression(DuplicateConditionExpressionFlowValidationDetails&& value) { m_duplicateConditionExpressionHasBeenSet = true; m_duplicateConditionExpression = std::move(value); }
    inline FlowValidationDetails& WithDuplicateConditionExpression(const DuplicateConditionExpressionFlowValidationDetails& value) { SetDuplicateConditionExpression(value); return *this;}
    inline FlowValidationDetails& WithDuplicateConditionExpression(DuplicateConditionExpressionFlowValidationDetails&& value) { SetDuplicateConditionExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about duplicate connections between nodes.</p>
     */
    inline const DuplicateConnectionsFlowValidationDetails& GetDuplicateConnections() const{ return m_duplicateConnections; }
    inline bool DuplicateConnectionsHasBeenSet() const { return m_duplicateConnectionsHasBeenSet; }
    inline void SetDuplicateConnections(const DuplicateConnectionsFlowValidationDetails& value) { m_duplicateConnectionsHasBeenSet = true; m_duplicateConnections = value; }
    inline void SetDuplicateConnections(DuplicateConnectionsFlowValidationDetails&& value) { m_duplicateConnectionsHasBeenSet = true; m_duplicateConnections = std::move(value); }
    inline FlowValidationDetails& WithDuplicateConnections(const DuplicateConnectionsFlowValidationDetails& value) { SetDuplicateConnections(value); return *this;}
    inline FlowValidationDetails& WithDuplicateConnections(DuplicateConnectionsFlowValidationDetails&& value) { SetDuplicateConnections(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about incompatible data types in a connection.</p>
     */
    inline const IncompatibleConnectionDataTypeFlowValidationDetails& GetIncompatibleConnectionDataType() const{ return m_incompatibleConnectionDataType; }
    inline bool IncompatibleConnectionDataTypeHasBeenSet() const { return m_incompatibleConnectionDataTypeHasBeenSet; }
    inline void SetIncompatibleConnectionDataType(const IncompatibleConnectionDataTypeFlowValidationDetails& value) { m_incompatibleConnectionDataTypeHasBeenSet = true; m_incompatibleConnectionDataType = value; }
    inline void SetIncompatibleConnectionDataType(IncompatibleConnectionDataTypeFlowValidationDetails&& value) { m_incompatibleConnectionDataTypeHasBeenSet = true; m_incompatibleConnectionDataType = std::move(value); }
    inline FlowValidationDetails& WithIncompatibleConnectionDataType(const IncompatibleConnectionDataTypeFlowValidationDetails& value) { SetIncompatibleConnectionDataType(value); return *this;}
    inline FlowValidationDetails& WithIncompatibleConnectionDataType(IncompatibleConnectionDataTypeFlowValidationDetails&& value) { SetIncompatibleConnectionDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a malformed condition expression in a node.</p>
     */
    inline const MalformedConditionExpressionFlowValidationDetails& GetMalformedConditionExpression() const{ return m_malformedConditionExpression; }
    inline bool MalformedConditionExpressionHasBeenSet() const { return m_malformedConditionExpressionHasBeenSet; }
    inline void SetMalformedConditionExpression(const MalformedConditionExpressionFlowValidationDetails& value) { m_malformedConditionExpressionHasBeenSet = true; m_malformedConditionExpression = value; }
    inline void SetMalformedConditionExpression(MalformedConditionExpressionFlowValidationDetails&& value) { m_malformedConditionExpressionHasBeenSet = true; m_malformedConditionExpression = std::move(value); }
    inline FlowValidationDetails& WithMalformedConditionExpression(const MalformedConditionExpressionFlowValidationDetails& value) { SetMalformedConditionExpression(value); return *this;}
    inline FlowValidationDetails& WithMalformedConditionExpression(MalformedConditionExpressionFlowValidationDetails&& value) { SetMalformedConditionExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a malformed input expression in a node.</p>
     */
    inline const MalformedNodeInputExpressionFlowValidationDetails& GetMalformedNodeInputExpression() const{ return m_malformedNodeInputExpression; }
    inline bool MalformedNodeInputExpressionHasBeenSet() const { return m_malformedNodeInputExpressionHasBeenSet; }
    inline void SetMalformedNodeInputExpression(const MalformedNodeInputExpressionFlowValidationDetails& value) { m_malformedNodeInputExpressionHasBeenSet = true; m_malformedNodeInputExpression = value; }
    inline void SetMalformedNodeInputExpression(MalformedNodeInputExpressionFlowValidationDetails&& value) { m_malformedNodeInputExpressionHasBeenSet = true; m_malformedNodeInputExpression = std::move(value); }
    inline FlowValidationDetails& WithMalformedNodeInputExpression(const MalformedNodeInputExpressionFlowValidationDetails& value) { SetMalformedNodeInputExpression(value); return *this;}
    inline FlowValidationDetails& WithMalformedNodeInputExpression(MalformedNodeInputExpressionFlowValidationDetails&& value) { SetMalformedNodeInputExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about mismatched input data types in a node.</p>
     */
    inline const MismatchedNodeInputTypeFlowValidationDetails& GetMismatchedNodeInputType() const{ return m_mismatchedNodeInputType; }
    inline bool MismatchedNodeInputTypeHasBeenSet() const { return m_mismatchedNodeInputTypeHasBeenSet; }
    inline void SetMismatchedNodeInputType(const MismatchedNodeInputTypeFlowValidationDetails& value) { m_mismatchedNodeInputTypeHasBeenSet = true; m_mismatchedNodeInputType = value; }
    inline void SetMismatchedNodeInputType(MismatchedNodeInputTypeFlowValidationDetails&& value) { m_mismatchedNodeInputTypeHasBeenSet = true; m_mismatchedNodeInputType = std::move(value); }
    inline FlowValidationDetails& WithMismatchedNodeInputType(const MismatchedNodeInputTypeFlowValidationDetails& value) { SetMismatchedNodeInputType(value); return *this;}
    inline FlowValidationDetails& WithMismatchedNodeInputType(MismatchedNodeInputTypeFlowValidationDetails&& value) { SetMismatchedNodeInputType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about mismatched output data types in a node.</p>
     */
    inline const MismatchedNodeOutputTypeFlowValidationDetails& GetMismatchedNodeOutputType() const{ return m_mismatchedNodeOutputType; }
    inline bool MismatchedNodeOutputTypeHasBeenSet() const { return m_mismatchedNodeOutputTypeHasBeenSet; }
    inline void SetMismatchedNodeOutputType(const MismatchedNodeOutputTypeFlowValidationDetails& value) { m_mismatchedNodeOutputTypeHasBeenSet = true; m_mismatchedNodeOutputType = value; }
    inline void SetMismatchedNodeOutputType(MismatchedNodeOutputTypeFlowValidationDetails&& value) { m_mismatchedNodeOutputTypeHasBeenSet = true; m_mismatchedNodeOutputType = std::move(value); }
    inline FlowValidationDetails& WithMismatchedNodeOutputType(const MismatchedNodeOutputTypeFlowValidationDetails& value) { SetMismatchedNodeOutputType(value); return *this;}
    inline FlowValidationDetails& WithMismatchedNodeOutputType(MismatchedNodeOutputTypeFlowValidationDetails&& value) { SetMismatchedNodeOutputType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing configuration for a connection.</p>
     */
    inline const MissingConnectionConfigurationFlowValidationDetails& GetMissingConnectionConfiguration() const{ return m_missingConnectionConfiguration; }
    inline bool MissingConnectionConfigurationHasBeenSet() const { return m_missingConnectionConfigurationHasBeenSet; }
    inline void SetMissingConnectionConfiguration(const MissingConnectionConfigurationFlowValidationDetails& value) { m_missingConnectionConfigurationHasBeenSet = true; m_missingConnectionConfiguration = value; }
    inline void SetMissingConnectionConfiguration(MissingConnectionConfigurationFlowValidationDetails&& value) { m_missingConnectionConfigurationHasBeenSet = true; m_missingConnectionConfiguration = std::move(value); }
    inline FlowValidationDetails& WithMissingConnectionConfiguration(const MissingConnectionConfigurationFlowValidationDetails& value) { SetMissingConnectionConfiguration(value); return *this;}
    inline FlowValidationDetails& WithMissingConnectionConfiguration(MissingConnectionConfigurationFlowValidationDetails&& value) { SetMissingConnectionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing default condition in a conditional node.</p>
     */
    inline const MissingDefaultConditionFlowValidationDetails& GetMissingDefaultCondition() const{ return m_missingDefaultCondition; }
    inline bool MissingDefaultConditionHasBeenSet() const { return m_missingDefaultConditionHasBeenSet; }
    inline void SetMissingDefaultCondition(const MissingDefaultConditionFlowValidationDetails& value) { m_missingDefaultConditionHasBeenSet = true; m_missingDefaultCondition = value; }
    inline void SetMissingDefaultCondition(MissingDefaultConditionFlowValidationDetails&& value) { m_missingDefaultConditionHasBeenSet = true; m_missingDefaultCondition = std::move(value); }
    inline FlowValidationDetails& WithMissingDefaultCondition(const MissingDefaultConditionFlowValidationDetails& value) { SetMissingDefaultCondition(value); return *this;}
    inline FlowValidationDetails& WithMissingDefaultCondition(MissingDefaultConditionFlowValidationDetails&& value) { SetMissingDefaultCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing ending nodes in the flow.</p>
     */
    inline const MissingEndingNodesFlowValidationDetails& GetMissingEndingNodes() const{ return m_missingEndingNodes; }
    inline bool MissingEndingNodesHasBeenSet() const { return m_missingEndingNodesHasBeenSet; }
    inline void SetMissingEndingNodes(const MissingEndingNodesFlowValidationDetails& value) { m_missingEndingNodesHasBeenSet = true; m_missingEndingNodes = value; }
    inline void SetMissingEndingNodes(MissingEndingNodesFlowValidationDetails&& value) { m_missingEndingNodesHasBeenSet = true; m_missingEndingNodes = std::move(value); }
    inline FlowValidationDetails& WithMissingEndingNodes(const MissingEndingNodesFlowValidationDetails& value) { SetMissingEndingNodes(value); return *this;}
    inline FlowValidationDetails& WithMissingEndingNodes(MissingEndingNodesFlowValidationDetails&& value) { SetMissingEndingNodes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing configuration for a node.</p>
     */
    inline const MissingNodeConfigurationFlowValidationDetails& GetMissingNodeConfiguration() const{ return m_missingNodeConfiguration; }
    inline bool MissingNodeConfigurationHasBeenSet() const { return m_missingNodeConfigurationHasBeenSet; }
    inline void SetMissingNodeConfiguration(const MissingNodeConfigurationFlowValidationDetails& value) { m_missingNodeConfigurationHasBeenSet = true; m_missingNodeConfiguration = value; }
    inline void SetMissingNodeConfiguration(MissingNodeConfigurationFlowValidationDetails&& value) { m_missingNodeConfigurationHasBeenSet = true; m_missingNodeConfiguration = std::move(value); }
    inline FlowValidationDetails& WithMissingNodeConfiguration(const MissingNodeConfigurationFlowValidationDetails& value) { SetMissingNodeConfiguration(value); return *this;}
    inline FlowValidationDetails& WithMissingNodeConfiguration(MissingNodeConfigurationFlowValidationDetails&& value) { SetMissingNodeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing required input in a node.</p>
     */
    inline const MissingNodeInputFlowValidationDetails& GetMissingNodeInput() const{ return m_missingNodeInput; }
    inline bool MissingNodeInputHasBeenSet() const { return m_missingNodeInputHasBeenSet; }
    inline void SetMissingNodeInput(const MissingNodeInputFlowValidationDetails& value) { m_missingNodeInputHasBeenSet = true; m_missingNodeInput = value; }
    inline void SetMissingNodeInput(MissingNodeInputFlowValidationDetails&& value) { m_missingNodeInputHasBeenSet = true; m_missingNodeInput = std::move(value); }
    inline FlowValidationDetails& WithMissingNodeInput(const MissingNodeInputFlowValidationDetails& value) { SetMissingNodeInput(value); return *this;}
    inline FlowValidationDetails& WithMissingNodeInput(MissingNodeInputFlowValidationDetails&& value) { SetMissingNodeInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing required output in a node.</p>
     */
    inline const MissingNodeOutputFlowValidationDetails& GetMissingNodeOutput() const{ return m_missingNodeOutput; }
    inline bool MissingNodeOutputHasBeenSet() const { return m_missingNodeOutputHasBeenSet; }
    inline void SetMissingNodeOutput(const MissingNodeOutputFlowValidationDetails& value) { m_missingNodeOutputHasBeenSet = true; m_missingNodeOutput = value; }
    inline void SetMissingNodeOutput(MissingNodeOutputFlowValidationDetails&& value) { m_missingNodeOutputHasBeenSet = true; m_missingNodeOutput = std::move(value); }
    inline FlowValidationDetails& WithMissingNodeOutput(const MissingNodeOutputFlowValidationDetails& value) { SetMissingNodeOutput(value); return *this;}
    inline FlowValidationDetails& WithMissingNodeOutput(MissingNodeOutputFlowValidationDetails&& value) { SetMissingNodeOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing starting nodes in the flow.</p>
     */
    inline const MissingStartingNodesFlowValidationDetails& GetMissingStartingNodes() const{ return m_missingStartingNodes; }
    inline bool MissingStartingNodesHasBeenSet() const { return m_missingStartingNodesHasBeenSet; }
    inline void SetMissingStartingNodes(const MissingStartingNodesFlowValidationDetails& value) { m_missingStartingNodesHasBeenSet = true; m_missingStartingNodes = value; }
    inline void SetMissingStartingNodes(MissingStartingNodesFlowValidationDetails&& value) { m_missingStartingNodesHasBeenSet = true; m_missingStartingNodes = std::move(value); }
    inline FlowValidationDetails& WithMissingStartingNodes(const MissingStartingNodesFlowValidationDetails& value) { SetMissingStartingNodes(value); return *this;}
    inline FlowValidationDetails& WithMissingStartingNodes(MissingStartingNodesFlowValidationDetails&& value) { SetMissingStartingNodes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about multiple connections to a single node input.</p>
     */
    inline const MultipleNodeInputConnectionsFlowValidationDetails& GetMultipleNodeInputConnections() const{ return m_multipleNodeInputConnections; }
    inline bool MultipleNodeInputConnectionsHasBeenSet() const { return m_multipleNodeInputConnectionsHasBeenSet; }
    inline void SetMultipleNodeInputConnections(const MultipleNodeInputConnectionsFlowValidationDetails& value) { m_multipleNodeInputConnectionsHasBeenSet = true; m_multipleNodeInputConnections = value; }
    inline void SetMultipleNodeInputConnections(MultipleNodeInputConnectionsFlowValidationDetails&& value) { m_multipleNodeInputConnectionsHasBeenSet = true; m_multipleNodeInputConnections = std::move(value); }
    inline FlowValidationDetails& WithMultipleNodeInputConnections(const MultipleNodeInputConnectionsFlowValidationDetails& value) { SetMultipleNodeInputConnections(value); return *this;}
    inline FlowValidationDetails& WithMultipleNodeInputConnections(MultipleNodeInputConnectionsFlowValidationDetails&& value) { SetMultipleNodeInputConnections(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unfulfilled node input with no valid connections.</p>
     */
    inline const UnfulfilledNodeInputFlowValidationDetails& GetUnfulfilledNodeInput() const{ return m_unfulfilledNodeInput; }
    inline bool UnfulfilledNodeInputHasBeenSet() const { return m_unfulfilledNodeInputHasBeenSet; }
    inline void SetUnfulfilledNodeInput(const UnfulfilledNodeInputFlowValidationDetails& value) { m_unfulfilledNodeInputHasBeenSet = true; m_unfulfilledNodeInput = value; }
    inline void SetUnfulfilledNodeInput(UnfulfilledNodeInputFlowValidationDetails&& value) { m_unfulfilledNodeInputHasBeenSet = true; m_unfulfilledNodeInput = std::move(value); }
    inline FlowValidationDetails& WithUnfulfilledNodeInput(const UnfulfilledNodeInputFlowValidationDetails& value) { SetUnfulfilledNodeInput(value); return *this;}
    inline FlowValidationDetails& WithUnfulfilledNodeInput(UnfulfilledNodeInputFlowValidationDetails&& value) { SetUnfulfilledNodeInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown condition for a connection.</p>
     */
    inline const UnknownConnectionConditionFlowValidationDetails& GetUnknownConnectionCondition() const{ return m_unknownConnectionCondition; }
    inline bool UnknownConnectionConditionHasBeenSet() const { return m_unknownConnectionConditionHasBeenSet; }
    inline void SetUnknownConnectionCondition(const UnknownConnectionConditionFlowValidationDetails& value) { m_unknownConnectionConditionHasBeenSet = true; m_unknownConnectionCondition = value; }
    inline void SetUnknownConnectionCondition(UnknownConnectionConditionFlowValidationDetails&& value) { m_unknownConnectionConditionHasBeenSet = true; m_unknownConnectionCondition = std::move(value); }
    inline FlowValidationDetails& WithUnknownConnectionCondition(const UnknownConnectionConditionFlowValidationDetails& value) { SetUnknownConnectionCondition(value); return *this;}
    inline FlowValidationDetails& WithUnknownConnectionCondition(UnknownConnectionConditionFlowValidationDetails&& value) { SetUnknownConnectionCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown source node for a connection.</p>
     */
    inline const UnknownConnectionSourceFlowValidationDetails& GetUnknownConnectionSource() const{ return m_unknownConnectionSource; }
    inline bool UnknownConnectionSourceHasBeenSet() const { return m_unknownConnectionSourceHasBeenSet; }
    inline void SetUnknownConnectionSource(const UnknownConnectionSourceFlowValidationDetails& value) { m_unknownConnectionSourceHasBeenSet = true; m_unknownConnectionSource = value; }
    inline void SetUnknownConnectionSource(UnknownConnectionSourceFlowValidationDetails&& value) { m_unknownConnectionSourceHasBeenSet = true; m_unknownConnectionSource = std::move(value); }
    inline FlowValidationDetails& WithUnknownConnectionSource(const UnknownConnectionSourceFlowValidationDetails& value) { SetUnknownConnectionSource(value); return *this;}
    inline FlowValidationDetails& WithUnknownConnectionSource(UnknownConnectionSourceFlowValidationDetails&& value) { SetUnknownConnectionSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown source output for a connection.</p>
     */
    inline const UnknownConnectionSourceOutputFlowValidationDetails& GetUnknownConnectionSourceOutput() const{ return m_unknownConnectionSourceOutput; }
    inline bool UnknownConnectionSourceOutputHasBeenSet() const { return m_unknownConnectionSourceOutputHasBeenSet; }
    inline void SetUnknownConnectionSourceOutput(const UnknownConnectionSourceOutputFlowValidationDetails& value) { m_unknownConnectionSourceOutputHasBeenSet = true; m_unknownConnectionSourceOutput = value; }
    inline void SetUnknownConnectionSourceOutput(UnknownConnectionSourceOutputFlowValidationDetails&& value) { m_unknownConnectionSourceOutputHasBeenSet = true; m_unknownConnectionSourceOutput = std::move(value); }
    inline FlowValidationDetails& WithUnknownConnectionSourceOutput(const UnknownConnectionSourceOutputFlowValidationDetails& value) { SetUnknownConnectionSourceOutput(value); return *this;}
    inline FlowValidationDetails& WithUnknownConnectionSourceOutput(UnknownConnectionSourceOutputFlowValidationDetails&& value) { SetUnknownConnectionSourceOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown target node for a connection.</p>
     */
    inline const UnknownConnectionTargetFlowValidationDetails& GetUnknownConnectionTarget() const{ return m_unknownConnectionTarget; }
    inline bool UnknownConnectionTargetHasBeenSet() const { return m_unknownConnectionTargetHasBeenSet; }
    inline void SetUnknownConnectionTarget(const UnknownConnectionTargetFlowValidationDetails& value) { m_unknownConnectionTargetHasBeenSet = true; m_unknownConnectionTarget = value; }
    inline void SetUnknownConnectionTarget(UnknownConnectionTargetFlowValidationDetails&& value) { m_unknownConnectionTargetHasBeenSet = true; m_unknownConnectionTarget = std::move(value); }
    inline FlowValidationDetails& WithUnknownConnectionTarget(const UnknownConnectionTargetFlowValidationDetails& value) { SetUnknownConnectionTarget(value); return *this;}
    inline FlowValidationDetails& WithUnknownConnectionTarget(UnknownConnectionTargetFlowValidationDetails&& value) { SetUnknownConnectionTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown target input for a connection.</p>
     */
    inline const UnknownConnectionTargetInputFlowValidationDetails& GetUnknownConnectionTargetInput() const{ return m_unknownConnectionTargetInput; }
    inline bool UnknownConnectionTargetInputHasBeenSet() const { return m_unknownConnectionTargetInputHasBeenSet; }
    inline void SetUnknownConnectionTargetInput(const UnknownConnectionTargetInputFlowValidationDetails& value) { m_unknownConnectionTargetInputHasBeenSet = true; m_unknownConnectionTargetInput = value; }
    inline void SetUnknownConnectionTargetInput(UnknownConnectionTargetInputFlowValidationDetails&& value) { m_unknownConnectionTargetInputHasBeenSet = true; m_unknownConnectionTargetInput = std::move(value); }
    inline FlowValidationDetails& WithUnknownConnectionTargetInput(const UnknownConnectionTargetInputFlowValidationDetails& value) { SetUnknownConnectionTargetInput(value); return *this;}
    inline FlowValidationDetails& WithUnknownConnectionTargetInput(UnknownConnectionTargetInputFlowValidationDetails&& value) { SetUnknownConnectionTargetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unreachable node in the flow.</p>
     */
    inline const UnreachableNodeFlowValidationDetails& GetUnreachableNode() const{ return m_unreachableNode; }
    inline bool UnreachableNodeHasBeenSet() const { return m_unreachableNodeHasBeenSet; }
    inline void SetUnreachableNode(const UnreachableNodeFlowValidationDetails& value) { m_unreachableNodeHasBeenSet = true; m_unreachableNode = value; }
    inline void SetUnreachableNode(UnreachableNodeFlowValidationDetails&& value) { m_unreachableNodeHasBeenSet = true; m_unreachableNode = std::move(value); }
    inline FlowValidationDetails& WithUnreachableNode(const UnreachableNodeFlowValidationDetails& value) { SetUnreachableNode(value); return *this;}
    inline FlowValidationDetails& WithUnreachableNode(UnreachableNodeFlowValidationDetails&& value) { SetUnreachableNode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about unsatisfied conditions for a connection.</p>
     */
    inline const UnsatisfiedConnectionConditionsFlowValidationDetails& GetUnsatisfiedConnectionConditions() const{ return m_unsatisfiedConnectionConditions; }
    inline bool UnsatisfiedConnectionConditionsHasBeenSet() const { return m_unsatisfiedConnectionConditionsHasBeenSet; }
    inline void SetUnsatisfiedConnectionConditions(const UnsatisfiedConnectionConditionsFlowValidationDetails& value) { m_unsatisfiedConnectionConditionsHasBeenSet = true; m_unsatisfiedConnectionConditions = value; }
    inline void SetUnsatisfiedConnectionConditions(UnsatisfiedConnectionConditionsFlowValidationDetails&& value) { m_unsatisfiedConnectionConditionsHasBeenSet = true; m_unsatisfiedConnectionConditions = std::move(value); }
    inline FlowValidationDetails& WithUnsatisfiedConnectionConditions(const UnsatisfiedConnectionConditionsFlowValidationDetails& value) { SetUnsatisfiedConnectionConditions(value); return *this;}
    inline FlowValidationDetails& WithUnsatisfiedConnectionConditions(UnsatisfiedConnectionConditionsFlowValidationDetails&& value) { SetUnsatisfiedConnectionConditions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unspecified validation.</p>
     */
    inline const UnspecifiedFlowValidationDetails& GetUnspecified() const{ return m_unspecified; }
    inline bool UnspecifiedHasBeenSet() const { return m_unspecifiedHasBeenSet; }
    inline void SetUnspecified(const UnspecifiedFlowValidationDetails& value) { m_unspecifiedHasBeenSet = true; m_unspecified = value; }
    inline void SetUnspecified(UnspecifiedFlowValidationDetails&& value) { m_unspecifiedHasBeenSet = true; m_unspecified = std::move(value); }
    inline FlowValidationDetails& WithUnspecified(const UnspecifiedFlowValidationDetails& value) { SetUnspecified(value); return *this;}
    inline FlowValidationDetails& WithUnspecified(UnspecifiedFlowValidationDetails&& value) { SetUnspecified(std::move(value)); return *this;}
    ///@}
  private:

    CyclicConnectionFlowValidationDetails m_cyclicConnection;
    bool m_cyclicConnectionHasBeenSet = false;

    DuplicateConditionExpressionFlowValidationDetails m_duplicateConditionExpression;
    bool m_duplicateConditionExpressionHasBeenSet = false;

    DuplicateConnectionsFlowValidationDetails m_duplicateConnections;
    bool m_duplicateConnectionsHasBeenSet = false;

    IncompatibleConnectionDataTypeFlowValidationDetails m_incompatibleConnectionDataType;
    bool m_incompatibleConnectionDataTypeHasBeenSet = false;

    MalformedConditionExpressionFlowValidationDetails m_malformedConditionExpression;
    bool m_malformedConditionExpressionHasBeenSet = false;

    MalformedNodeInputExpressionFlowValidationDetails m_malformedNodeInputExpression;
    bool m_malformedNodeInputExpressionHasBeenSet = false;

    MismatchedNodeInputTypeFlowValidationDetails m_mismatchedNodeInputType;
    bool m_mismatchedNodeInputTypeHasBeenSet = false;

    MismatchedNodeOutputTypeFlowValidationDetails m_mismatchedNodeOutputType;
    bool m_mismatchedNodeOutputTypeHasBeenSet = false;

    MissingConnectionConfigurationFlowValidationDetails m_missingConnectionConfiguration;
    bool m_missingConnectionConfigurationHasBeenSet = false;

    MissingDefaultConditionFlowValidationDetails m_missingDefaultCondition;
    bool m_missingDefaultConditionHasBeenSet = false;

    MissingEndingNodesFlowValidationDetails m_missingEndingNodes;
    bool m_missingEndingNodesHasBeenSet = false;

    MissingNodeConfigurationFlowValidationDetails m_missingNodeConfiguration;
    bool m_missingNodeConfigurationHasBeenSet = false;

    MissingNodeInputFlowValidationDetails m_missingNodeInput;
    bool m_missingNodeInputHasBeenSet = false;

    MissingNodeOutputFlowValidationDetails m_missingNodeOutput;
    bool m_missingNodeOutputHasBeenSet = false;

    MissingStartingNodesFlowValidationDetails m_missingStartingNodes;
    bool m_missingStartingNodesHasBeenSet = false;

    MultipleNodeInputConnectionsFlowValidationDetails m_multipleNodeInputConnections;
    bool m_multipleNodeInputConnectionsHasBeenSet = false;

    UnfulfilledNodeInputFlowValidationDetails m_unfulfilledNodeInput;
    bool m_unfulfilledNodeInputHasBeenSet = false;

    UnknownConnectionConditionFlowValidationDetails m_unknownConnectionCondition;
    bool m_unknownConnectionConditionHasBeenSet = false;

    UnknownConnectionSourceFlowValidationDetails m_unknownConnectionSource;
    bool m_unknownConnectionSourceHasBeenSet = false;

    UnknownConnectionSourceOutputFlowValidationDetails m_unknownConnectionSourceOutput;
    bool m_unknownConnectionSourceOutputHasBeenSet = false;

    UnknownConnectionTargetFlowValidationDetails m_unknownConnectionTarget;
    bool m_unknownConnectionTargetHasBeenSet = false;

    UnknownConnectionTargetInputFlowValidationDetails m_unknownConnectionTargetInput;
    bool m_unknownConnectionTargetInputHasBeenSet = false;

    UnreachableNodeFlowValidationDetails m_unreachableNode;
    bool m_unreachableNodeHasBeenSet = false;

    UnsatisfiedConnectionConditionsFlowValidationDetails m_unsatisfiedConnectionConditions;
    bool m_unsatisfiedConnectionConditionsHasBeenSet = false;

    UnspecifiedFlowValidationDetails m_unspecified;
    bool m_unspecifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
