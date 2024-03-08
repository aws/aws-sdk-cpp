/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the information of an agent version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentVersion">AWS
   * API Reference</a></p>
   */
  class AgentVersion
  {
  public:
    AWS_BEDROCKAGENT_API AgentVersion();
    AWS_BEDROCKAGENT_API AgentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    
    inline AgentVersion& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline AgentVersion& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline AgentVersion& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    
    inline AgentVersion& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    
    inline AgentVersion& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    
    inline AgentVersion& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }

    
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }

    
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }

    
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }

    
    inline AgentVersion& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    
    inline AgentVersion& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    
    inline AgentVersion& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}


    
    inline const Aws::String& GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline AgentVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline AgentVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    
    inline AgentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const Aws::String& GetInstruction() const{ return m_instruction; }

    
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }

    
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }

    
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }

    
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }

    
    inline AgentVersion& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}

    
    inline AgentVersion& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}

    
    inline AgentVersion& WithInstruction(const char* value) { SetInstruction(value); return *this;}


    
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }

    
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }

    
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }

    
    inline AgentVersion& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    
    inline AgentVersion& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }

    
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }

    
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }

    
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }

    
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }

    
    inline AgentVersion& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}

    
    inline AgentVersion& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}

    
    inline AgentVersion& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline AgentVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline AgentVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline AgentVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    
    inline AgentVersion& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    
    inline const Aws::String& GetAgentResourceRoleArn() const{ return m_agentResourceRoleArn; }

    
    inline bool AgentResourceRoleArnHasBeenSet() const { return m_agentResourceRoleArnHasBeenSet; }

    
    inline void SetAgentResourceRoleArn(const Aws::String& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = value; }

    
    inline void SetAgentResourceRoleArn(Aws::String&& value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn = std::move(value); }

    
    inline void SetAgentResourceRoleArn(const char* value) { m_agentResourceRoleArnHasBeenSet = true; m_agentResourceRoleArn.assign(value); }

    
    inline AgentVersion& WithAgentResourceRoleArn(const Aws::String& value) { SetAgentResourceRoleArn(value); return *this;}

    
    inline AgentVersion& WithAgentResourceRoleArn(Aws::String&& value) { SetAgentResourceRoleArn(std::move(value)); return *this;}

    
    inline AgentVersion& WithAgentResourceRoleArn(const char* value) { SetAgentResourceRoleArn(value); return *this;}


    
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }

    
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }

    
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }

    
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }

    
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }

    
    inline AgentVersion& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}

    
    inline AgentVersion& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}

    
    inline AgentVersion& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline AgentVersion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline AgentVersion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline AgentVersion& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline AgentVersion& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    
    inline AgentVersion& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    
    inline AgentVersion& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    
    inline AgentVersion& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    
    inline AgentVersion& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    
    inline AgentVersion& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const{ return m_recommendedActions; }

    
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }

    
    inline void SetRecommendedActions(const Aws::Vector<Aws::String>& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = value; }

    
    inline void SetRecommendedActions(Aws::Vector<Aws::String>&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::move(value); }

    
    inline AgentVersion& WithRecommendedActions(const Aws::Vector<Aws::String>& value) { SetRecommendedActions(value); return *this;}

    
    inline AgentVersion& WithRecommendedActions(Aws::Vector<Aws::String>&& value) { SetRecommendedActions(std::move(value)); return *this;}

    
    inline AgentVersion& AddRecommendedActions(const Aws::String& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }

    
    inline AgentVersion& AddRecommendedActions(Aws::String&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(std::move(value)); return *this; }

    
    inline AgentVersion& AddRecommendedActions(const char* value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }


    
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }

    
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }

    
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }

    
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }

    
    inline AgentVersion& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}

    
    inline AgentVersion& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
