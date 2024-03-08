/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Trace.h>
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


    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline TracePart& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline TracePart& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline TracePart& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline TracePart& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline TracePart& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline TracePart& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline TracePart& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline TracePart& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline TracePart& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline const Trace& GetTrace() const{ return m_trace; }

    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }

    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }

    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }

    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline TracePart& WithTrace(const Trace& value) { SetTrace(value); return *this;}

    /**
     * <p>Contains one part of the agent's reasoning process and results from calling
     * API actions and querying knowledge bases. You can use the trace to understand
     * how the agent arrived at the response it provided the customer. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-enablement">Trace
     * enablement</a>.</p>
     */
    inline TracePart& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}

  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
