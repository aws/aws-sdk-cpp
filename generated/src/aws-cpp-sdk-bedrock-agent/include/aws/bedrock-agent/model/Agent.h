/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentCollaboration.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/CustomOrchestration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/GuardrailConfiguration.h>
#include <aws/bedrock-agent/model/MemoryConfiguration.h>
#include <aws/bedrock-agent/model/OrchestrationType.h>
#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about an agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/Agent">AWS
   * API Reference</a></p>
   */
  class Agent
  {
  public:
    AWS_BEDROCKAGENT_API Agent();
    AWS_BEDROCKAGENT_API Agent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Agent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }
    inline Agent& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}
    inline Agent& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}
    inline Agent& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's collaboration settings.</p>
     */
    inline const AgentCollaboration& GetAgentCollaboration() const{ return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(const AgentCollaboration& value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline void SetAgentCollaboration(AgentCollaboration&& value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = std::move(value); }
    inline Agent& WithAgentCollaboration(const AgentCollaboration& value) { SetAgentCollaboration(value); return *this;}
    inline Agent& WithAgentCollaboration(AgentCollaboration&& value) { SetAgentCollaboration(std::move(value)); return *this;}
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
    inline Agent& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline Agent& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline Agent& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }
    inline Agent& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}
    inline Agent& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}
    inline Agent& WithAgentName(const char* value) { SetAgentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline const Aws::String& GetAgentResourceRoleArn() const{ return m_agentResourceRoleArn; }
    inline bool AgentResourceRoleArnHasBeenSet() const { return m_agentResourceRoleArnHasBeenSet; }
    inline void SetAgentResourceRoleArn(const Aws::String& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = value; }
    inline void SetAgentResourceRoleArn(Aws::String&& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = std::move(value); }
    inline void SetAgentResourceRoleArn(const char* value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn.assign(value); }
    inline Agent& WithAgentResourceRoleArn(const Aws::String& value) { SetAgentResourceRoleArn(value); return *this;}
    inline Agent& WithAgentResourceRoleArn(Aws::String&& value) { SetAgentResourceRoleArn(std::move(value)); return *this;}
    inline Agent& WithAgentResourceRoleArn(const char* value) { SetAgentResourceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the agent and whether it is ready for use. The following
     * statuses are possible:</p> <ul> <li> <p>CREATING – The agent is being
     * created.</p> </li> <li> <p>PREPARING – The agent is being prepared.</p> </li>
     * <li> <p>PREPARED – The agent is prepared and ready to be invoked.</p> </li> <li>
     * <p>NOT_PREPARED – The agent has been created but not yet prepared.</p> </li>
     * <li> <p>FAILED – The agent API operation failed.</p> </li> <li> <p>UPDATING –
     * The agent is being updated.</p> </li> <li> <p>DELETING – The agent is being
     * deleted.</p> </li> </ul>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }
    inline Agent& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}
    inline Agent& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}
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
    inline Agent& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline Agent& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline Agent& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline Agent& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline Agent& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline Agent& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Agent& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Agent& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains custom orchestration configurations for the agent. </p>
     */
    inline const CustomOrchestration& GetCustomOrchestration() const{ return m_customOrchestration; }
    inline bool CustomOrchestrationHasBeenSet() const { return m_customOrchestrationHasBeenSet; }
    inline void SetCustomOrchestration(const CustomOrchestration& value) { m_customOrchestrationHasBeenSet = true; m_customOrchestration = value; }
    inline void SetCustomOrchestration(CustomOrchestration&& value) { m_customOrchestrationHasBeenSet = true; m_customOrchestration = std::move(value); }
    inline Agent& WithCustomOrchestration(const CustomOrchestration& value) { SetCustomOrchestration(value); return *this;}
    inline Agent& WithCustomOrchestration(CustomOrchestration&& value) { SetCustomOrchestration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }
    inline Agent& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline Agent& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline Agent& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Agent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Agent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Agent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains reasons that the agent-related API that you invoked failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }
    inline Agent& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline Agent& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline Agent& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }
    inline Agent& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }
    inline Agent& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The foundation model used for orchestration by the agent.</p>
     */
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }
    inline Agent& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}
    inline Agent& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}
    inline Agent& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the guardrail associated with the agent.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfiguration& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfiguration&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline Agent& WithGuardrailConfiguration(const GuardrailConfiguration& value) { SetGuardrailConfiguration(value); return *this;}
    inline Agent& WithGuardrailConfiguration(GuardrailConfiguration&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline Agent& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }
    inline Agent& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}
    inline Agent& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}
    inline Agent& WithInstruction(const char* value) { SetInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains memory configuration for the agent.</p>
     */
    inline const MemoryConfiguration& GetMemoryConfiguration() const{ return m_memoryConfiguration; }
    inline bool MemoryConfigurationHasBeenSet() const { return m_memoryConfigurationHasBeenSet; }
    inline void SetMemoryConfiguration(const MemoryConfiguration& value) { m_memoryConfigurationHasBeenSet = true; m_memoryConfiguration = value; }
    inline void SetMemoryConfiguration(MemoryConfiguration&& value) { m_memoryConfigurationHasBeenSet = true; m_memoryConfiguration = std::move(value); }
    inline Agent& WithMemoryConfiguration(const MemoryConfiguration& value) { SetMemoryConfiguration(value); return *this;}
    inline Agent& WithMemoryConfiguration(MemoryConfiguration&& value) { SetMemoryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the orchestration strategy for the agent. </p>
     */
    inline const OrchestrationType& GetOrchestrationType() const{ return m_orchestrationType; }
    inline bool OrchestrationTypeHasBeenSet() const { return m_orchestrationTypeHasBeenSet; }
    inline void SetOrchestrationType(const OrchestrationType& value) { m_orchestrationTypeHasBeenSet = true; m_orchestrationType = value; }
    inline void SetOrchestrationType(OrchestrationType&& value) { m_orchestrationTypeHasBeenSet = true; m_orchestrationType = std::move(value); }
    inline Agent& WithOrchestrationType(const OrchestrationType& value) { SetOrchestrationType(value); return *this;}
    inline Agent& WithOrchestrationType(OrchestrationType&& value) { SetOrchestrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was last prepared.</p>
     */
    inline const Aws::Utils::DateTime& GetPreparedAt() const{ return m_preparedAt; }
    inline bool PreparedAtHasBeenSet() const { return m_preparedAtHasBeenSet; }
    inline void SetPreparedAt(const Aws::Utils::DateTime& value) { m_preparedAtHasBeenSet = true; m_preparedAt = value; }
    inline void SetPreparedAt(Aws::Utils::DateTime&& value) { m_preparedAtHasBeenSet = true; m_preparedAt = std::move(value); }
    inline Agent& WithPreparedAt(const Aws::Utils::DateTime& value) { SetPreparedAt(value); return *this;}
    inline Agent& WithPreparedAt(Aws::Utils::DateTime&& value) { SetPreparedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }
    inline Agent& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}
    inline Agent& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains recommended actions to take for the agent-related API that you
     * invoked to succeed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const{ return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    inline void SetRecommendedActions(const Aws::Vector<Aws::String>& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = value; }
    inline void SetRecommendedActions(Aws::Vector<Aws::String>&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::move(value); }
    inline Agent& WithRecommendedActions(const Aws::Vector<Aws::String>& value) { SetRecommendedActions(value); return *this;}
    inline Agent& WithRecommendedActions(Aws::Vector<Aws::String>&& value) { SetRecommendedActions(std::move(value)); return *this;}
    inline Agent& AddRecommendedActions(const Aws::String& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }
    inline Agent& AddRecommendedActions(Aws::String&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(std::move(value)); return *this; }
    inline Agent& AddRecommendedActions(const char* value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Agent& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Agent& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    AgentCollaboration m_agentCollaboration;
    bool m_agentCollaborationHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_agentResourceRoleArn;
    bool m_agentResourceRoleArnHasBeenSet = false;

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    CustomOrchestration m_customOrchestration;
    bool m_customOrchestrationHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    MemoryConfiguration m_memoryConfiguration;
    bool m_memoryConfigurationHasBeenSet = false;

    OrchestrationType m_orchestrationType;
    bool m_orchestrationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_preparedAt;
    bool m_preparedAtHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
