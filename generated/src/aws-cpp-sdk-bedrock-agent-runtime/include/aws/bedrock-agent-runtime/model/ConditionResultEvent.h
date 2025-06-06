/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/SatisfiedCondition.h>
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
   * <p>Contains information about a condition evaluation result during a flow
   * execution. This event is generated when a condition node in the flow evaluates
   * its conditions.</p>  <p>Flow executions is in preview release for Amazon
   * Bedrock and is subject to change.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ConditionResultEvent">AWS
   * API Reference</a></p>
   */
  class ConditionResultEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ConditionResultEvent() = default;
    AWS_BEDROCKAGENTRUNTIME_API ConditionResultEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ConditionResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the condition node that evaluated the conditions.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    ConditionResultEvent& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions that were satisfied during the evaluation.</p>
     */
    inline const Aws::Vector<SatisfiedCondition>& GetSatisfiedConditions() const { return m_satisfiedConditions; }
    inline bool SatisfiedConditionsHasBeenSet() const { return m_satisfiedConditionsHasBeenSet; }
    template<typename SatisfiedConditionsT = Aws::Vector<SatisfiedCondition>>
    void SetSatisfiedConditions(SatisfiedConditionsT&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions = std::forward<SatisfiedConditionsT>(value); }
    template<typename SatisfiedConditionsT = Aws::Vector<SatisfiedCondition>>
    ConditionResultEvent& WithSatisfiedConditions(SatisfiedConditionsT&& value) { SetSatisfiedConditions(std::forward<SatisfiedConditionsT>(value)); return *this;}
    template<typename SatisfiedConditionsT = SatisfiedCondition>
    ConditionResultEvent& AddSatisfiedConditions(SatisfiedConditionsT&& value) { m_satisfiedConditionsHasBeenSet = true; m_satisfiedConditions.emplace_back(std::forward<SatisfiedConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the condition evaluation occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ConditionResultEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Vector<SatisfiedCondition> m_satisfiedConditions;
    bool m_satisfiedConditionsHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
