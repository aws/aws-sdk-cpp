/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeAgentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/bedrock-agent-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>InvokeAgent Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvokeAgentRequest">AWS
   * API Reference</a></p>
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


    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline InvokeAgentRequest& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    /**
     * <p>Session state passed by customer. Base64 encoded json string representation
     * of SessionState.</p>
     */
    inline InvokeAgentRequest& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}


    /**
     * <p>Identifier for Agent</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>Identifier for Agent</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>Identifier for Agent</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>Identifier for Agent</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>Identifier for Agent</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>Identifier for Agent</p>
     */
    inline InvokeAgentRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>Identifier for Agent</p>
     */
    inline InvokeAgentRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>Identifier for Agent</p>
     */
    inline InvokeAgentRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline InvokeAgentRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline InvokeAgentRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>Identifier for Agent Alias</p>
     */
    inline InvokeAgentRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>Identifier used for the current session</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Identifier used for the current session</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Identifier used for the current session</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Identifier used for the current session</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Identifier used for the current session</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Identifier used for the current session</p>
     */
    inline InvokeAgentRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Identifier used for the current session</p>
     */
    inline InvokeAgentRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Identifier used for the current session</p>
     */
    inline InvokeAgentRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>End current session</p>
     */
    inline bool GetEndSession() const{ return m_endSession; }

    /**
     * <p>End current session</p>
     */
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }

    /**
     * <p>End current session</p>
     */
    inline void SetEndSession(bool value) { m_endSessionHasBeenSet = true; m_endSession = value; }

    /**
     * <p>End current session</p>
     */
    inline InvokeAgentRequest& WithEndSession(bool value) { SetEndSession(value); return *this;}


    /**
     * <p>Enable agent trace events for improved debugging</p>
     */
    inline bool GetEnableTrace() const{ return m_enableTrace; }

    /**
     * <p>Enable agent trace events for improved debugging</p>
     */
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }

    /**
     * <p>Enable agent trace events for improved debugging</p>
     */
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }

    /**
     * <p>Enable agent trace events for improved debugging</p>
     */
    inline InvokeAgentRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}


    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline void SetInputText(const Aws::String& value) { m_inputTextHasBeenSet = true; m_inputText = value; }

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline void SetInputText(Aws::String&& value) { m_inputTextHasBeenSet = true; m_inputText = std::move(value); }

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline void SetInputText(const char* value) { m_inputTextHasBeenSet = true; m_inputText.assign(value); }

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline InvokeAgentRequest& WithInputText(const Aws::String& value) { SetInputText(value); return *this;}

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline InvokeAgentRequest& WithInputText(Aws::String&& value) { SetInputText(std::move(value)); return *this;}

    /**
     * <p>Input data in the format specified in the Content-Type request header.</p>
     */
    inline InvokeAgentRequest& WithInputText(const char* value) { SetInputText(value); return *this;}

  private:

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    bool m_endSession;
    bool m_endSessionHasBeenSet = false;

    bool m_enableTrace;
    bool m_enableTraceHasBeenSet = false;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet = false;
    InvokeAgentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
