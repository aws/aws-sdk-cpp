/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
#include <aws/bedrock-agent/model/OrchestrationType.h>
#include <aws/bedrock-agent/model/CustomOrchestration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent/model/GuardrailConfiguration.h>
#include <aws/bedrock-agent/model/MemoryConfiguration.h>
#include <aws/bedrock-agent/model/AgentCollaboration.h>
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
    AWS_BEDROCKAGENT_API Agent() = default;
    AWS_BEDROCKAGENT_API Agent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Agent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    Agent& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    Agent& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const { return m_agentArn; }
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }
    template<typename AgentArnT = Aws::String>
    void SetAgentArn(AgentArnT&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::forward<AgentArnT>(value); }
    template<typename AgentArnT = Aws::String>
    Agent& WithAgentArn(AgentArnT&& value) { SetAgentArn(std::forward<AgentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    Agent& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    Agent& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline const Aws::String& GetInstruction() const { return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    template<typename InstructionT = Aws::String>
    void SetInstruction(InstructionT&& value) { m_instructionHasBeenSet = true; m_instruction = std::forward<InstructionT>(value); }
    template<typename InstructionT = Aws::String>
    Agent& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
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
    inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    inline void SetAgentStatus(AgentStatus value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }
    inline Agent& WithAgentStatus(AgentStatus value) { SetAgentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foundation model used for orchestration by the agent.</p>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    Agent& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Agent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the orchestration strategy for the agent. </p>
     */
    inline OrchestrationType GetOrchestrationType() const { return m_orchestrationType; }
    inline bool OrchestrationTypeHasBeenSet() const { return m_orchestrationTypeHasBeenSet; }
    inline void SetOrchestrationType(OrchestrationType value) { m_orchestrationTypeHasBeenSet = true; m_orchestrationType = value; }
    inline Agent& WithOrchestrationType(OrchestrationType value) { SetOrchestrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains custom orchestration configurations for the agent. </p>
     */
    inline const CustomOrchestration& GetCustomOrchestration() const { return m_customOrchestration; }
    inline bool CustomOrchestrationHasBeenSet() const { return m_customOrchestrationHasBeenSet; }
    template<typename CustomOrchestrationT = CustomOrchestration>
    void SetCustomOrchestration(CustomOrchestrationT&& value) { m_customOrchestrationHasBeenSet = true; m_customOrchestration = std::forward<CustomOrchestrationT>(value); }
    template<typename CustomOrchestrationT = CustomOrchestration>
    Agent& WithCustomOrchestration(CustomOrchestrationT&& value) { SetCustomOrchestration(std::forward<CustomOrchestrationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline Agent& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline const Aws::String& GetAgentResourceRoleArn() const { return m_agentResourceRoleArn; }
    inline bool AgentResourceRoleArnHasBeenSet() const { return m_agentResourceRoleArnHasBeenSet; }
    template<typename AgentResourceRoleArnT = Aws::String>
    void SetAgentResourceRoleArn(AgentResourceRoleArnT&& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = std::forward<AgentResourceRoleArnT>(value); }
    template<typename AgentResourceRoleArnT = Aws::String>
    Agent& WithAgentResourceRoleArn(AgentResourceRoleArnT&& value) { SetAgentResourceRoleArn(std::forward<AgentResourceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    Agent& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Agent& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Agent& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the agent was last prepared.</p>
     */
    inline const Aws::Utils::DateTime& GetPreparedAt() const { return m_preparedAt; }
    inline bool PreparedAtHasBeenSet() const { return m_preparedAtHasBeenSet; }
    template<typename PreparedAtT = Aws::Utils::DateTime>
    void SetPreparedAt(PreparedAtT&& value) { m_preparedAtHasBeenSet = true; m_preparedAt = std::forward<PreparedAtT>(value); }
    template<typename PreparedAtT = Aws::Utils::DateTime>
    Agent& WithPreparedAt(PreparedAtT&& value) { SetPreparedAt(std::forward<PreparedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains reasons that the agent-related API that you invoked failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    Agent& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    Agent& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains recommended actions to take for the agent-related API that you
     * invoked to succeed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const { return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    template<typename RecommendedActionsT = Aws::Vector<Aws::String>>
    void SetRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::forward<RecommendedActionsT>(value); }
    template<typename RecommendedActionsT = Aws::Vector<Aws::String>>
    Agent& WithRecommendedActions(RecommendedActionsT&& value) { SetRecommendedActions(std::forward<RecommendedActionsT>(value)); return *this;}
    template<typename RecommendedActionsT = Aws::String>
    Agent& AddRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.emplace_back(std::forward<RecommendedActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const { return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    void SetPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::forward<PromptOverrideConfigurationT>(value); }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    Agent& WithPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { SetPromptOverrideConfiguration(std::forward<PromptOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the guardrail associated with the agent.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    Agent& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains memory configuration for the agent.</p>
     */
    inline const MemoryConfiguration& GetMemoryConfiguration() const { return m_memoryConfiguration; }
    inline bool MemoryConfigurationHasBeenSet() const { return m_memoryConfigurationHasBeenSet; }
    template<typename MemoryConfigurationT = MemoryConfiguration>
    void SetMemoryConfiguration(MemoryConfigurationT&& value) { m_memoryConfigurationHasBeenSet = true; m_memoryConfiguration = std::forward<MemoryConfigurationT>(value); }
    template<typename MemoryConfigurationT = MemoryConfiguration>
    Agent& WithMemoryConfiguration(MemoryConfigurationT&& value) { SetMemoryConfiguration(std::forward<MemoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's collaboration settings.</p>
     */
    inline AgentCollaboration GetAgentCollaboration() const { return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(AgentCollaboration value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline Agent& WithAgentCollaboration(AgentCollaboration value) { SetAgentCollaboration(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    AgentStatus m_agentStatus{AgentStatus::NOT_SET};
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OrchestrationType m_orchestrationType{OrchestrationType::NOT_SET};
    bool m_orchestrationTypeHasBeenSet = false;

    CustomOrchestration m_customOrchestration;
    bool m_customOrchestrationHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_agentResourceRoleArn;
    bool m_agentResourceRoleArnHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_preparedAt{};
    bool m_preparedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    MemoryConfiguration m_memoryConfiguration;
    bool m_memoryConfigurationHasBeenSet = false;

    AgentCollaboration m_agentCollaboration{AgentCollaboration::NOT_SET};
    bool m_agentCollaborationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
