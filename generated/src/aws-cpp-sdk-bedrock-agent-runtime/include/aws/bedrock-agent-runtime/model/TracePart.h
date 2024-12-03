/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TracePart">AWS
   * API Reference</a></p>
   */
  class TracePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TracePart();
    AWS_BEDROCKAGENTRUNTIME_API TracePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TracePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }
    inline TracePart& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}
    inline TracePart& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}
    inline TracePart& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline TracePart& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline TracePart& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline TracePart& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline TracePart& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline TracePart& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline TracePart& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part's caller chain.</p>
     */
    inline const Aws::Vector<Caller>& GetCallerChain() const{ return m_callerChain; }
    inline bool CallerChainHasBeenSet() const { return m_callerChainHasBeenSet; }
    inline void SetCallerChain(const Aws::Vector<Caller>& value) { m_callerChainHasBeenSet = true; m_callerChain = value; }
    inline void SetCallerChain(Aws::Vector<Caller>&& value) { m_callerChainHasBeenSet = true; m_callerChain = std::move(value); }
    inline TracePart& WithCallerChain(const Aws::Vector<Caller>& value) { SetCallerChain(value); return *this;}
    inline TracePart& WithCallerChain(Aws::Vector<Caller>&& value) { SetCallerChain(std::move(value)); return *this;}
    inline TracePart& AddCallerChain(const Caller& value) { m_callerChainHasBeenSet = true; m_callerChain.push_back(value); return *this; }
    inline TracePart& AddCallerChain(Caller&& value) { m_callerChainHasBeenSet = true; m_callerChain.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The part's collaborator name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const{ return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    inline void SetCollaboratorName(const Aws::String& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = value; }
    inline void SetCollaboratorName(Aws::String&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::move(value); }
    inline void SetCollaboratorName(const char* value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName.assign(value); }
    inline TracePart& WithCollaboratorName(const Aws::String& value) { SetCollaboratorName(value); return *this;}
    inline TracePart& WithCollaboratorName(Aws::String&& value) { SetCollaboratorName(std::move(value)); return *this;}
    inline TracePart& WithCollaboratorName(const char* value) { SetCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline TracePart& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline TracePart& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline TracePart& WithSessionId(const char* value) { SetSessionId(value); return *this;}
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
    inline const Trace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline TracePart& WithTrace(const Trace& value) { SetTrace(value); return *this;}
    inline TracePart& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::Vector<Caller> m_callerChain;
    bool m_callerChainHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
