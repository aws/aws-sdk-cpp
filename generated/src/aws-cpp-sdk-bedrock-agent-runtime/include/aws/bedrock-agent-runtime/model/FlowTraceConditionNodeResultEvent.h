/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceCondition.h>
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
   * <p>Contains information about an output from a condition node. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceConditionNodeResultEvent">AWS
   * API Reference</a></p>
   */
  class FlowTraceConditionNodeResultEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the condition node.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    FlowTraceConditionNodeResultEvent& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trace was returned.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    FlowTraceConditionNodeResultEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects containing information about the conditions that were
     * satisfied.</p>
     */
    inline const Aws::Vector<FlowTraceCondition>& GetSatisfiedConditions() const { return m_satisfiedConditions; }
    inline bool SatisfiedConditionsHasBeenSet() const { return m_satisfiedConditionsHasBeenSet; }
    template<typename SatisfiedConditionsT = Aws::Vector<FlowTraceCondition>>
    void SetSatisfiedConditions(SatisfiedConditionsT&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions = std::forward<SatisfiedConditionsT>(value); }
    template<typename SatisfiedConditionsT = Aws::Vector<FlowTraceCondition>>
    FlowTraceConditionNodeResultEvent& WithSatisfiedConditions(SatisfiedConditionsT&& value) { SetSatisfiedConditions(std::forward<SatisfiedConditionsT>(value)); return *this;}
    template<typename SatisfiedConditionsT = FlowTraceCondition>
    FlowTraceConditionNodeResultEvent& AddSatisfiedConditions(SatisfiedConditionsT&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions.emplace_back(std::forward<SatisfiedConditionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::Vector<FlowTraceCondition> m_satisfiedConditions;
    bool m_satisfiedConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
