/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfigurationWithArn.h>
#include <aws/bedrock-agent-runtime/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgentActionGroup.h>
#include <aws/bedrock-agent-runtime/model/CollaboratorConfiguration.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBase.h>
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
    AWS_BEDROCKAGENTRUNTIME_API Collaborator();
    AWS_BEDROCKAGENTRUNTIME_API Collaborator(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Collaborator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> List of action groups with each action group defining tasks the inline
     * collaborator agent needs to carry out. </p>
     */
    inline const Aws::Vector<AgentActionGroup>& GetActionGroups() const{ return m_actionGroups; }
    inline bool ActionGroupsHasBeenSet() const { return m_actionGroupsHasBeenSet; }
    inline void SetActionGroups(const Aws::Vector<AgentActionGroup>& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = value; }
    inline void SetActionGroups(Aws::Vector<AgentActionGroup>&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups = std::move(value); }
    inline Collaborator& WithActionGroups(const Aws::Vector<AgentActionGroup>& value) { SetActionGroups(value); return *this;}
    inline Collaborator& WithActionGroups(Aws::Vector<AgentActionGroup>&& value) { SetActionGroups(std::move(value)); return *this;}
    inline Collaborator& AddActionGroups(const AgentActionGroup& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.push_back(value); return *this; }
    inline Collaborator& AddActionGroups(AgentActionGroup&& value) { m_actionGroupsHasBeenSet = true; m_actionGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Defines how the inline supervisor agent handles information across multiple
     * collaborator agents to coordinate a final response. </p>
     */
    inline const AgentCollaboration& GetAgentCollaboration() const{ return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(const AgentCollaboration& value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline void SetAgentCollaboration(AgentCollaboration&& value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = std::move(value); }
    inline Collaborator& WithAgentCollaboration(const AgentCollaboration& value) { SetAgentCollaboration(value); return *this;}
    inline Collaborator& WithAgentCollaboration(AgentCollaboration&& value) { SetAgentCollaboration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the inline collaborator agent which must be the same name as
     * specified for <code>collaboratorName</code>. </p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }
    inline Collaborator& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}
    inline Collaborator& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}
    inline Collaborator& WithAgentName(const char* value) { SetAgentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Settings of the collaborator agent. </p>
     */
    inline const Aws::Vector<CollaboratorConfiguration>& GetCollaboratorConfigurations() const{ return m_collaboratorConfigurations; }
    inline bool CollaboratorConfigurationsHasBeenSet() const { return m_collaboratorConfigurationsHasBeenSet; }
    inline void SetCollaboratorConfigurations(const Aws::Vector<CollaboratorConfiguration>& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations = value; }
    inline void SetCollaboratorConfigurations(Aws::Vector<CollaboratorConfiguration>&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations = std::move(value); }
    inline Collaborator& WithCollaboratorConfigurations(const Aws::Vector<CollaboratorConfiguration>& value) { SetCollaboratorConfigurations(value); return *this;}
    inline Collaborator& WithCollaboratorConfigurations(Aws::Vector<CollaboratorConfiguration>&& value) { SetCollaboratorConfigurations(std::move(value)); return *this;}
    inline Collaborator& AddCollaboratorConfigurations(const CollaboratorConfiguration& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations.push_back(value); return *this; }
    inline Collaborator& AddCollaboratorConfigurations(CollaboratorConfiguration&& value) { m_collaboratorConfigurationsHasBeenSet = true; m_collaboratorConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the AWS KMS key that encrypts the inline
     * collaborator. </p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }
    inline Collaborator& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline Collaborator& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline Collaborator& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The foundation model used by the inline collaborator agent. </p>
     */
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }
    inline Collaborator& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}
    inline Collaborator& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}
    inline Collaborator& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details of the guardwrail associated with the inline collaborator. </p>
     */
    inline const GuardrailConfigurationWithArn& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfigurationWithArn& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfigurationWithArn&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline Collaborator& WithGuardrailConfiguration(const GuardrailConfigurationWithArn& value) { SetGuardrailConfiguration(value); return *this;}
    inline Collaborator& WithGuardrailConfiguration(GuardrailConfigurationWithArn&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of seconds for which the Amazon Bedrock keeps information about
     * the user's conversation with the inline collaborator agent.</p> <p>A user
     * interaction remains active for the amount of time specified. If no conversation
     * occurs during this time, the session expires and Amazon Bedrock deletes any data
     * provided before the timeout. </p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline Collaborator& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instruction that tell the inline collaborator agent what it should do and
     * how it should interact with users. </p>
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }
    inline Collaborator& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}
    inline Collaborator& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}
    inline Collaborator& WithInstruction(const char* value) { SetInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Knowledge base associated with the inline collaborator agent. </p>
     */
    inline const Aws::Vector<KnowledgeBase>& GetKnowledgeBases() const{ return m_knowledgeBases; }
    inline bool KnowledgeBasesHasBeenSet() const { return m_knowledgeBasesHasBeenSet; }
    inline void SetKnowledgeBases(const Aws::Vector<KnowledgeBase>& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = value; }
    inline void SetKnowledgeBases(Aws::Vector<KnowledgeBase>&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases = std::move(value); }
    inline Collaborator& WithKnowledgeBases(const Aws::Vector<KnowledgeBase>& value) { SetKnowledgeBases(value); return *this;}
    inline Collaborator& WithKnowledgeBases(Aws::Vector<KnowledgeBase>&& value) { SetKnowledgeBases(std::move(value)); return *this;}
    inline Collaborator& AddKnowledgeBases(const KnowledgeBase& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.push_back(value); return *this; }
    inline Collaborator& AddKnowledgeBases(KnowledgeBase&& value) { m_knowledgeBasesHasBeenSet = true; m_knowledgeBases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains configurations to override prompt templates in different parts of
     * an inline collaborator sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>. </p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }
    inline Collaborator& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}
    inline Collaborator& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentActionGroup> m_actionGroups;
    bool m_actionGroupsHasBeenSet = false;

    AgentCollaboration m_agentCollaboration;
    bool m_agentCollaborationHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::Vector<CollaboratorConfiguration> m_collaboratorConfigurations;
    bool m_collaboratorConfigurationsHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    GuardrailConfigurationWithArn m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    Aws::Vector<KnowledgeBase> m_knowledgeBases;
    bool m_knowledgeBasesHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
