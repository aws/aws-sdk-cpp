/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/OrchestrationType.h>
#include <aws/bedrock-agent/model/CustomOrchestration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
#include <aws/bedrock-agent/model/GuardrailConfiguration.h>
#include <aws/bedrock-agent/model/MemoryConfiguration.h>
#include <aws/bedrock-agent/model/AgentCollaboration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class CreateAgentRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API CreateAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the agent that you create.</p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    CreateAgentRequest& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
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
    CreateAgentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CreateAgentRequest& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the model that you want to be used for orchestration by
     * the agent you create.</p> <p>The <code>modelId</code> to provide depends on the
     * type of model or throughput that you use:</p> <ul> <li> <p>If you use a base
     * model, specify the model ID or its ARN. For a list of model IDs for base models,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#model-ids-arns">Amazon
     * Bedrock base model IDs (on-demand throughput)</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use an inference profile, specify the inference
     * profile ID or its ARN. For a list of inference profile IDs, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference-support.html">Supported
     * Regions and models for cross-region inference</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a provisioned model, specify the ARN of the
     * Provisioned Throughput. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-thru-use.html">Run
     * inference using a Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a custom model, first purchase Provisioned
     * Throughput for it. Then specify the ARN of the resulting provisioned model. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-use.html">Use
     * a custom model in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p> </li>
     * <li> <p>If you use an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">imported
     * model</a>, specify the ARN of the imported model. You can get the model ARN from
     * a successful call to <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateModelImportJob.html">CreateModelImportJob</a>
     * or from the Imported models page in the Amazon Bedrock console.</p> </li> </ul>
     */
    inline const Aws::String& GetFoundationModel() const { return m_foundationModel; }
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }
    template<typename FoundationModelT = Aws::String>
    void SetFoundationModel(FoundationModelT&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::forward<FoundationModelT>(value); }
    template<typename FoundationModelT = Aws::String>
    CreateAgentRequest& WithFoundationModel(FoundationModelT&& value) { SetFoundationModel(std::forward<FoundationModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the agent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAgentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the type of orchestration strategy for the agent. This is set to
     * <code>DEFAULT</code> orchestration type, by default. </p>
     */
    inline OrchestrationType GetOrchestrationType() const { return m_orchestrationType; }
    inline bool OrchestrationTypeHasBeenSet() const { return m_orchestrationTypeHasBeenSet; }
    inline void SetOrchestrationType(OrchestrationType value) { m_orchestrationTypeHasBeenSet = true; m_orchestrationType = value; }
    inline CreateAgentRequest& WithOrchestrationType(OrchestrationType value) { SetOrchestrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains details of the custom orchestration configured for the agent. </p>
     */
    inline const CustomOrchestration& GetCustomOrchestration() const { return m_customOrchestration; }
    inline bool CustomOrchestrationHasBeenSet() const { return m_customOrchestrationHasBeenSet; }
    template<typename CustomOrchestrationT = CustomOrchestration>
    void SetCustomOrchestration(CustomOrchestrationT&& value) { m_customOrchestrationHasBeenSet = true; m_customOrchestration = std::forward<CustomOrchestrationT>(value); }
    template<typename CustomOrchestrationT = CustomOrchestration>
    CreateAgentRequest& WithCustomOrchestration(CustomOrchestrationT&& value) { SetCustomOrchestration(std::forward<CustomOrchestrationT>(value)); return *this;}
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
    inline CreateAgentRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
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
    CreateAgentRequest& WithAgentResourceRoleArn(AgentResourceRoleArnT&& value) { SetAgentResourceRoleArn(std::forward<AgentResourceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    CreateAgentRequest& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAgentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAgentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const { return m_promptOverrideConfiguration; }
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    void SetPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::forward<PromptOverrideConfigurationT>(value); }
    template<typename PromptOverrideConfigurationT = PromptOverrideConfiguration>
    CreateAgentRequest& WithPromptOverrideConfiguration(PromptOverrideConfigurationT&& value) { SetPromptOverrideConfiguration(std::forward<PromptOverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Guardrail configuration assigned to the agent when it is
     * created.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    CreateAgentRequest& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the details of the memory configured for the agent.</p>
     */
    inline const MemoryConfiguration& GetMemoryConfiguration() const { return m_memoryConfiguration; }
    inline bool MemoryConfigurationHasBeenSet() const { return m_memoryConfigurationHasBeenSet; }
    template<typename MemoryConfigurationT = MemoryConfiguration>
    void SetMemoryConfiguration(MemoryConfigurationT&& value) { m_memoryConfigurationHasBeenSet = true; m_memoryConfiguration = std::forward<MemoryConfigurationT>(value); }
    template<typename MemoryConfigurationT = MemoryConfiguration>
    CreateAgentRequest& WithMemoryConfiguration(MemoryConfigurationT&& value) { SetMemoryConfiguration(std::forward<MemoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's collaboration role.</p>
     */
    inline AgentCollaboration GetAgentCollaboration() const { return m_agentCollaboration; }
    inline bool AgentCollaborationHasBeenSet() const { return m_agentCollaborationHasBeenSet; }
    inline void SetAgentCollaboration(AgentCollaboration value) { m_agentCollaborationHasBeenSet = true; m_agentCollaboration = value; }
    inline CreateAgentRequest& WithAgentCollaboration(AgentCollaboration value) { SetAgentCollaboration(value); return *this;}
    ///@}
  private:

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
