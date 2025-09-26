/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/TracePart.h>
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
   * <p>Contains trace elements for flow execution tracking.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TraceElements">AWS
   * API Reference</a></p>
   */
  class TraceElements
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TraceElements() = default;
    AWS_BEDROCKAGENTRUNTIME_API TraceElements(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TraceElements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Agent trace information for the flow execution.</p>
     */
    inline const Aws::Vector<TracePart>& GetAgentTraces() const { return m_agentTraces; }
    inline bool AgentTracesHasBeenSet() const { return m_agentTracesHasBeenSet; }
    template<typename AgentTracesT = Aws::Vector<TracePart>>
    void SetAgentTraces(AgentTracesT&& value) { m_agentTracesHasBeenSet = true; m_agentTraces = std::forward<AgentTracesT>(value); }
    template<typename AgentTracesT = Aws::Vector<TracePart>>
    TraceElements& WithAgentTraces(AgentTracesT&& value) { SetAgentTraces(std::forward<AgentTracesT>(value)); return *this;}
    template<typename AgentTracesT = TracePart>
    TraceElements& AddAgentTraces(AgentTracesT&& value) { m_agentTracesHasBeenSet = true; m_agentTraces.emplace_back(std::forward<AgentTracesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TracePart> m_agentTraces;
    bool m_agentTracesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
