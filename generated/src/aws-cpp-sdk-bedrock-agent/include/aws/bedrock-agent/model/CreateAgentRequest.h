/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Create Agent Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgentRequest">AWS
   * API Reference</a></p>
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


    
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    
    inline CreateAgentRequest& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    
    inline CreateAgentRequest& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateAgentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateAgentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetInstruction() const{ return m_instruction; }

    
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }

    
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }

    
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }

    
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }

    
    inline CreateAgentRequest& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}

    
    inline CreateAgentRequest& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithInstruction(const char* value) { SetInstruction(value); return *this;}


    
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }

    
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }

    
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }

    
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }

    
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }

    
    inline CreateAgentRequest& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}

    
    inline CreateAgentRequest& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateAgentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateAgentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    
    inline CreateAgentRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    
    inline const Aws::String& GetAgentResourceRoleArn() const{ return m_agentResourceRoleArn; }

    
    inline bool AgentResourceRoleArnHasBeenSet() const { return m_agentResourceRoleArnHasBeenSet; }

    
    inline void SetAgentResourceRoleArn(const Aws::String& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = value; }

    
    inline void SetAgentResourceRoleArn(Aws::String&& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = std::move(value); }

    
    inline void SetAgentResourceRoleArn(const char* value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn.assign(value); }

    
    inline CreateAgentRequest& WithAgentResourceRoleArn(const Aws::String& value) { SetAgentResourceRoleArn(value); return *this;}

    
    inline CreateAgentRequest& WithAgentResourceRoleArn(Aws::String&& value) { SetAgentResourceRoleArn(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithAgentResourceRoleArn(const char* value) { SetAgentResourceRoleArn(value); return *this;}


    
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }

    
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }

    
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }

    
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }

    
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }

    
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}

    
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}

    
    inline CreateAgentRequest& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateAgentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateAgentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateAgentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateAgentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateAgentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateAgentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateAgentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateAgentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateAgentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }

    
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }

    
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }

    
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }

    
    inline CreateAgentRequest& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}

    
    inline CreateAgentRequest& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_agentResourceRoleArn;
    bool m_agentResourceRoleArnHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
