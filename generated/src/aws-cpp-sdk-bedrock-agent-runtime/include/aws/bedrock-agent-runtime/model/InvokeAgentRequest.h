﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeAgentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/SessionState.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class InvokeAgentRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeAgent"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const InvokeAgentHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeAgentHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeAgentRequest& WithEventStreamHandler(const InvokeAgentHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The alias of the agent to use.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }
    inline InvokeAgentRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}
    inline InvokeAgentRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}
    inline InvokeAgentRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent to use.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline InvokeAgentRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline InvokeAgentRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline InvokeAgentRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on the trace or not to track the agent's reasoning
     * process. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-events">Trace
     * enablement</a>.</p>
     */
    inline bool GetEnableTrace() const{ return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeAgentRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to end the session with the agent or not.</p>
     */
    inline bool GetEndSession() const{ return m_endSession; }
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }
    inline void SetEndSession(bool value) { m_endSessionHasBeenSet = true; m_endSession = value; }
    inline InvokeAgentRequest& WithEndSession(bool value) { SetEndSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt text to send the agent.</p>  <p>If you include
     * <code>returnControlInvocationResults</code> in the <code>sessionState</code>
     * field, the <code>inputText</code> field will be ignored.</p> 
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }
    inline void SetInputText(const Aws::String& value) { m_inputTextHasBeenSet = true; m_inputText = value; }
    inline void SetInputText(Aws::String&& value) { m_inputTextHasBeenSet = true; m_inputText = std::move(value); }
    inline void SetInputText(const char* value) { m_inputTextHasBeenSet = true; m_inputText.assign(value); }
    inline InvokeAgentRequest& WithInputText(const Aws::String& value) { SetInputText(value); return *this;}
    inline InvokeAgentRequest& WithInputText(Aws::String&& value) { SetInputText(std::move(value)); return *this;}
    inline InvokeAgentRequest& WithInputText(const char* value) { SetInputText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session. Use the same value across requests to
     * continue the same conversation.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InvokeAgentRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InvokeAgentRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InvokeAgentRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains parameters that specify various attributes of the session. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
     * session context</a>.</p>  <p>If you include
     * <code>returnControlInvocationResults</code> in the <code>sessionState</code>
     * field, the <code>inputText</code> field will be ignored.</p> 
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }
    inline InvokeAgentRequest& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}
    inline InvokeAgentRequest& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    bool m_enableTrace;
    bool m_enableTraceHasBeenSet = false;

    bool m_endSession;
    bool m_endSessionHasBeenSet = false;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;
    InvokeAgentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
