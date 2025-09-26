/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfigurationWithArn.h>
#include <aws/bedrock-agent-runtime/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboration.h>
#include <aws/bedrock-agent-runtime/model/StreamingConfigurations.h>
#include <aws/bedrock-agent-runtime/model/PromptCreationConfigurations.h>
#include <aws/bedrock-agent-runtime/model/InlineSessionState.h>
#include <aws/bedrock-agent-runtime/model/InlineBedrockModelConfigurations.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationType.h>
#include <aws/bedrock-agent-runtime/model/CustomOrchestration.h>
#include <aws/bedrock-agent-runtime/model/AgentActionGroup.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBase.h>
#include <aws/bedrock-agent-runtime/model/CollaboratorConfiguration.h>
#include <aws/bedrock-agent-runtime/model/Collaborator.h>
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
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentRequest() = default;

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
    inline InvokeInlineAgentHandler& GetEventStreamHandler() { return m_handler; }

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
     * <p> The Amazon Resource Name (ARN) of the Amazon Web Services KMS key to use to
     * encrypt your inline agent. </p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    InvokeInlineAgentRequest& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#model-ids-arns">model
     * identifier (ID)</a> of the model to use for orchestration by the inline agent.
     * For example, <code>meta.llama3-1-70b-instruct-v1:0</code>. </p>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    InvokeInlineAgentRequest& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instructions that tell the inline agent what it should do and how it
     * should interact with users. </p>
     */
    inline const Aws::String& GetInstruction() const { return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    template<typename InstructionT = Aws::String>
    void SetInstruction(InstructionT&& value) { m_instructionHasBeenSet = true; m_instruction = std::forward<InstructionT>(value); }
    template<typename InstructionT = Aws::String>
    InvokeInlineAgentRequest& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
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
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline InvokeInlineAgentRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of action groups with each action group defining the action the
     * inline agent needs to carry out. </p>
     */
    inline const Aws::Vector<AgentActionGroup>& GetActionGroups() const { return m_actionGroups; }
    inline bool ActionGroupsHasBeenSet() const { return m_actionGroupsHasBeenSet; }
    template<typename ActionGroupsT = Aws::Vector<AgentActionGroup>>
    void SetActionGroups(ActionGroupsT&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = std::forward<ActionGroupsT>(value); }
    template<typename ActionGroupsT = Aws::Vector<AgentActionGroup>>
    InvokeInlineAgentRequest& WithActionGroups(ActionGroupsT&& value) { SetActionGroups(std::forward<ActionGroupsT>(value)); return *this;}
    template<typename ActionGroupsT = AgentActionGroup>
    InvokeInlineAgentRequest& AddActionGroups(ActionGroupsT&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.emplace_back(std::forward<ActionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information of the knowledge bases to associate with. </p>
     */
    inline const Aws::Vector<KnowledgeBase>& GetKnowledgeBases() const { return m_knowledgeBases; }
    inline bool KnowledgeBasesHasBeenSet() const { return m_knowledgeBasesHasBeenSet; }
    template<typename KnowledgeBasesT = Aws::Vector<KnowledgeBase>>
    void SetKnowledgeBases(KnowledgeBasesT&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = std::forward<KnowledgeBasesT>(value); }
    template<typename KnowledgeBasesT = Aws::Vector<KnowledgeBase>>
    InvokeInlineAgentRequest& WithKnowledgeBases(KnowledgeBasesT&& value) { SetKnowledgeBases(std::forward<KnowledgeBasesT>(value)); return *this;}
    template<typename KnowledgeBasesT = KnowledgeBase>
    InvokeInlineAgentRequest& AddKnowledgeBases(KnowledgeBasesT&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.emplace_back(std::forward<KnowledgeBasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails.html">guardrails</a>
     * to assign to the inline agent. </p>
     */
    inline const GuardrailConfigurationWithArn& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfigurationWithArn>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfigurationWithArn>
    InvokeInlineAgentRequest& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configurations for advanced prompts used to override the default prompts to
     * enhance the accuracy of the inline agent. </p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const { return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    void SetPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::forward<PromptOverrideConfigurationT>(value); }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    InvokeInlineAgentRequest& WithPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { SetPromptOverrideConfiguration(std::forward<PromptOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines how the inline collaborator agent handles information across
     * multiple collaborator agents to coordinate a final response. The inline
     * collaborator agent can also be the supervisor. </p>
     */
    inline AgentCollaboration GetAgentCollaboration() const { return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(AgentCollaboration value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline InvokeInlineAgentRequest& WithAgentCollaboration(AgentCollaboration value) { SetAgentCollaboration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Settings for an inline agent collaborator called with <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeInlineAgent.html">InvokeInlineAgent</a>.
     * </p>
     */
    inline const Aws::Vector<CollaboratorConfiguration>& GetCollaboratorConfigurations() const { return m_collaboratorConfigurations; }
    inline bool CollaboratorConfigurationsHasBeenSet() const { return m_collaboratorConfigurationsHasBeenSet; }
    template<typename CollaboratorConfigurationsT = Aws::Vector<CollaboratorConfiguration>>
    void SetCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations = std::forward<CollaboratorConfigurationsT>(value); }
    template<typename CollaboratorConfigurationsT = Aws::Vector<CollaboratorConfiguration>>
    InvokeInlineAgentRequest& WithCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { SetCollaboratorConfigurations(std::forward<CollaboratorConfigurationsT>(value)); return *this;}
    template<typename CollaboratorConfigurationsT = CollaboratorConfiguration>
    InvokeInlineAgentRequest& AddCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations.emplace_back(std::forward<CollaboratorConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the agent.</p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    InvokeInlineAgentRequest& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the session. Use the same value across requests to
     * continue the same conversation. </p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InvokeInlineAgentRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to end the session with the inline agent or not. </p>
     */
    inline bool GetEndSession() const { return m_endSession; }
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }
    inline void SetEndSession(bool value) { m_endSessionHasBeenSet = true; m_endSession = value; }
    inline InvokeInlineAgentRequest& WithEndSession(bool value) { SetEndSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to turn on the trace or not to track the agent's reasoning
     * process. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-events.html">Using
     * trace</a>. </p>
     */
    inline bool GetEnableTrace() const { return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeInlineAgentRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prompt text to send to the agent. </p>  <p>If you include
     * <code>returnControlInvocationResults</code> in the <code>sessionState</code>
     * field, the <code>inputText</code> field will be ignored.</p> 
     */
    inline const Aws::String& GetInputText() const { return m_inputText; }
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }
    template<typename InputTextT = Aws::String>
    void SetInputText(InputTextT&& value) { m_inputTextHasBeenSet = true; m_inputText = std::forward<InputTextT>(value); }
    template<typename InputTextT = Aws::String>
    InvokeInlineAgentRequest& WithInputText(InputTextT&& value) { SetInputText(std::forward<InputTextT>(value)); return *this;}
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
    InvokeInlineAgentRequest& WithStreamingConfigurations(StreamingConfigurationsT&& value) { SetStreamingConfigurations(std::forward<StreamingConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies parameters that control how the service populates the agent prompt
     * for an <code>InvokeInlineAgent</code> request. You can control which aspects of
     * previous invocations in the same agent session the service uses to populate the
     * agent prompt. This gives you more granular control over the contextual history
     * that is used to process the current request.</p>
     */
    inline const PromptCreationConfigurations& GetPromptCreationConfigurations() const { return m_promptCreationConfigurations; }
    inline bool PromptCreationConfigurationsHasBeenSet() const { return m_promptCreationConfigurationsHasBeenSet; }
    template<typename PromptCreationConfigurationsT = PromptCreationConfigurations>
    void SetPromptCreationConfigurations(PromptCreationConfigurationsT&& value) { m_promptCreationConfigurationsHasBeenSet = true; m_promptCreationConfigurations = std::forward<PromptCreationConfigurationsT>(value); }
    template<typename PromptCreationConfigurationsT = PromptCreationConfigurations>
    InvokeInlineAgentRequest& WithPromptCreationConfigurations(PromptCreationConfigurationsT&& value) { SetPromptCreationConfigurations(std::forward<PromptCreationConfigurationsT>(value)); return *this;}
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
    inline const InlineSessionState& GetInlineSessionState() const { return m_inlineSessionState; }
    inline bool InlineSessionStateHasBeenSet() const { return m_inlineSessionStateHasBeenSet; }
    template<typename InlineSessionStateT = InlineSessionState>
    void SetInlineSessionState(InlineSessionStateT&& value) { m_inlineSessionStateHasBeenSet = true; m_inlineSessionState = std::forward<InlineSessionStateT>(value); }
    template<typename InlineSessionStateT = InlineSessionState>
    InvokeInlineAgentRequest& WithInlineSessionState(InlineSessionStateT&& value) { SetInlineSessionState(std::forward<InlineSessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of collaborator inline agents. </p>
     */
    inline const Aws::Vector<Collaborator>& GetCollaborators() const { return m_collaborators; }
    inline bool CollaboratorsHasBeenSet() const { return m_collaboratorsHasBeenSet; }
    template<typename CollaboratorsT = Aws::Vector<Collaborator>>
    void SetCollaborators(CollaboratorsT&& value) { m_collaboratorsHasBeenSet = true; m_collaborators = std::forward<CollaboratorsT>(value); }
    template<typename CollaboratorsT = Aws::Vector<Collaborator>>
    InvokeInlineAgentRequest& WithCollaborators(CollaboratorsT&& value) { SetCollaborators(std::forward<CollaboratorsT>(value)); return *this;}
    template<typename CollaboratorsT = Collaborator>
    InvokeInlineAgentRequest& AddCollaborators(CollaboratorsT&& value) { m_collaboratorsHasBeenSet = true; m_collaborators.emplace_back(std::forward<CollaboratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Model settings for the request.</p>
     */
    inline const InlineBedrockModelConfigurations& GetBedrockModelConfigurations() const { return m_bedrockModelConfigurations; }
    inline bool BedrockModelConfigurationsHasBeenSet() const { return m_bedrockModelConfigurationsHasBeenSet; }
    template<typename BedrockModelConfigurationsT = InlineBedrockModelConfigurations>
    void SetBedrockModelConfigurations(BedrockModelConfigurationsT&& value) { m_bedrockModelConfigurationsHasBeenSet = true; m_bedrockModelConfigurations = std::forward<BedrockModelConfigurationsT>(value); }
    template<typename BedrockModelConfigurationsT = InlineBedrockModelConfigurations>
    InvokeInlineAgentRequest& WithBedrockModelConfigurations(BedrockModelConfigurationsT&& value) { SetBedrockModelConfigurations(std::forward<BedrockModelConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of orchestration strategy for the agent. This is set to
     * DEFAULT orchestration type, by default. </p>
     */
    inline OrchestrationType GetOrchestrationType() const { return m_orchestrationType; }
    inline bool OrchestrationTypeHasBeenSet() const { return m_orchestrationTypeHasBeenSet; }
    inline void SetOrchestrationType(OrchestrationType value) { m_orchestrationTypeHasBeenSet = true; m_orchestrationType = value; }
    inline InvokeInlineAgentRequest& WithOrchestrationType(OrchestrationType value) { SetOrchestrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the custom orchestration configured for the agent. </p>
     */
    inline const CustomOrchestration& GetCustomOrchestration() const { return m_customOrchestration; }
    inline bool CustomOrchestrationHasBeenSet() const { return m_customOrchestrationHasBeenSet; }
    template<typename CustomOrchestrationT = CustomOrchestration>
    void SetCustomOrchestration(CustomOrchestrationT&& value) { m_customOrchestrationHasBeenSet = true; m_customOrchestration = std::forward<CustomOrchestrationT>(value); }
    template<typename CustomOrchestrationT = CustomOrchestration>
    InvokeInlineAgentRequest& WithCustomOrchestration(CustomOrchestrationT&& value) { SetCustomOrchestration(std::forward<CustomOrchestrationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::Vector<AgentActionGroup> m_actionGroups;
    bool m_actionGroupsHasBeenSet = false;

    Aws::Vector<KnowledgeBase> m_knowledgeBases;
    bool m_knowledgeBasesHasBeenSet = false;

    GuardrailConfigurationWithArn m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    AgentCollaboration m_agentCollaboration{AgentCollaboration::NOT_SET};
    bool m_agentCollaborationHasBeenSet = false;

    Aws::Vector<CollaboratorConfiguration> m_collaboratorConfigurations;
    bool m_collaboratorConfigurationsHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    bool m_endSession{false};
    bool m_endSessionHasBeenSet = false;

    bool m_enableTrace{false};
    bool m_enableTraceHasBeenSet = false;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet = false;

    StreamingConfigurations m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;

    PromptCreationConfigurations m_promptCreationConfigurations;
    bool m_promptCreationConfigurationsHasBeenSet = false;

    InlineSessionState m_inlineSessionState;
    bool m_inlineSessionStateHasBeenSet = false;

    Aws::Vector<Collaborator> m_collaborators;
    bool m_collaboratorsHasBeenSet = false;

    InlineBedrockModelConfigurations m_bedrockModelConfigurations;
    bool m_bedrockModelConfigurationsHasBeenSet = false;

    OrchestrationType m_orchestrationType{OrchestrationType::NOT_SET};
    bool m_orchestrationTypeHasBeenSet = false;

    CustomOrchestration m_customOrchestration;
    bool m_customOrchestrationHasBeenSet = false;
    InvokeInlineAgentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
