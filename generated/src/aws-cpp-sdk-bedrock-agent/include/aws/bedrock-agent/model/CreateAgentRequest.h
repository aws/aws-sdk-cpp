/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_BEDROCKAGENT_API CreateAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the agent that you create.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline CreateAgentRequest& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline CreateAgentRequest& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>A name for the agent that you create.</p>
     */
    inline CreateAgentRequest& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline const Aws::String& GetAgentResourceRoleArn() const{ return m_agentResourceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline bool AgentResourceRoleArnHasBeenSet() const { return m_agentResourceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline void SetAgentResourceRoleArn(const Aws::String& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline void SetAgentResourceRoleArn(Aws::String&& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline void SetAgentResourceRoleArn(const char* value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline CreateAgentRequest& WithAgentResourceRoleArn(const Aws::String& value) { SetAgentResourceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline CreateAgentRequest& WithAgentResourceRoleArn(Aws::String&& value) { SetAgentResourceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline CreateAgentRequest& WithAgentResourceRoleArn(const char* value) { SetAgentResourceRoleArn(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateAgentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateAgentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateAgentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key with which to encrypt the
     * agent.</p>
     */
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}


    /**
     * <p>A description of the agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the agent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the agent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the agent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the agent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the agent.</p>
     */
    inline CreateAgentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the agent.</p>
     */
    inline CreateAgentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the agent.</p>
     */
    inline CreateAgentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline CreateAgentRequest& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline CreateAgentRequest& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}

    /**
     * <p>The foundation model to be used for orchestration by the agent you
     * create.</p>
     */
    inline CreateAgentRequest& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}


    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The number of seconds for which Amazon Bedrock keeps information about a
     * user's conversation with the agent.</p> <p>A user interaction remains active for
     * the amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Bedrock deletes any data provided before the
     * timeout.</p>
     */
    inline CreateAgentRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline CreateAgentRequest& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline CreateAgentRequest& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}

    /**
     * <p>Instructions that tell the agent what it should do and how it should interact
     * with users.</p>
     */
    inline CreateAgentRequest& WithInstruction(const char* value) { SetInstruction(value); return *this;}


    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }

    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }

    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }

    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }

    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline CreateAgentRequest& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}

    /**
     * <p>Contains configurations to override prompts in different parts of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline CreateAgentRequest& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}


    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any tags that you want to attach to the agent.</p>
     */
    inline CreateAgentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_agentResourceRoleArn;
    bool m_agentResourceRoleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
