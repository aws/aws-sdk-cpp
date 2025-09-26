/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Trace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/Caller.h>
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
   * <p>Contains information about the agent and session, alongside the agent's
   * reasoning process and results from calling API actions and querying knowledge
   * bases and metadata about the trace. You can use the trace to understand how the
   * agent arrived at the response it provided the customer. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
   * enablement</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TracePart">AWS
   * API Reference</a></p>
   */
  class TracePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TracePart() = default;
    AWS_BEDROCKAGENTRUNTIME_API TracePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TracePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    TracePart& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline const Trace& GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    template<typename TraceT = Trace>
    void SetTrace(TraceT&& value) { m_traceHasBeenSet = true; m_trace = std::forward<TraceT>(value); }
    template<typename TraceT = Trace>
    TracePart& WithTrace(TraceT&& value) { SetTrace(std::forward<TraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part's caller chain.</p>
     */
    inline const Aws::Vector<Caller>& GetCallerChain() const { return m_callerChain; }
    inline bool CallerChainHasBeenSet() const { return m_callerChainHasBeenSet; }
    template<typename CallerChainT = Aws::Vector<Caller>>
    void SetCallerChain(CallerChainT&& value) { m_callerChainHasBeenSet = true; m_callerChain = std::forward<CallerChainT>(value); }
    template<typename CallerChainT = Aws::Vector<Caller>>
    TracePart& WithCallerChain(CallerChainT&& value) { SetCallerChain(std::forward<CallerChainT>(value)); return *this;}
    template<typename CallerChainT = Caller>
    TracePart& AddCallerChain(CallerChainT&& value) { m_callerChainHasBeenSet = true; m_callerChain.emplace_back(std::forward<CallerChainT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time of the trace. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    TracePart& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part's collaborator name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    TracePart& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    TracePart& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    TracePart& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    TracePart& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;

    Aws::Vector<Caller> m_callerChain;
    bool m_callerChainHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
