/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceConditionNodeResultEvent.h>
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
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace();
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an output from a condition node.</p>
     */
    inline const FlowTraceConditionNodeResultEvent& GetConditionNodeResultTrace() const{ return m_conditionNodeResultTrace; }
    inline bool ConditionNodeResultTraceHasBeenSet() const { return m_conditionNodeResultTraceHasBeenSet; }
    inline void SetConditionNodeResultTrace(const FlowTraceConditionNodeResultEvent& value) { m_conditionNodeResultTraceHasBeenSet = true; m_conditionNodeResultTrace = value; }
    inline void SetConditionNodeResultTrace(FlowTraceConditionNodeResultEvent&& value) { m_conditionNodeResultTraceHasBeenSet = true; m_conditionNodeResultTrace = std::move(value); }
    inline FlowTrace& WithConditionNodeResultTrace(const FlowTraceConditionNodeResultEvent& value) { SetConditionNodeResultTrace(value); return *this;}
    inline FlowTrace& WithConditionNodeResultTrace(FlowTraceConditionNodeResultEvent&& value) { SetConditionNodeResultTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the input into a node.</p>
     */
    inline const FlowTraceNodeInputEvent& GetNodeInputTrace() const{ return m_nodeInputTrace; }
    inline bool NodeInputTraceHasBeenSet() const { return m_nodeInputTraceHasBeenSet; }
    inline void SetNodeInputTrace(const FlowTraceNodeInputEvent& value) { m_nodeInputTraceHasBeenSet = true; m_nodeInputTrace = value; }
    inline void SetNodeInputTrace(FlowTraceNodeInputEvent&& value) { m_nodeInputTraceHasBeenSet = true; m_nodeInputTrace = std::move(value); }
    inline FlowTrace& WithNodeInputTrace(const FlowTraceNodeInputEvent& value) { SetNodeInputTrace(value); return *this;}
    inline FlowTrace& WithNodeInputTrace(FlowTraceNodeInputEvent&& value) { SetNodeInputTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the output from a node.</p>
     */
    inline const FlowTraceNodeOutputEvent& GetNodeOutputTrace() const{ return m_nodeOutputTrace; }
    inline bool NodeOutputTraceHasBeenSet() const { return m_nodeOutputTraceHasBeenSet; }
    inline void SetNodeOutputTrace(const FlowTraceNodeOutputEvent& value) { m_nodeOutputTraceHasBeenSet = true; m_nodeOutputTrace = value; }
    inline void SetNodeOutputTrace(FlowTraceNodeOutputEvent&& value) { m_nodeOutputTraceHasBeenSet = true; m_nodeOutputTrace = std::move(value); }
    inline FlowTrace& WithNodeOutputTrace(const FlowTraceNodeOutputEvent& value) { SetNodeOutputTrace(value); return *this;}
    inline FlowTrace& WithNodeOutputTrace(FlowTraceNodeOutputEvent&& value) { SetNodeOutputTrace(std::move(value)); return *this;}
    ///@}
  private:

    FlowTraceConditionNodeResultEvent m_conditionNodeResultTrace;
    bool m_conditionNodeResultTraceHasBeenSet = false;

    FlowTraceNodeInputEvent m_nodeInputTrace;
    bool m_nodeInputTraceHasBeenSet = false;

    FlowTraceNodeOutputEvent m_nodeOutputTrace;
    bool m_nodeOutputTraceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
