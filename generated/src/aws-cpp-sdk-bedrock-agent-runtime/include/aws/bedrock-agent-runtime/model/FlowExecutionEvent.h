/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ConditionResultEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowFailureEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionInputEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionOutputEvent.h>
#include <aws/bedrock-agent-runtime/model/NodeFailureEvent.h>
#include <aws/bedrock-agent-runtime/model/NodeInputEvent.h>
#include <aws/bedrock-agent-runtime/model/NodeOutputEvent.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Represents an event that occurred during an flow execution. This is a union
   * type that can contain one of several event types, such as node input and output
   * events; flow input and output events; condition node result events, or failure
   * events.</p>  <p>Flow executions is in preview release for Amazon Bedrock
   * and is subject to change.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowExecutionEvent">AWS
   * API Reference</a></p>
   */
  class FlowExecutionEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowExecutionEvent() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowExecutionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowExecutionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about a condition evaluation result during the flow
     * execution. This event is generated when a condition node in the flow evaluates
     * its conditions.</p>
     */
    inline const ConditionResultEvent& GetConditionResultEvent() const { return m_conditionResultEvent; }
    inline bool ConditionResultEventHasBeenSet() const { return m_conditionResultEventHasBeenSet; }
    template<typename ConditionResultEventT = ConditionResultEvent>
    void SetConditionResultEvent(ConditionResultEventT&& value) { m_conditionResultEventHasBeenSet = true; m_conditionResultEvent = std::forward<ConditionResultEventT>(value); }
    template<typename ConditionResultEventT = ConditionResultEvent>
    FlowExecutionEvent& WithConditionResultEvent(ConditionResultEventT&& value) { SetConditionResultEvent(std::forward<ConditionResultEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a failure that occurred at the flow level during
     * execution.</p>
     */
    inline const FlowFailureEvent& GetFlowFailureEvent() const { return m_flowFailureEvent; }
    inline bool FlowFailureEventHasBeenSet() const { return m_flowFailureEventHasBeenSet; }
    template<typename FlowFailureEventT = FlowFailureEvent>
    void SetFlowFailureEvent(FlowFailureEventT&& value) { m_flowFailureEventHasBeenSet = true; m_flowFailureEvent = std::forward<FlowFailureEventT>(value); }
    template<typename FlowFailureEventT = FlowFailureEvent>
    FlowExecutionEvent& WithFlowFailureEvent(FlowFailureEventT&& value) { SetFlowFailureEvent(std::forward<FlowFailureEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the inputs provided to the flow at the start of
     * execution.</p>
     */
    inline const FlowExecutionInputEvent& GetFlowInputEvent() const { return m_flowInputEvent; }
    inline bool FlowInputEventHasBeenSet() const { return m_flowInputEventHasBeenSet; }
    template<typename FlowInputEventT = FlowExecutionInputEvent>
    void SetFlowInputEvent(FlowInputEventT&& value) { m_flowInputEventHasBeenSet = true; m_flowInputEvent = std::forward<FlowInputEventT>(value); }
    template<typename FlowInputEventT = FlowExecutionInputEvent>
    FlowExecutionEvent& WithFlowInputEvent(FlowInputEventT&& value) { SetFlowInputEvent(std::forward<FlowInputEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the outputs produced by the flow at the end of
     * execution.</p>
     */
    inline const FlowExecutionOutputEvent& GetFlowOutputEvent() const { return m_flowOutputEvent; }
    inline bool FlowOutputEventHasBeenSet() const { return m_flowOutputEventHasBeenSet; }
    template<typename FlowOutputEventT = FlowExecutionOutputEvent>
    void SetFlowOutputEvent(FlowOutputEventT&& value) { m_flowOutputEventHasBeenSet = true; m_flowOutputEvent = std::forward<FlowOutputEventT>(value); }
    template<typename FlowOutputEventT = FlowExecutionOutputEvent>
    FlowExecutionEvent& WithFlowOutputEvent(FlowOutputEventT&& value) { SetFlowOutputEvent(std::forward<FlowOutputEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a failure that occurred at a specific node during
     * execution.</p>
     */
    inline const NodeFailureEvent& GetNodeFailureEvent() const { return m_nodeFailureEvent; }
    inline bool NodeFailureEventHasBeenSet() const { return m_nodeFailureEventHasBeenSet; }
    template<typename NodeFailureEventT = NodeFailureEvent>
    void SetNodeFailureEvent(NodeFailureEventT&& value) { m_nodeFailureEventHasBeenSet = true; m_nodeFailureEvent = std::forward<NodeFailureEventT>(value); }
    template<typename NodeFailureEventT = NodeFailureEvent>
    FlowExecutionEvent& WithNodeFailureEvent(NodeFailureEventT&& value) { SetNodeFailureEvent(std::forward<NodeFailureEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the inputs provided to a specific node during
     * execution.</p>
     */
    inline const NodeInputEvent& GetNodeInputEvent() const { return m_nodeInputEvent; }
    inline bool NodeInputEventHasBeenSet() const { return m_nodeInputEventHasBeenSet; }
    template<typename NodeInputEventT = NodeInputEvent>
    void SetNodeInputEvent(NodeInputEventT&& value) { m_nodeInputEventHasBeenSet = true; m_nodeInputEvent = std::forward<NodeInputEventT>(value); }
    template<typename NodeInputEventT = NodeInputEvent>
    FlowExecutionEvent& WithNodeInputEvent(NodeInputEventT&& value) { SetNodeInputEvent(std::forward<NodeInputEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the outputs produced by a specific node during
     * execution.</p>
     */
    inline const NodeOutputEvent& GetNodeOutputEvent() const { return m_nodeOutputEvent; }
    inline bool NodeOutputEventHasBeenSet() const { return m_nodeOutputEventHasBeenSet; }
    template<typename NodeOutputEventT = NodeOutputEvent>
    void SetNodeOutputEvent(NodeOutputEventT&& value) { m_nodeOutputEventHasBeenSet = true; m_nodeOutputEvent = std::forward<NodeOutputEventT>(value); }
    template<typename NodeOutputEventT = NodeOutputEvent>
    FlowExecutionEvent& WithNodeOutputEvent(NodeOutputEventT&& value) { SetNodeOutputEvent(std::forward<NodeOutputEventT>(value)); return *this;}
    ///@}
  private:

    ConditionResultEvent m_conditionResultEvent;
    bool m_conditionResultEventHasBeenSet = false;

    FlowFailureEvent m_flowFailureEvent;
    bool m_flowFailureEventHasBeenSet = false;

    FlowExecutionInputEvent m_flowInputEvent;
    bool m_flowInputEventHasBeenSet = false;

    FlowExecutionOutputEvent m_flowOutputEvent;
    bool m_flowOutputEventHasBeenSet = false;

    NodeFailureEvent m_nodeFailureEvent;
    bool m_nodeFailureEventHasBeenSet = false;

    NodeInputEvent m_nodeInputEvent;
    bool m_nodeInputEventHasBeenSet = false;

    NodeOutputEvent m_nodeOutputEvent;
    bool m_nodeOutputEventHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
