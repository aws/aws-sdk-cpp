/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeAgentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/BedrockModelConfigurations.h>
#include <aws/bedrock-agent-runtime/model/PromptCreationConfigurations.h>
#include <aws/bedrock-agent-runtime/model/SessionState.h>
#include <aws/bedrock-agent-runtime/model/StreamingConfigurations.h>
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
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeAgent"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeAgentHandler& GetEventStreamHandler() { return m_handler; }

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
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    InvokeAgentRequest& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent to use.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    InvokeAgentRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const BedrockModelConfigurations& GetBedrockModelConfigurations() const { return m_bedrockModelConfigurations; }
    inline bool BedrockModelConfigurationsHasBeenSet() const { return m_bedrockModelConfigurationsHasBeenSet; }
    template<typename BedrockModelConfigurationsT = BedrockModelConfigurations>
    void SetBedrockModelConfigurations(BedrockModelConfigurationsT&& value) { m_bedrockModelConfigurationsHasBeenSet = true; m_bedrockModelConfigurations = std::forward<BedrockModelConfigurationsT>(value); }
    template<typename BedrockModelConfigurationsT = BedrockModelConfigurations>
    InvokeAgentRequest& WithBedrockModelConfigurations(BedrockModelConfigurationsT&& value) { SetBedrockModelConfigurations(std::forward<BedrockModelConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on the trace or not to track the agent's reasoning
     * process. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-events">Trace
     * enablement</a>.</p>
     */
    inline bool GetEnableTrace() const { return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeAgentRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to end the session with the agent or not.</p>
     */
    inline bool GetEndSession() const { return m_endSession; }
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
    inline const Aws::String& GetInputText() const { return m_inputText; }
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }
    template<typename InputTextT = Aws::String>
    void SetInputText(InputTextT&& value) { m_inputTextHasBeenSet = true; m_inputText = std::forward<InputTextT>(value); }
    template<typename InputTextT = Aws::String>
    InvokeAgentRequest& WithInputText(InputTextT&& value) { SetInputText(std::forward<InputTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent memory.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    InvokeAgentRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies parameters that control how the service populates the agent prompt
     * for an <code>InvokeAgent</code> request. You can control which aspects of
     * previous invocations in the same agent session the service uses to populate the
     * agent prompt. This gives you more granular control over the contextual history
     * that is used to process the current request.</p>
     */
    inline const PromptCreationConfigurations& GetPromptCreationConfigurations() const { return m_promptCreationConfigurations; }
    inline bool PromptCreationConfigurationsHasBeenSet() const { return m_promptCreationConfigurationsHasBeenSet; }
    template<typename PromptCreationConfigurationsT = PromptCreationConfigurations>
    void SetPromptCreationConfigurations(PromptCreationConfigurationsT&& value) { m_promptCreationConfigurationsHasBeenSet = true; m_promptCreationConfigurations = std::forward<PromptCreationConfigurationsT>(value); }
    template<typename PromptCreationConfigurationsT = PromptCreationConfigurations>
    InvokeAgentRequest& WithPromptCreationConfigurations(PromptCreationConfigurationsT&& value) { SetPromptCreationConfigurations(std::forward<PromptCreationConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session. Use the same value across requests to
     * continue the same conversation.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InvokeAgentRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
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
    inline const SessionState& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = SessionState>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = SessionState>
    InvokeAgentRequest& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource making the request.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    InvokeAgentRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configurations for streaming. </p>  <p>To use agent
     * streaming, you need permissions to perform the
     * <code>bedrock:InvokeModelWithResponseStream</code> action.</p> 
     */
    inline const StreamingConfigurations& GetStreamingConfigurations() const { return m_streamingConfigurations; }
    inline bool StreamingConfigurationsHasBeenSet() const { return m_streamingConfigurationsHasBeenSet; }
    template<typename StreamingConfigurationsT = StreamingConfigurations>
    void SetStreamingConfigurations(StreamingConfigurationsT&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = std::forward<StreamingConfigurationsT>(value); }
    template<typename StreamingConfigurationsT = StreamingConfigurations>
    InvokeAgentRequest& WithStreamingConfigurations(StreamingConfigurationsT&& value) { SetStreamingConfigurations(std::forward<StreamingConfigurationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    BedrockModelConfigurations m_bedrockModelConfigurations;
    bool m_bedrockModelConfigurationsHasBeenSet = false;

    bool m_enableTrace{false};
    bool m_enableTraceHasBeenSet = false;

    bool m_endSession{false};
    bool m_endSessionHasBeenSet = false;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet = false;

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    PromptCreationConfigurations m_promptCreationConfigurations;
    bool m_promptCreationConfigurationsHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    StreamingConfigurations m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;
    InvokeAgentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
