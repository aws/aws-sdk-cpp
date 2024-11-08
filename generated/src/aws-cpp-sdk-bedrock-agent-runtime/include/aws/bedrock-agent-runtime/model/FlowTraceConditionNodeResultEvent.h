/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceConditionNodeResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the condition node.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowTraceConditionNodeResultEvent& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowTraceConditionNodeResultEvent& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowTraceConditionNodeResultEvent& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects containing information about the conditions that were
     * satisfied.</p>
     */
    inline const Aws::Vector<FlowTraceCondition>& GetSatisfiedConditions() const{ return m_satisfiedConditions; }
    inline bool SatisfiedConditionsHasBeenSet() const { return m_satisfiedConditionsHasBeenSet; }
    inline void SetSatisfiedConditions(const Aws::Vector<FlowTraceCondition>& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions = value; }
    inline void SetSatisfiedConditions(Aws::Vector<FlowTraceCondition>&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions = std::move(value); }
    inline FlowTraceConditionNodeResultEvent& WithSatisfiedConditions(const Aws::Vector<FlowTraceCondition>& value) { SetSatisfiedConditions(value); return *this;}
    inline FlowTraceConditionNodeResultEvent& WithSatisfiedConditions(Aws::Vector<FlowTraceCondition>&& value) { SetSatisfiedConditions(std::move(value)); return *this;}
    inline FlowTraceConditionNodeResultEvent& AddSatisfiedConditions(const FlowTraceCondition& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions.push_back(value); return *this; }
    inline FlowTraceConditionNodeResultEvent& AddSatisfiedConditions(FlowTraceCondition&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the trace was returned.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline FlowTraceConditionNodeResultEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline FlowTraceConditionNodeResultEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Vector<FlowTraceCondition> m_satisfiedConditions;
    bool m_satisfiedConditionsHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
