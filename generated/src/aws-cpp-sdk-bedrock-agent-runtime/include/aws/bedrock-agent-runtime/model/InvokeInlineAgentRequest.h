/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/InlineBedrockModelConfigurations.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfigurationWithArn.h>
#include <aws/bedrock-agent-runtime/model/InlineSessionState.h>
#include <aws/bedrock-agent-runtime/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent-runtime/model/StreamingConfigurations.h>
#include <aws/bedrock-agent-runtime/model/AgentActionGroup.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBase.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class InvokeInlineAgentRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeInlineAgent"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const InvokeInlineAgentHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeInlineAgentHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeInlineAgentRequest& WithEventStreamHandler(const InvokeInlineAgentHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p> A list of action groups with each action group defining the action the
     * inline agent needs to carry out. </p>
     */
    inline const Aws::Vector<AgentActionGroup>& GetActionGroups() const{ return m_actionGroups; }
    inline bool ActionGroupsHasBeenSet() const { return m_actionGroupsHasBeenSet; }
    inline void SetActionGroups(const Aws::Vector<AgentActionGroup>& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = value; }
    inline void SetActionGroups(Aws::Vector<AgentActionGroup>&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = std::move(value); }
    inline InvokeInlineAgentRequest& WithActionGroups(const Aws::Vector<AgentActionGroup>& value) { SetActionGroups(value); return *this;}
    inline InvokeInlineAgentRequest& WithActionGroups(Aws::Vector<AgentActionGroup>&& value) { SetActionGroups(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& AddActionGroups(const AgentActionGroup& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.push_back(value); return *this; }
    inline InvokeInlineAgentRequest& AddActionGroups(AgentActionGroup&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Model settings for the request.</p>
     */
    inline const InlineBedrockModelConfigurations& GetBedrockModelConfigurations() const{ return m_bedrockModelConfigurations; }
    inline bool BedrockModelConfigurationsHasBeenSet() const { return m_bedrockModelConfigurationsHasBeenSet; }
    inline void SetBedrockModelConfigurations(const InlineBedrockModelConfigurations& value) { m_bedrockModelConfigurationsHasBeenSet = true; m_bedrockModelConfigurations = value; }
    inline void SetBedrockModelConfigurations(InlineBedrockModelConfigurations&& value) { m_bedrockModelConfigurationsHasBeenSet = true; m_bedrockModelConfigurations = std::move(value); }
    inline InvokeInlineAgentRequest& WithBedrockModelConfigurations(const InlineBedrockModelConfigurations& value) { SetBedrockModelConfigurations(value); return *this;}
    inline InvokeInlineAgentRequest& WithBedrockModelConfigurations(InlineBedrockModelConfigurations&& value) { SetBedrockModelConfigurations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Web Services KMS key to use to
     * encrypt your inline agent. </p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }
    inline InvokeInlineAgentRequest& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline InvokeInlineAgentRequest& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to turn on the trace or not to track the agent's reasoning
     * process. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-events.html">Using
     * trace</a>. <pre><code> &lt;/p&gt; </code></pre>
     */
    inline bool GetEnableTrace() const{ return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeInlineAgentRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to end the session with the inline agent or not. </p>
     */
    inline bool GetEndSession() const{ return m_endSession; }
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }
    inline void SetEndSession(bool value) { m_endSessionHasBeenSet = true; m_endSession = value; }
    inline InvokeInlineAgentRequest& WithEndSession(bool value) { SetEndSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#model-ids-arns">model
     * identifier (ID)</a> of the model to use for orchestration by the inline agent.
     * For example, <code>meta.llama3-1-70b-instruct-v1:0</code>. </p>
     */
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }
    inline InvokeInlineAgentRequest& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}
    inline InvokeInlineAgentRequest& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails.html">guardrails</a>
     * to assign to the inline agent. </p>
     */
    inline const GuardrailConfigurationWithArn& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfigurationWithArn& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfigurationWithArn&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline InvokeInlineAgentRequest& WithGuardrailConfiguration(const GuardrailConfigurationWithArn& value) { SetGuardrailConfiguration(value); return *this;}
    inline InvokeInlineAgentRequest& WithGuardrailConfiguration(GuardrailConfigurationWithArn&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of seconds for which the inline agent should maintain session
     * information. After this time expires, the subsequent
     * <code>InvokeInlineAgent</code> request begins a new session. </p> <p>A user
     * interaction remains active for the amount of time specified. If no conversation
     * occurs during this time, the session expires and the data provided before the
     * timeout is deleted.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline InvokeInlineAgentRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameters that specify the various attributes of a sessions. You can
     * include attributes for the session or prompt or, if you configured an action
     * group to return control, results from invocation of the action group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
     * session context</a>. </p>  <p>If you include
     * <code>returnControlInvocationResults</code> in the <code>sessionState</code>
     * field, the <code>inputText</code> field will be ignored.</p> 
     */
    inline const InlineSessionState& GetInlineSessionState() const{ return m_inlineSessionState; }
    inline bool InlineSessionStateHasBeenSet() const { return m_inlineSessionStateHasBeenSet; }
    inline void SetInlineSessionState(const InlineSessionState& value) { m_inlineSessionStateHasBeenSet = true; m_inlineSessionState = value; }
    inline void SetInlineSessionState(InlineSessionState&& value) { m_inlineSessionStateHasBeenSet = true; m_inlineSessionState = std::move(value); }
    inline InvokeInlineAgentRequest& WithInlineSessionState(const InlineSessionState& value) { SetInlineSessionState(value); return *this;}
    inline InvokeInlineAgentRequest& WithInlineSessionState(InlineSessionState&& value) { SetInlineSessionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prompt text to send to the agent. </p>  <p>If you include
     * <code>returnControlInvocationResults</code> in the <code>sessionState</code>
     * field, the <code>inputText</code> field will be ignored.</p> 
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }
    inline void SetInputText(const Aws::String& value) { m_inputTextHasBeenSet = true; m_inputText = value; }
    inline void SetInputText(Aws::String&& value) { m_inputTextHasBeenSet = true; m_inputText = std::move(value); }
    inline void SetInputText(const char* value) { m_inputTextHasBeenSet = true; m_inputText.assign(value); }
    inline InvokeInlineAgentRequest& WithInputText(const Aws::String& value) { SetInputText(value); return *this;}
    inline InvokeInlineAgentRequest& WithInputText(Aws::String&& value) { SetInputText(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& WithInputText(const char* value) { SetInputText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instructions that tell the inline agent what it should do and how it
     * should interact with users. </p>
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }
    inline InvokeInlineAgentRequest& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}
    inline InvokeInlineAgentRequest& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& WithInstruction(const char* value) { SetInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information of the knowledge bases to associate with. </p>
     */
    inline const Aws::Vector<KnowledgeBase>& GetKnowledgeBases() const{ return m_knowledgeBases; }
    inline bool KnowledgeBasesHasBeenSet() const { return m_knowledgeBasesHasBeenSet; }
    inline void SetKnowledgeBases(const Aws::Vector<KnowledgeBase>& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = value; }
    inline void SetKnowledgeBases(Aws::Vector<KnowledgeBase>&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = std::move(value); }
    inline InvokeInlineAgentRequest& WithKnowledgeBases(const Aws::Vector<KnowledgeBase>& value) { SetKnowledgeBases(value); return *this;}
    inline InvokeInlineAgentRequest& WithKnowledgeBases(Aws::Vector<KnowledgeBase>&& value) { SetKnowledgeBases(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& AddKnowledgeBases(const KnowledgeBase& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.push_back(value); return *this; }
    inline InvokeInlineAgentRequest& AddKnowledgeBases(KnowledgeBase&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Configurations for advanced prompts used to override the default prompts to
     * enhance the accuracy of the inline agent. </p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }
    inline InvokeInlineAgentRequest& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}
    inline InvokeInlineAgentRequest& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the session. Use the same value across requests to
     * continue the same conversation. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InvokeInlineAgentRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InvokeInlineAgentRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InvokeInlineAgentRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configurations for streaming. </p>  <p>To use agent
     * streaming, you need permissions to perform the
     * <code>bedrock:InvokeModelWithResponseStream</code> action.</p> 
     */
    inline const StreamingConfigurations& GetStreamingConfigurations() const{ return m_streamingConfigurations; }
    inline bool StreamingConfigurationsHasBeenSet() const { return m_streamingConfigurationsHasBeenSet; }
    inline void SetStreamingConfigurations(const StreamingConfigurations& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = value; }
    inline void SetStreamingConfigurations(StreamingConfigurations&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = std::move(value); }
    inline InvokeInlineAgentRequest& WithStreamingConfigurations(const StreamingConfigurations& value) { SetStreamingConfigurations(value); return *this;}
    inline InvokeInlineAgentRequest& WithStreamingConfigurations(StreamingConfigurations&& value) { SetStreamingConfigurations(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentActionGroup> m_actionGroups;
    bool m_actionGroupsHasBeenSet = false;

    InlineBedrockModelConfigurations m_bedrockModelConfigurations;
    bool m_bedrockModelConfigurationsHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    bool m_enableTrace;
    bool m_enableTraceHasBeenSet = false;

    bool m_endSession;
    bool m_endSessionHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    GuardrailConfigurationWithArn m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    InlineSessionState m_inlineSessionState;
    bool m_inlineSessionStateHasBeenSet = false;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    Aws::Vector<KnowledgeBase> m_knowledgeBases;
    bool m_knowledgeBasesHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    StreamingConfigurations m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;
    InvokeInlineAgentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
