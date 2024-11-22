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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InlineAgentTracePart">AWS
   * API Reference</a></p>
   */
  class InlineAgentTracePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart();
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentTracePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the session with the agent.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InlineAgentTracePart& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InlineAgentTracePart& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InlineAgentTracePart& WithSessionId(const char* value) { SetSessionId(value); return *this;}
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
    inline const Trace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline InlineAgentTracePart& WithTrace(const Trace& value) { SetTrace(value); return *this;}
    inline InlineAgentTracePart& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
