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
   * <p>Contains details about a version of an agent.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}


    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentName(const char* value) { SetAgentName(value); return *this;}


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
    inline AgentVersion& WithAgentResourceRoleArn(const Aws::String& value) { SetAgentResourceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline AgentVersion& WithAgentResourceRoleArn(Aws::String&& value) { SetAgentResourceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the agent.</p>
     */
    inline AgentVersion& WithAgentResourceRoleArn(const char* value) { SetAgentResourceRoleArn(value); return *this;}


    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }

    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }

    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }

    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The status of the agent that the version belongs to.</p>
     */
    inline AgentVersion& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline AgentVersion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the version was created.</p>
     */
    inline AgentVersion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline AgentVersion& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline AgentVersion& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that encrypts the agent.</p>
     */
    inline AgentVersion& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}


    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline AgentVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline AgentVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline AgentVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline AgentVersion& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline AgentVersion& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline AgentVersion& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline AgentVersion& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of reasons that the API operation on the version failed.</p>
     */
    inline AgentVersion& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline const Aws::String& GetFoundationModel() const{ return m_foundationModel; }

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline bool FoundationModelHasBeenSet() const { return m_foundationModelHasBeenSet; }

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline void SetFoundationModel(const Aws::String& value) { m_foundationModelHasBeenSet = true; m_foundationModel = value; }

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline void SetFoundationModel(Aws::String&& value) { m_foundationModelHasBeenSet = true; m_foundationModel = std::move(value); }

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline void SetFoundationModel(const char* value) { m_foundationModelHasBeenSet = true; m_foundationModel.assign(value); }

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline AgentVersion& WithFoundationModel(const Aws::String& value) { SetFoundationModel(value); return *this;}

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline AgentVersion& WithFoundationModel(Aws::String&& value) { SetFoundationModel(std::move(value)); return *this;}

    /**
     * <p>The foundation model that the version invokes.</p>
     */
    inline AgentVersion& WithFoundationModel(const char* value) { SetFoundationModel(value); return *this;}


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
    inline AgentVersion& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline AgentVersion& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline AgentVersion& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}

    /**
     * <p>The instructions provided to the agent.</p>
     */
    inline AgentVersion& WithInstruction(const char* value) { SetInstruction(value); return *this;}


    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const PromptOverrideConfiguration& GetPromptOverrideConfiguration() const{ return m_promptOverrideConfiguration; }

    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline bool PromptOverrideConfigurationHasBeenSet() const { return m_promptOverrideConfigurationHasBeenSet; }

    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = value; }

    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { m_promptOverrideConfigurationHasBeenSet = true; m_promptOverrideConfiguration = std::move(value); }

    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline AgentVersion& WithPromptOverrideConfiguration(const PromptOverrideConfiguration& value) { SetPromptOverrideConfiguration(value); return *this;}

    /**
     * <p>Contains configurations to override prompt templates in different parts of an
     * agent sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline AgentVersion& WithPromptOverrideConfiguration(PromptOverrideConfiguration&& value) { SetPromptOverrideConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const{ return m_recommendedActions; }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline void SetRecommendedActions(const Aws::Vector<Aws::String>& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = value; }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline void SetRecommendedActions(Aws::Vector<Aws::String>&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::move(value); }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline AgentVersion& WithRecommendedActions(const Aws::Vector<Aws::String>& value) { SetRecommendedActions(value); return *this;}

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline AgentVersion& WithRecommendedActions(Aws::Vector<Aws::String>&& value) { SetRecommendedActions(std::move(value)); return *this;}

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline AgentVersion& AddRecommendedActions(const Aws::String& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline AgentVersion& AddRecommendedActions(Aws::String&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of recommended actions to take for the failed API operation on the
     * version to succeed.</p>
     */
    inline AgentVersion& AddRecommendedActions(const char* value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }


    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline AgentVersion& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline AgentVersion& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number.</p>
     */
    inline AgentVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number.</p>
     */
    inline AgentVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number.</p>
     */
    inline AgentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::String m_agentResourceRoleArn;
    bool m_agentResourceRoleArnHasBeenSet = false;

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_foundationModel;
    bool m_foundationModelHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    PromptOverrideConfiguration m_promptOverrideConfiguration;
    bool m_promptOverrideConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
