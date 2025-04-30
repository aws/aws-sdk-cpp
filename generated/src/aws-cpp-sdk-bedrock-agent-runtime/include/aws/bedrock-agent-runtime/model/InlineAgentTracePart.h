/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/Trace.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InlineAgentTracePart">AWS
   * API Reference</a></p>
   */
  class InlineAgentTracePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart() = default;
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The caller chain for the trace part.</p>
     */
    inline const Aws::Vector<Caller>& GetCallerChain() const { return m_callerChain; }
    inline bool CallerChainHasBeenSet() const { return m_callerChainHasBeenSet; }
    template<typename CallerChainT = Aws::Vector<Caller>>
    void SetCallerChain(CallerChainT&& value) { m_callerChainHasBeenSet = true; m_callerChain = std::forward<CallerChainT>(value); }
    template<typename CallerChainT = Aws::Vector<Caller>>
    InlineAgentTracePart& WithCallerChain(CallerChainT&& value) { SetCallerChain(std::forward<CallerChainT>(value)); return *this;}
    template<typename CallerChainT = Caller>
    InlineAgentTracePart& AddCallerChain(CallerChainT&& value) { m_callerChainHasBeenSet = true; m_callerChain.emplace_back(std::forward<CallerChainT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collaborator name for the trace part.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    InlineAgentTracePart& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that trace occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    InlineAgentTracePart& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InlineAgentTracePart& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>. </p>
     */
    inline const Trace& GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    template<typename TraceT = Trace>
    void SetTrace(TraceT&& value) { m_traceHasBeenSet = true; m_trace = std::forward<TraceT>(value); }
    template<typename TraceT = Trace>
    InlineAgentTracePart& WithTrace(TraceT&& value) { SetTrace(std::forward<TraceT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Caller> m_callerChain;
    bool m_callerChainHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
