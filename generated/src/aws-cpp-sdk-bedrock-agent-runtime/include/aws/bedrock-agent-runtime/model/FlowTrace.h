/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceConditionNodeResultEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeActionEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputEvent.h>
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
   * <p>Contains information about an input or output for a node in the flow. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTrace">AWS
   * API Reference</a></p>
   */
  class FlowTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an output from a condition node.</p>
     */
    inline const FlowTraceConditionNodeResultEvent& GetConditionNodeResultTrace() const { return m_conditionNodeResultTrace; }
    inline bool ConditionNodeResultTraceHasBeenSet() const { return m_conditionNodeResultTraceHasBeenSet; }
    template<typename ConditionNodeResultTraceT = FlowTraceConditionNodeResultEvent>
    void SetConditionNodeResultTrace(ConditionNodeResultTraceT&& value) { m_conditionNodeResultTraceHasBeenSet = true; m_conditionNodeResultTrace = std::forward<ConditionNodeResultTraceT>(value); }
    template<typename ConditionNodeResultTraceT = FlowTraceConditionNodeResultEvent>
    FlowTrace& WithConditionNodeResultTrace(ConditionNodeResultTraceT&& value) { SetConditionNodeResultTrace(std::forward<ConditionNodeResultTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an action (operation) called by a node. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
     * each step in your prompt flow by viewing its trace in Amazon Bedrock</a>.</p>
     */
    inline const FlowTraceNodeActionEvent& GetNodeActionTrace() const { return m_nodeActionTrace; }
    inline bool NodeActionTraceHasBeenSet() const { return m_nodeActionTraceHasBeenSet; }
    template<typename NodeActionTraceT = FlowTraceNodeActionEvent>
    void SetNodeActionTrace(NodeActionTraceT&& value) { m_nodeActionTraceHasBeenSet = true; m_nodeActionTrace = std::forward<NodeActionTraceT>(value); }
    template<typename NodeActionTraceT = FlowTraceNodeActionEvent>
    FlowTrace& WithNodeActionTrace(NodeActionTraceT&& value) { SetNodeActionTrace(std::forward<NodeActionTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the input into a node.</p>
     */
    inline const FlowTraceNodeInputEvent& GetNodeInputTrace() const { return m_nodeInputTrace; }
    inline bool NodeInputTraceHasBeenSet() const { return m_nodeInputTraceHasBeenSet; }
    template<typename NodeInputTraceT = FlowTraceNodeInputEvent>
    void SetNodeInputTrace(NodeInputTraceT&& value) { m_nodeInputTraceHasBeenSet = true; m_nodeInputTrace = std::forward<NodeInputTraceT>(value); }
    template<typename NodeInputTraceT = FlowTraceNodeInputEvent>
    FlowTrace& WithNodeInputTrace(NodeInputTraceT&& value) { SetNodeInputTrace(std::forward<NodeInputTraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the output from a node.</p>
     */
    inline const FlowTraceNodeOutputEvent& GetNodeOutputTrace() const { return m_nodeOutputTrace; }
    inline bool NodeOutputTraceHasBeenSet() const { return m_nodeOutputTraceHasBeenSet; }
    template<typename NodeOutputTraceT = FlowTraceNodeOutputEvent>
    void SetNodeOutputTrace(NodeOutputTraceT&& value) { m_nodeOutputTraceHasBeenSet = true; m_nodeOutputTrace = std::forward<NodeOutputTraceT>(value); }
    template<typename NodeOutputTraceT = FlowTraceNodeOutputEvent>
    FlowTrace& WithNodeOutputTrace(NodeOutputTraceT&& value) { SetNodeOutputTrace(std::forward<NodeOutputTraceT>(value)); return *this;}
    ///@}
  private:

    FlowTraceConditionNodeResultEvent m_conditionNodeResultTrace;
    bool m_conditionNodeResultTraceHasBeenSet = false;

    FlowTraceNodeActionEvent m_nodeActionTrace;
    bool m_nodeActionTraceHasBeenSet = false;

    FlowTraceNodeInputEvent m_nodeInputTrace;
    bool m_nodeInputTraceHasBeenSet = false;

    FlowTraceNodeOutputEvent m_nodeOutputTrace;
    bool m_nodeOutputTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
