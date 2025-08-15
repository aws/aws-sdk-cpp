/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CyclicConnectionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/DuplicateConnectionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/DuplicateConditionExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnreachableNodeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionSourceFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionSourceOutputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionTargetFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionTargetInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownConnectionConditionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MalformedConditionExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MalformedNodeInputExpressionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MismatchedNodeInputTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MismatchedNodeOutputTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/IncompatibleConnectionDataTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingConnectionConfigurationFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingDefaultConditionFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingEndingNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeConfigurationFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingNodeOutputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingStartingNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MultipleNodeInputConnectionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnfulfilledNodeInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnsatisfiedConnectionConditionsFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnspecifiedFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownNodeInputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/UnknownNodeOutputFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingLoopInputNodeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MissingLoopControllerNodeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MultipleLoopInputNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/MultipleLoopControllerNodesFlowValidationDetails.h>
#include <aws/bedrock-agent/model/LoopIncompatibleNodeTypeFlowValidationDetails.h>
#include <aws/bedrock-agent/model/InvalidLoopBoundaryFlowValidationDetails.h>
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
    AWS_BEDROCKAGENT_API FlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API FlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about a cyclic connection in the flow.</p>
     */
    inline const CyclicConnectionFlowValidationDetails& GetCyclicConnection() const { return m_cyclicConnection; }
    inline bool CyclicConnectionHasBeenSet() const { return m_cyclicConnectionHasBeenSet; }
    template<typename CyclicConnectionT = CyclicConnectionFlowValidationDetails>
    void SetCyclicConnection(CyclicConnectionT&& value) { m_cyclicConnectionHasBeenSet = true; m_cyclicConnection = std::forward<CyclicConnectionT>(value); }
    template<typename CyclicConnectionT = CyclicConnectionFlowValidationDetails>
    FlowValidationDetails& WithCyclicConnection(CyclicConnectionT&& value) { SetCyclicConnection(std::forward<CyclicConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about duplicate connections between nodes.</p>
     */
    inline const DuplicateConnectionsFlowValidationDetails& GetDuplicateConnections() const { return m_duplicateConnections; }
    inline bool DuplicateConnectionsHasBeenSet() const { return m_duplicateConnectionsHasBeenSet; }
    template<typename DuplicateConnectionsT = DuplicateConnectionsFlowValidationDetails>
    void SetDuplicateConnections(DuplicateConnectionsT&& value) { m_duplicateConnectionsHasBeenSet = true; m_duplicateConnections = std::forward<DuplicateConnectionsT>(value); }
    template<typename DuplicateConnectionsT = DuplicateConnectionsFlowValidationDetails>
    FlowValidationDetails& WithDuplicateConnections(DuplicateConnectionsT&& value) { SetDuplicateConnections(std::forward<DuplicateConnectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about duplicate condition expressions in a node.</p>
     */
    inline const DuplicateConditionExpressionFlowValidationDetails& GetDuplicateConditionExpression() const { return m_duplicateConditionExpression; }
    inline bool DuplicateConditionExpressionHasBeenSet() const { return m_duplicateConditionExpressionHasBeenSet; }
    template<typename DuplicateConditionExpressionT = DuplicateConditionExpressionFlowValidationDetails>
    void SetDuplicateConditionExpression(DuplicateConditionExpressionT&& value) { m_duplicateConditionExpressionHasBeenSet = true; m_duplicateConditionExpression = std::forward<DuplicateConditionExpressionT>(value); }
    template<typename DuplicateConditionExpressionT = DuplicateConditionExpressionFlowValidationDetails>
    FlowValidationDetails& WithDuplicateConditionExpression(DuplicateConditionExpressionT&& value) { SetDuplicateConditionExpression(std::forward<DuplicateConditionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unreachable node in the flow.</p>
     */
    inline const UnreachableNodeFlowValidationDetails& GetUnreachableNode() const { return m_unreachableNode; }
    inline bool UnreachableNodeHasBeenSet() const { return m_unreachableNodeHasBeenSet; }
    template<typename UnreachableNodeT = UnreachableNodeFlowValidationDetails>
    void SetUnreachableNode(UnreachableNodeT&& value) { m_unreachableNodeHasBeenSet = true; m_unreachableNode = std::forward<UnreachableNodeT>(value); }
    template<typename UnreachableNodeT = UnreachableNodeFlowValidationDetails>
    FlowValidationDetails& WithUnreachableNode(UnreachableNodeT&& value) { SetUnreachableNode(std::forward<UnreachableNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown source node for a connection.</p>
     */
    inline const UnknownConnectionSourceFlowValidationDetails& GetUnknownConnectionSource() const { return m_unknownConnectionSource; }
    inline bool UnknownConnectionSourceHasBeenSet() const { return m_unknownConnectionSourceHasBeenSet; }
    template<typename UnknownConnectionSourceT = UnknownConnectionSourceFlowValidationDetails>
    void SetUnknownConnectionSource(UnknownConnectionSourceT&& value) { m_unknownConnectionSourceHasBeenSet = true; m_unknownConnectionSource = std::forward<UnknownConnectionSourceT>(value); }
    template<typename UnknownConnectionSourceT = UnknownConnectionSourceFlowValidationDetails>
    FlowValidationDetails& WithUnknownConnectionSource(UnknownConnectionSourceT&& value) { SetUnknownConnectionSource(std::forward<UnknownConnectionSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown source output for a connection.</p>
     */
    inline const UnknownConnectionSourceOutputFlowValidationDetails& GetUnknownConnectionSourceOutput() const { return m_unknownConnectionSourceOutput; }
    inline bool UnknownConnectionSourceOutputHasBeenSet() const { return m_unknownConnectionSourceOutputHasBeenSet; }
    template<typename UnknownConnectionSourceOutputT = UnknownConnectionSourceOutputFlowValidationDetails>
    void SetUnknownConnectionSourceOutput(UnknownConnectionSourceOutputT&& value) { m_unknownConnectionSourceOutputHasBeenSet = true; m_unknownConnectionSourceOutput = std::forward<UnknownConnectionSourceOutputT>(value); }
    template<typename UnknownConnectionSourceOutputT = UnknownConnectionSourceOutputFlowValidationDetails>
    FlowValidationDetails& WithUnknownConnectionSourceOutput(UnknownConnectionSourceOutputT&& value) { SetUnknownConnectionSourceOutput(std::forward<UnknownConnectionSourceOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown target node for a connection.</p>
     */
    inline const UnknownConnectionTargetFlowValidationDetails& GetUnknownConnectionTarget() const { return m_unknownConnectionTarget; }
    inline bool UnknownConnectionTargetHasBeenSet() const { return m_unknownConnectionTargetHasBeenSet; }
    template<typename UnknownConnectionTargetT = UnknownConnectionTargetFlowValidationDetails>
    void SetUnknownConnectionTarget(UnknownConnectionTargetT&& value) { m_unknownConnectionTargetHasBeenSet = true; m_unknownConnectionTarget = std::forward<UnknownConnectionTargetT>(value); }
    template<typename UnknownConnectionTargetT = UnknownConnectionTargetFlowValidationDetails>
    FlowValidationDetails& WithUnknownConnectionTarget(UnknownConnectionTargetT&& value) { SetUnknownConnectionTarget(std::forward<UnknownConnectionTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown target input for a connection.</p>
     */
    inline const UnknownConnectionTargetInputFlowValidationDetails& GetUnknownConnectionTargetInput() const { return m_unknownConnectionTargetInput; }
    inline bool UnknownConnectionTargetInputHasBeenSet() const { return m_unknownConnectionTargetInputHasBeenSet; }
    template<typename UnknownConnectionTargetInputT = UnknownConnectionTargetInputFlowValidationDetails>
    void SetUnknownConnectionTargetInput(UnknownConnectionTargetInputT&& value) { m_unknownConnectionTargetInputHasBeenSet = true; m_unknownConnectionTargetInput = std::forward<UnknownConnectionTargetInputT>(value); }
    template<typename UnknownConnectionTargetInputT = UnknownConnectionTargetInputFlowValidationDetails>
    FlowValidationDetails& WithUnknownConnectionTargetInput(UnknownConnectionTargetInputT&& value) { SetUnknownConnectionTargetInput(std::forward<UnknownConnectionTargetInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown condition for a connection.</p>
     */
    inline const UnknownConnectionConditionFlowValidationDetails& GetUnknownConnectionCondition() const { return m_unknownConnectionCondition; }
    inline bool UnknownConnectionConditionHasBeenSet() const { return m_unknownConnectionConditionHasBeenSet; }
    template<typename UnknownConnectionConditionT = UnknownConnectionConditionFlowValidationDetails>
    void SetUnknownConnectionCondition(UnknownConnectionConditionT&& value) { m_unknownConnectionConditionHasBeenSet = true; m_unknownConnectionCondition = std::forward<UnknownConnectionConditionT>(value); }
    template<typename UnknownConnectionConditionT = UnknownConnectionConditionFlowValidationDetails>
    FlowValidationDetails& WithUnknownConnectionCondition(UnknownConnectionConditionT&& value) { SetUnknownConnectionCondition(std::forward<UnknownConnectionConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a malformed condition expression in a node.</p>
     */
    inline const MalformedConditionExpressionFlowValidationDetails& GetMalformedConditionExpression() const { return m_malformedConditionExpression; }
    inline bool MalformedConditionExpressionHasBeenSet() const { return m_malformedConditionExpressionHasBeenSet; }
    template<typename MalformedConditionExpressionT = MalformedConditionExpressionFlowValidationDetails>
    void SetMalformedConditionExpression(MalformedConditionExpressionT&& value) { m_malformedConditionExpressionHasBeenSet = true; m_malformedConditionExpression = std::forward<MalformedConditionExpressionT>(value); }
    template<typename MalformedConditionExpressionT = MalformedConditionExpressionFlowValidationDetails>
    FlowValidationDetails& WithMalformedConditionExpression(MalformedConditionExpressionT&& value) { SetMalformedConditionExpression(std::forward<MalformedConditionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a malformed input expression in a node.</p>
     */
    inline const MalformedNodeInputExpressionFlowValidationDetails& GetMalformedNodeInputExpression() const { return m_malformedNodeInputExpression; }
    inline bool MalformedNodeInputExpressionHasBeenSet() const { return m_malformedNodeInputExpressionHasBeenSet; }
    template<typename MalformedNodeInputExpressionT = MalformedNodeInputExpressionFlowValidationDetails>
    void SetMalformedNodeInputExpression(MalformedNodeInputExpressionT&& value) { m_malformedNodeInputExpressionHasBeenSet = true; m_malformedNodeInputExpression = std::forward<MalformedNodeInputExpressionT>(value); }
    template<typename MalformedNodeInputExpressionT = MalformedNodeInputExpressionFlowValidationDetails>
    FlowValidationDetails& WithMalformedNodeInputExpression(MalformedNodeInputExpressionT&& value) { SetMalformedNodeInputExpression(std::forward<MalformedNodeInputExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about mismatched input data types in a node.</p>
     */
    inline const MismatchedNodeInputTypeFlowValidationDetails& GetMismatchedNodeInputType() const { return m_mismatchedNodeInputType; }
    inline bool MismatchedNodeInputTypeHasBeenSet() const { return m_mismatchedNodeInputTypeHasBeenSet; }
    template<typename MismatchedNodeInputTypeT = MismatchedNodeInputTypeFlowValidationDetails>
    void SetMismatchedNodeInputType(MismatchedNodeInputTypeT&& value) { m_mismatchedNodeInputTypeHasBeenSet = true; m_mismatchedNodeInputType = std::forward<MismatchedNodeInputTypeT>(value); }
    template<typename MismatchedNodeInputTypeT = MismatchedNodeInputTypeFlowValidationDetails>
    FlowValidationDetails& WithMismatchedNodeInputType(MismatchedNodeInputTypeT&& value) { SetMismatchedNodeInputType(std::forward<MismatchedNodeInputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about mismatched output data types in a node.</p>
     */
    inline const MismatchedNodeOutputTypeFlowValidationDetails& GetMismatchedNodeOutputType() const { return m_mismatchedNodeOutputType; }
    inline bool MismatchedNodeOutputTypeHasBeenSet() const { return m_mismatchedNodeOutputTypeHasBeenSet; }
    template<typename MismatchedNodeOutputTypeT = MismatchedNodeOutputTypeFlowValidationDetails>
    void SetMismatchedNodeOutputType(MismatchedNodeOutputTypeT&& value) { m_mismatchedNodeOutputTypeHasBeenSet = true; m_mismatchedNodeOutputType = std::forward<MismatchedNodeOutputTypeT>(value); }
    template<typename MismatchedNodeOutputTypeT = MismatchedNodeOutputTypeFlowValidationDetails>
    FlowValidationDetails& WithMismatchedNodeOutputType(MismatchedNodeOutputTypeT&& value) { SetMismatchedNodeOutputType(std::forward<MismatchedNodeOutputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about incompatible data types in a connection.</p>
     */
    inline const IncompatibleConnectionDataTypeFlowValidationDetails& GetIncompatibleConnectionDataType() const { return m_incompatibleConnectionDataType; }
    inline bool IncompatibleConnectionDataTypeHasBeenSet() const { return m_incompatibleConnectionDataTypeHasBeenSet; }
    template<typename IncompatibleConnectionDataTypeT = IncompatibleConnectionDataTypeFlowValidationDetails>
    void SetIncompatibleConnectionDataType(IncompatibleConnectionDataTypeT&& value) { m_incompatibleConnectionDataTypeHasBeenSet = true; m_incompatibleConnectionDataType = std::forward<IncompatibleConnectionDataTypeT>(value); }
    template<typename IncompatibleConnectionDataTypeT = IncompatibleConnectionDataTypeFlowValidationDetails>
    FlowValidationDetails& WithIncompatibleConnectionDataType(IncompatibleConnectionDataTypeT&& value) { SetIncompatibleConnectionDataType(std::forward<IncompatibleConnectionDataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing configuration for a connection.</p>
     */
    inline const MissingConnectionConfigurationFlowValidationDetails& GetMissingConnectionConfiguration() const { return m_missingConnectionConfiguration; }
    inline bool MissingConnectionConfigurationHasBeenSet() const { return m_missingConnectionConfigurationHasBeenSet; }
    template<typename MissingConnectionConfigurationT = MissingConnectionConfigurationFlowValidationDetails>
    void SetMissingConnectionConfiguration(MissingConnectionConfigurationT&& value) { m_missingConnectionConfigurationHasBeenSet = true; m_missingConnectionConfiguration = std::forward<MissingConnectionConfigurationT>(value); }
    template<typename MissingConnectionConfigurationT = MissingConnectionConfigurationFlowValidationDetails>
    FlowValidationDetails& WithMissingConnectionConfiguration(MissingConnectionConfigurationT&& value) { SetMissingConnectionConfiguration(std::forward<MissingConnectionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing default condition in a conditional node.</p>
     */
    inline const MissingDefaultConditionFlowValidationDetails& GetMissingDefaultCondition() const { return m_missingDefaultCondition; }
    inline bool MissingDefaultConditionHasBeenSet() const { return m_missingDefaultConditionHasBeenSet; }
    template<typename MissingDefaultConditionT = MissingDefaultConditionFlowValidationDetails>
    void SetMissingDefaultCondition(MissingDefaultConditionT&& value) { m_missingDefaultConditionHasBeenSet = true; m_missingDefaultCondition = std::forward<MissingDefaultConditionT>(value); }
    template<typename MissingDefaultConditionT = MissingDefaultConditionFlowValidationDetails>
    FlowValidationDetails& WithMissingDefaultCondition(MissingDefaultConditionT&& value) { SetMissingDefaultCondition(std::forward<MissingDefaultConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing ending nodes in the flow.</p>
     */
    inline const MissingEndingNodesFlowValidationDetails& GetMissingEndingNodes() const { return m_missingEndingNodes; }
    inline bool MissingEndingNodesHasBeenSet() const { return m_missingEndingNodesHasBeenSet; }
    template<typename MissingEndingNodesT = MissingEndingNodesFlowValidationDetails>
    void SetMissingEndingNodes(MissingEndingNodesT&& value) { m_missingEndingNodesHasBeenSet = true; m_missingEndingNodes = std::forward<MissingEndingNodesT>(value); }
    template<typename MissingEndingNodesT = MissingEndingNodesFlowValidationDetails>
    FlowValidationDetails& WithMissingEndingNodes(MissingEndingNodesT&& value) { SetMissingEndingNodes(std::forward<MissingEndingNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing configuration for a node.</p>
     */
    inline const MissingNodeConfigurationFlowValidationDetails& GetMissingNodeConfiguration() const { return m_missingNodeConfiguration; }
    inline bool MissingNodeConfigurationHasBeenSet() const { return m_missingNodeConfigurationHasBeenSet; }
    template<typename MissingNodeConfigurationT = MissingNodeConfigurationFlowValidationDetails>
    void SetMissingNodeConfiguration(MissingNodeConfigurationT&& value) { m_missingNodeConfigurationHasBeenSet = true; m_missingNodeConfiguration = std::forward<MissingNodeConfigurationT>(value); }
    template<typename MissingNodeConfigurationT = MissingNodeConfigurationFlowValidationDetails>
    FlowValidationDetails& WithMissingNodeConfiguration(MissingNodeConfigurationT&& value) { SetMissingNodeConfiguration(std::forward<MissingNodeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing required input in a node.</p>
     */
    inline const MissingNodeInputFlowValidationDetails& GetMissingNodeInput() const { return m_missingNodeInput; }
    inline bool MissingNodeInputHasBeenSet() const { return m_missingNodeInputHasBeenSet; }
    template<typename MissingNodeInputT = MissingNodeInputFlowValidationDetails>
    void SetMissingNodeInput(MissingNodeInputT&& value) { m_missingNodeInputHasBeenSet = true; m_missingNodeInput = std::forward<MissingNodeInputT>(value); }
    template<typename MissingNodeInputT = MissingNodeInputFlowValidationDetails>
    FlowValidationDetails& WithMissingNodeInput(MissingNodeInputT&& value) { SetMissingNodeInput(std::forward<MissingNodeInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a missing required output in a node.</p>
     */
    inline const MissingNodeOutputFlowValidationDetails& GetMissingNodeOutput() const { return m_missingNodeOutput; }
    inline bool MissingNodeOutputHasBeenSet() const { return m_missingNodeOutputHasBeenSet; }
    template<typename MissingNodeOutputT = MissingNodeOutputFlowValidationDetails>
    void SetMissingNodeOutput(MissingNodeOutputT&& value) { m_missingNodeOutputHasBeenSet = true; m_missingNodeOutput = std::forward<MissingNodeOutputT>(value); }
    template<typename MissingNodeOutputT = MissingNodeOutputFlowValidationDetails>
    FlowValidationDetails& WithMissingNodeOutput(MissingNodeOutputT&& value) { SetMissingNodeOutput(std::forward<MissingNodeOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about missing starting nodes in the flow.</p>
     */
    inline const MissingStartingNodesFlowValidationDetails& GetMissingStartingNodes() const { return m_missingStartingNodes; }
    inline bool MissingStartingNodesHasBeenSet() const { return m_missingStartingNodesHasBeenSet; }
    template<typename MissingStartingNodesT = MissingStartingNodesFlowValidationDetails>
    void SetMissingStartingNodes(MissingStartingNodesT&& value) { m_missingStartingNodesHasBeenSet = true; m_missingStartingNodes = std::forward<MissingStartingNodesT>(value); }
    template<typename MissingStartingNodesT = MissingStartingNodesFlowValidationDetails>
    FlowValidationDetails& WithMissingStartingNodes(MissingStartingNodesT&& value) { SetMissingStartingNodes(std::forward<MissingStartingNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about multiple connections to a single node input.</p>
     */
    inline const MultipleNodeInputConnectionsFlowValidationDetails& GetMultipleNodeInputConnections() const { return m_multipleNodeInputConnections; }
    inline bool MultipleNodeInputConnectionsHasBeenSet() const { return m_multipleNodeInputConnectionsHasBeenSet; }
    template<typename MultipleNodeInputConnectionsT = MultipleNodeInputConnectionsFlowValidationDetails>
    void SetMultipleNodeInputConnections(MultipleNodeInputConnectionsT&& value) { m_multipleNodeInputConnectionsHasBeenSet = true; m_multipleNodeInputConnections = std::forward<MultipleNodeInputConnectionsT>(value); }
    template<typename MultipleNodeInputConnectionsT = MultipleNodeInputConnectionsFlowValidationDetails>
    FlowValidationDetails& WithMultipleNodeInputConnections(MultipleNodeInputConnectionsT&& value) { SetMultipleNodeInputConnections(std::forward<MultipleNodeInputConnectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unfulfilled node input with no valid connections.</p>
     */
    inline const UnfulfilledNodeInputFlowValidationDetails& GetUnfulfilledNodeInput() const { return m_unfulfilledNodeInput; }
    inline bool UnfulfilledNodeInputHasBeenSet() const { return m_unfulfilledNodeInputHasBeenSet; }
    template<typename UnfulfilledNodeInputT = UnfulfilledNodeInputFlowValidationDetails>
    void SetUnfulfilledNodeInput(UnfulfilledNodeInputT&& value) { m_unfulfilledNodeInputHasBeenSet = true; m_unfulfilledNodeInput = std::forward<UnfulfilledNodeInputT>(value); }
    template<typename UnfulfilledNodeInputT = UnfulfilledNodeInputFlowValidationDetails>
    FlowValidationDetails& WithUnfulfilledNodeInput(UnfulfilledNodeInputT&& value) { SetUnfulfilledNodeInput(std::forward<UnfulfilledNodeInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about unsatisfied conditions for a connection.</p>
     */
    inline const UnsatisfiedConnectionConditionsFlowValidationDetails& GetUnsatisfiedConnectionConditions() const { return m_unsatisfiedConnectionConditions; }
    inline bool UnsatisfiedConnectionConditionsHasBeenSet() const { return m_unsatisfiedConnectionConditionsHasBeenSet; }
    template<typename UnsatisfiedConnectionConditionsT = UnsatisfiedConnectionConditionsFlowValidationDetails>
    void SetUnsatisfiedConnectionConditions(UnsatisfiedConnectionConditionsT&& value) { m_unsatisfiedConnectionConditionsHasBeenSet = true; m_unsatisfiedConnectionConditions = std::forward<UnsatisfiedConnectionConditionsT>(value); }
    template<typename UnsatisfiedConnectionConditionsT = UnsatisfiedConnectionConditionsFlowValidationDetails>
    FlowValidationDetails& WithUnsatisfiedConnectionConditions(UnsatisfiedConnectionConditionsT&& value) { SetUnsatisfiedConnectionConditions(std::forward<UnsatisfiedConnectionConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unspecified validation.</p>
     */
    inline const UnspecifiedFlowValidationDetails& GetUnspecified() const { return m_unspecified; }
    inline bool UnspecifiedHasBeenSet() const { return m_unspecifiedHasBeenSet; }
    template<typename UnspecifiedT = UnspecifiedFlowValidationDetails>
    void SetUnspecified(UnspecifiedT&& value) { m_unspecifiedHasBeenSet = true; m_unspecified = std::forward<UnspecifiedT>(value); }
    template<typename UnspecifiedT = UnspecifiedFlowValidationDetails>
    FlowValidationDetails& WithUnspecified(UnspecifiedT&& value) { SetUnspecified(std::forward<UnspecifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown input for a node.</p>
     */
    inline const UnknownNodeInputFlowValidationDetails& GetUnknownNodeInput() const { return m_unknownNodeInput; }
    inline bool UnknownNodeInputHasBeenSet() const { return m_unknownNodeInputHasBeenSet; }
    template<typename UnknownNodeInputT = UnknownNodeInputFlowValidationDetails>
    void SetUnknownNodeInput(UnknownNodeInputT&& value) { m_unknownNodeInputHasBeenSet = true; m_unknownNodeInput = std::forward<UnknownNodeInputT>(value); }
    template<typename UnknownNodeInputT = UnknownNodeInputFlowValidationDetails>
    FlowValidationDetails& WithUnknownNodeInput(UnknownNodeInputT&& value) { SetUnknownNodeInput(std::forward<UnknownNodeInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an unknown output for a node.</p>
     */
    inline const UnknownNodeOutputFlowValidationDetails& GetUnknownNodeOutput() const { return m_unknownNodeOutput; }
    inline bool UnknownNodeOutputHasBeenSet() const { return m_unknownNodeOutputHasBeenSet; }
    template<typename UnknownNodeOutputT = UnknownNodeOutputFlowValidationDetails>
    void SetUnknownNodeOutput(UnknownNodeOutputT&& value) { m_unknownNodeOutputHasBeenSet = true; m_unknownNodeOutput = std::forward<UnknownNodeOutputT>(value); }
    template<typename UnknownNodeOutputT = UnknownNodeOutputFlowValidationDetails>
    FlowValidationDetails& WithUnknownNodeOutput(UnknownNodeOutputT&& value) { SetUnknownNodeOutput(std::forward<UnknownNodeOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that's missing a required <code>LoopInput</code> node in
     * a DoWhile loop.</p>
     */
    inline const MissingLoopInputNodeFlowValidationDetails& GetMissingLoopInputNode() const { return m_missingLoopInputNode; }
    inline bool MissingLoopInputNodeHasBeenSet() const { return m_missingLoopInputNodeHasBeenSet; }
    template<typename MissingLoopInputNodeT = MissingLoopInputNodeFlowValidationDetails>
    void SetMissingLoopInputNode(MissingLoopInputNodeT&& value) { m_missingLoopInputNodeHasBeenSet = true; m_missingLoopInputNode = std::forward<MissingLoopInputNodeT>(value); }
    template<typename MissingLoopInputNodeT = MissingLoopInputNodeFlowValidationDetails>
    FlowValidationDetails& WithMissingLoopInputNode(MissingLoopInputNodeT&& value) { SetMissingLoopInputNode(std::forward<MissingLoopInputNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that's missing a required <code>LoopController</code>
     * node in a DoWhile loop.</p>
     */
    inline const MissingLoopControllerNodeFlowValidationDetails& GetMissingLoopControllerNode() const { return m_missingLoopControllerNode; }
    inline bool MissingLoopControllerNodeHasBeenSet() const { return m_missingLoopControllerNodeHasBeenSet; }
    template<typename MissingLoopControllerNodeT = MissingLoopControllerNodeFlowValidationDetails>
    void SetMissingLoopControllerNode(MissingLoopControllerNodeT&& value) { m_missingLoopControllerNodeHasBeenSet = true; m_missingLoopControllerNode = std::forward<MissingLoopControllerNodeT>(value); }
    template<typename MissingLoopControllerNodeT = MissingLoopControllerNodeFlowValidationDetails>
    FlowValidationDetails& WithMissingLoopControllerNode(MissingLoopControllerNodeT&& value) { SetMissingLoopControllerNode(std::forward<MissingLoopControllerNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that contains multiple <code>LoopInput</code> nodes in a
     * DoWhile loop.</p>
     */
    inline const MultipleLoopInputNodesFlowValidationDetails& GetMultipleLoopInputNodes() const { return m_multipleLoopInputNodes; }
    inline bool MultipleLoopInputNodesHasBeenSet() const { return m_multipleLoopInputNodesHasBeenSet; }
    template<typename MultipleLoopInputNodesT = MultipleLoopInputNodesFlowValidationDetails>
    void SetMultipleLoopInputNodes(MultipleLoopInputNodesT&& value) { m_multipleLoopInputNodesHasBeenSet = true; m_multipleLoopInputNodes = std::forward<MultipleLoopInputNodesT>(value); }
    template<typename MultipleLoopInputNodesT = MultipleLoopInputNodesFlowValidationDetails>
    FlowValidationDetails& WithMultipleLoopInputNodes(MultipleLoopInputNodesT&& value) { SetMultipleLoopInputNodes(std::forward<MultipleLoopInputNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that contains multiple <code>LoopController</code> nodes
     * in a DoWhile loop.</p>
     */
    inline const MultipleLoopControllerNodesFlowValidationDetails& GetMultipleLoopControllerNodes() const { return m_multipleLoopControllerNodes; }
    inline bool MultipleLoopControllerNodesHasBeenSet() const { return m_multipleLoopControllerNodesHasBeenSet; }
    template<typename MultipleLoopControllerNodesT = MultipleLoopControllerNodesFlowValidationDetails>
    void SetMultipleLoopControllerNodes(MultipleLoopControllerNodesT&& value) { m_multipleLoopControllerNodesHasBeenSet = true; m_multipleLoopControllerNodes = std::forward<MultipleLoopControllerNodesT>(value); }
    template<typename MultipleLoopControllerNodesT = MultipleLoopControllerNodesFlowValidationDetails>
    FlowValidationDetails& WithMultipleLoopControllerNodes(MultipleLoopControllerNodesT&& value) { SetMultipleLoopControllerNodes(std::forward<MultipleLoopControllerNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that includes incompatible node types in a DoWhile
     * loop.</p>
     */
    inline const LoopIncompatibleNodeTypeFlowValidationDetails& GetLoopIncompatibleNodeType() const { return m_loopIncompatibleNodeType; }
    inline bool LoopIncompatibleNodeTypeHasBeenSet() const { return m_loopIncompatibleNodeTypeHasBeenSet; }
    template<typename LoopIncompatibleNodeTypeT = LoopIncompatibleNodeTypeFlowValidationDetails>
    void SetLoopIncompatibleNodeType(LoopIncompatibleNodeTypeT&& value) { m_loopIncompatibleNodeTypeHasBeenSet = true; m_loopIncompatibleNodeType = std::forward<LoopIncompatibleNodeTypeT>(value); }
    template<typename LoopIncompatibleNodeTypeT = LoopIncompatibleNodeTypeFlowValidationDetails>
    FlowValidationDetails& WithLoopIncompatibleNodeType(LoopIncompatibleNodeTypeT&& value) { SetLoopIncompatibleNodeType(std::forward<LoopIncompatibleNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a flow that includes connections that violate loop boundary
     * rules.</p>
     */
    inline const InvalidLoopBoundaryFlowValidationDetails& GetInvalidLoopBoundary() const { return m_invalidLoopBoundary; }
    inline bool InvalidLoopBoundaryHasBeenSet() const { return m_invalidLoopBoundaryHasBeenSet; }
    template<typename InvalidLoopBoundaryT = InvalidLoopBoundaryFlowValidationDetails>
    void SetInvalidLoopBoundary(InvalidLoopBoundaryT&& value) { m_invalidLoopBoundaryHasBeenSet = true; m_invalidLoopBoundary = std::forward<InvalidLoopBoundaryT>(value); }
    template<typename InvalidLoopBoundaryT = InvalidLoopBoundaryFlowValidationDetails>
    FlowValidationDetails& WithInvalidLoopBoundary(InvalidLoopBoundaryT&& value) { SetInvalidLoopBoundary(std::forward<InvalidLoopBoundaryT>(value)); return *this;}
    ///@}
  private:

    CyclicConnectionFlowValidationDetails m_cyclicConnection;
    bool m_cyclicConnectionHasBeenSet = false;

    DuplicateConnectionsFlowValidationDetails m_duplicateConnections;
    bool m_duplicateConnectionsHasBeenSet = false;

    DuplicateConditionExpressionFlowValidationDetails m_duplicateConditionExpression;
    bool m_duplicateConditionExpressionHasBeenSet = false;

    UnreachableNodeFlowValidationDetails m_unreachableNode;
    bool m_unreachableNodeHasBeenSet = false;

    UnknownConnectionSourceFlowValidationDetails m_unknownConnectionSource;
    bool m_unknownConnectionSourceHasBeenSet = false;

    UnknownConnectionSourceOutputFlowValidationDetails m_unknownConnectionSourceOutput;
    bool m_unknownConnectionSourceOutputHasBeenSet = false;

    UnknownConnectionTargetFlowValidationDetails m_unknownConnectionTarget;
    bool m_unknownConnectionTargetHasBeenSet = false;

    UnknownConnectionTargetInputFlowValidationDetails m_unknownConnectionTargetInput;
    bool m_unknownConnectionTargetInputHasBeenSet = false;

    UnknownConnectionConditionFlowValidationDetails m_unknownConnectionCondition;
    bool m_unknownConnectionConditionHasBeenSet = false;

    MalformedConditionExpressionFlowValidationDetails m_malformedConditionExpression;
    bool m_malformedConditionExpressionHasBeenSet = false;

    MalformedNodeInputExpressionFlowValidationDetails m_malformedNodeInputExpression;
    bool m_malformedNodeInputExpressionHasBeenSet = false;

    MismatchedNodeInputTypeFlowValidationDetails m_mismatchedNodeInputType;
    bool m_mismatchedNodeInputTypeHasBeenSet = false;

    MismatchedNodeOutputTypeFlowValidationDetails m_mismatchedNodeOutputType;
    bool m_mismatchedNodeOutputTypeHasBeenSet = false;

    IncompatibleConnectionDataTypeFlowValidationDetails m_incompatibleConnectionDataType;
    bool m_incompatibleConnectionDataTypeHasBeenSet = false;

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

    UnsatisfiedConnectionConditionsFlowValidationDetails m_unsatisfiedConnectionConditions;
    bool m_unsatisfiedConnectionConditionsHasBeenSet = false;

    UnspecifiedFlowValidationDetails m_unspecified;
    bool m_unspecifiedHasBeenSet = false;

    UnknownNodeInputFlowValidationDetails m_unknownNodeInput;
    bool m_unknownNodeInputHasBeenSet = false;

    UnknownNodeOutputFlowValidationDetails m_unknownNodeOutput;
    bool m_unknownNodeOutputHasBeenSet = false;

    MissingLoopInputNodeFlowValidationDetails m_missingLoopInputNode;
    bool m_missingLoopInputNodeHasBeenSet = false;

    MissingLoopControllerNodeFlowValidationDetails m_missingLoopControllerNode;
    bool m_missingLoopControllerNodeHasBeenSet = false;

    MultipleLoopInputNodesFlowValidationDetails m_multipleLoopInputNodes;
    bool m_multipleLoopInputNodesHasBeenSet = false;

    MultipleLoopControllerNodesFlowValidationDetails m_multipleLoopControllerNodes;
    bool m_multipleLoopControllerNodesHasBeenSet = false;

    LoopIncompatibleNodeTypeFlowValidationDetails m_loopIncompatibleNodeType;
    bool m_loopIncompatibleNodeTypeHasBeenSet = false;

    InvalidLoopBoundaryFlowValidationDetails m_invalidLoopBoundary;
    bool m_invalidLoopBoundaryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
