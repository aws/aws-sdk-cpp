/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfigurationWithArn.h>
#include <aws/bedrock-agent-runtime/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboration.h>
#include <aws/bedrock-agent-runtime/model/AgentActionGroup.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBase.h>
#include <aws/bedrock-agent-runtime/model/CollaboratorConfiguration.h>
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
   * <p> List of inline collaborators. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Collaborator">AWS
   * API Reference</a></p>
   */
  class Collaborator
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Collaborator() = default;
    AWS_BEDROCKAGENTRUNTIME_API Collaborator(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Collaborator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the AWS KMS key that encrypts the inline
     * collaborator. </p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    Collaborator& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The foundation model used by the inline collaborator agent. </p>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    Collaborator& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instruction that tell the inline collaborator agent what it should do and
     * how it should interact with users. </p>
     */
    inline const Aws::String& GetInstruction() const { return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    template<typename InstructionT = Aws::String>
    void SetInstruction(InstructionT&& value) { m_instructionHasBeenSet = true; m_instruction = std::forward<InstructionT>(value); }
    template<typename InstructionT = Aws::String>
    Collaborator& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of seconds for which the Amazon Bedrock keeps information about
     * the user's conversation with the inline collaborator agent.</p> <p>A user
     * interaction remains active for the amount of time specified. If no conversation
     * occurs during this time, the session expires and Amazon Bedrock deletes any data
     * provided before the timeout. </p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline Collaborator& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of action groups with each action group defining tasks the inline
     * collaborator agent needs to carry out. </p>
     */
    inline const Aws::Vector<AgentActionGroup>& GetActionGroups() const { return m_actionGroups; }
    inline bool ActionGroupsHasBeenSet() const { return m_actionGroupsHasBeenSet; }
    template<typename ActionGroupsT = Aws::Vector<AgentActionGroup>>
    void SetActionGroups(ActionGroupsT&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = std::forward<ActionGroupsT>(value); }
    template<typename ActionGroupsT = Aws::Vector<AgentActionGroup>>
    Collaborator& WithActionGroups(ActionGroupsT&& value) { SetActionGroups(std::forward<ActionGroupsT>(value)); return *this;}
    template<typename ActionGroupsT = AgentActionGroup>
    Collaborator& AddActionGroups(ActionGroupsT&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.emplace_back(std::forward<ActionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Knowledge base associated with the inline collaborator agent. </p>
     */
    inline const Aws::Vector<KnowledgeBase>& GetKnowledgeBases() const { return m_knowledgeBases; }
    inline bool KnowledgeBasesHasBeenSet() const { return m_knowledgeBasesHasBeenSet; }
    template<typename KnowledgeBasesT = Aws::Vector<KnowledgeBase>>
    void SetKnowledgeBases(KnowledgeBasesT&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = std::forward<KnowledgeBasesT>(value); }
    template<typename KnowledgeBasesT = Aws::Vector<KnowledgeBase>>
    Collaborator& WithKnowledgeBases(KnowledgeBasesT&& value) { SetKnowledgeBases(std::forward<KnowledgeBasesT>(value)); return *this;}
    template<typename KnowledgeBasesT = KnowledgeBase>
    Collaborator& AddKnowledgeBases(KnowledgeBasesT&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.emplace_back(std::forward<KnowledgeBasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Details of the guardwrail associated with the inline collaborator. </p>
     */
    inline const GuardrailConfigurationWithArn& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfigurationWithArn>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfigurationWithArn>
    Collaborator& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains configurations to override prompt templates in different parts of
     * an inline collaborator sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>. </p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const { return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    void SetPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::forward<PromptOverrideConfigurationT>(value); }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    Collaborator& WithPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { SetPromptOverrideConfiguration(std::forward<PromptOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines how the inline supervisor agent handles information across multiple
     * collaborator agents to coordinate a final response. </p>
     */
    inline AgentCollaboration GetAgentCollaboration() const { return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(AgentCollaboration value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline Collaborator& WithAgentCollaboration(AgentCollaboration value) { SetAgentCollaboration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Settings of the collaborator agent. </p>
     */
    inline const Aws::Vector<CollaboratorConfiguration>& GetCollaboratorConfigurations() const { return m_collaboratorConfigurations; }
    inline bool CollaboratorConfigurationsHasBeenSet() const { return m_collaboratorConfigurationsHasBeenSet; }
    template<typename CollaboratorConfigurationsT = Aws::Vector<CollaboratorConfiguration>>
    void SetCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations = std::forward<CollaboratorConfigurationsT>(value); }
    template<typename CollaboratorConfigurationsT = Aws::Vector<CollaboratorConfiguration>>
    Collaborator& WithCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { SetCollaboratorConfigurations(std::forward<CollaboratorConfigurationsT>(value)); return *this;}
    template<typename CollaboratorConfigurationsT = CollaboratorConfiguration>
    Collaborator& AddCollaboratorConfigurations(CollaboratorConfigurationsT&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations.emplace_back(std::forward<CollaboratorConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Name of the inline collaborator agent which must be the same name as
     * specified for <code>collaboratorName</code>. </p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    Collaborator& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
