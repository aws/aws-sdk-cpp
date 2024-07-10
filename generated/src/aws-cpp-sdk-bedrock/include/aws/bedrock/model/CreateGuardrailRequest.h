/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailTopicPolicyConfig.h>
#include <aws/bedrock/model/GuardrailContentPolicyConfig.h>
#include <aws/bedrock/model/GuardrailWordPolicyConfig.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationPolicyConfig.h>
#include <aws/bedrock/model/GuardrailContextualGroundingPolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateGuardrailRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateGuardrailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGuardrail"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name to give the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateGuardrailRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateGuardrailRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateGuardrailRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateGuardrailRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline const GuardrailTopicPolicyConfig& GetTopicPolicyConfig() const{ return m_topicPolicyConfig; }
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }
    inline void SetTopicPolicyConfig(const GuardrailTopicPolicyConfig& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = value; }
    inline void SetTopicPolicyConfig(GuardrailTopicPolicyConfig&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::move(value); }
    inline CreateGuardrailRequest& WithTopicPolicyConfig(const GuardrailTopicPolicyConfig& value) { SetTopicPolicyConfig(value); return *this;}
    inline CreateGuardrailRequest& WithTopicPolicyConfig(GuardrailTopicPolicyConfig&& value) { SetTopicPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline const GuardrailContentPolicyConfig& GetContentPolicyConfig() const{ return m_contentPolicyConfig; }
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }
    inline void SetContentPolicyConfig(const GuardrailContentPolicyConfig& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = value; }
    inline void SetContentPolicyConfig(GuardrailContentPolicyConfig&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::move(value); }
    inline CreateGuardrailRequest& WithContentPolicyConfig(const GuardrailContentPolicyConfig& value) { SetContentPolicyConfig(value); return *this;}
    inline CreateGuardrailRequest& WithContentPolicyConfig(GuardrailContentPolicyConfig&& value) { SetContentPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline const GuardrailWordPolicyConfig& GetWordPolicyConfig() const{ return m_wordPolicyConfig; }
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }
    inline void SetWordPolicyConfig(const GuardrailWordPolicyConfig& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = value; }
    inline void SetWordPolicyConfig(GuardrailWordPolicyConfig&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::move(value); }
    inline CreateGuardrailRequest& WithWordPolicyConfig(const GuardrailWordPolicyConfig& value) { SetWordPolicyConfig(value); return *this;}
    inline CreateGuardrailRequest& WithWordPolicyConfig(GuardrailWordPolicyConfig&& value) { SetWordPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const{ return m_sensitiveInformationPolicyConfig; }
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }
    inline void SetSensitiveInformationPolicyConfig(const GuardrailSensitiveInformationPolicyConfig& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = value; }
    inline void SetSensitiveInformationPolicyConfig(GuardrailSensitiveInformationPolicyConfig&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::move(value); }
    inline CreateGuardrailRequest& WithSensitiveInformationPolicyConfig(const GuardrailSensitiveInformationPolicyConfig& value) { SetSensitiveInformationPolicyConfig(value); return *this;}
    inline CreateGuardrailRequest& WithSensitiveInformationPolicyConfig(GuardrailSensitiveInformationPolicyConfig&& value) { SetSensitiveInformationPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy configuration used to create a guardrail.</p>
     */
    inline const GuardrailContextualGroundingPolicyConfig& GetContextualGroundingPolicyConfig() const{ return m_contextualGroundingPolicyConfig; }
    inline bool ContextualGroundingPolicyConfigHasBeenSet() const { return m_contextualGroundingPolicyConfigHasBeenSet; }
    inline void SetContextualGroundingPolicyConfig(const GuardrailContextualGroundingPolicyConfig& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = value; }
    inline void SetContextualGroundingPolicyConfig(GuardrailContextualGroundingPolicyConfig&& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = std::move(value); }
    inline CreateGuardrailRequest& WithContextualGroundingPolicyConfig(const GuardrailContextualGroundingPolicyConfig& value) { SetContextualGroundingPolicyConfig(value); return *this;}
    inline CreateGuardrailRequest& WithContextualGroundingPolicyConfig(GuardrailContextualGroundingPolicyConfig&& value) { SetContextualGroundingPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const{ return m_blockedInputMessaging; }
    inline bool BlockedInputMessagingHasBeenSet() const { return m_blockedInputMessagingHasBeenSet; }
    inline void SetBlockedInputMessaging(const Aws::String& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = value; }
    inline void SetBlockedInputMessaging(Aws::String&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::move(value); }
    inline void SetBlockedInputMessaging(const char* value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging.assign(value); }
    inline CreateGuardrailRequest& WithBlockedInputMessaging(const Aws::String& value) { SetBlockedInputMessaging(value); return *this;}
    inline CreateGuardrailRequest& WithBlockedInputMessaging(Aws::String&& value) { SetBlockedInputMessaging(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithBlockedInputMessaging(const char* value) { SetBlockedInputMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const{ return m_blockedOutputsMessaging; }
    inline bool BlockedOutputsMessagingHasBeenSet() const { return m_blockedOutputsMessagingHasBeenSet; }
    inline void SetBlockedOutputsMessaging(const Aws::String& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = value; }
    inline void SetBlockedOutputsMessaging(Aws::String&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::move(value); }
    inline void SetBlockedOutputsMessaging(const char* value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging.assign(value); }
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(const Aws::String& value) { SetBlockedOutputsMessaging(value); return *this;}
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(Aws::String&& value) { SetBlockedOutputsMessaging(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(const char* value) { SetBlockedOutputsMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateGuardrailRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateGuardrailRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGuardrailRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateGuardrailRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGuardrailRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateGuardrailRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateGuardrailRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateGuardrailRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateGuardrailRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GuardrailTopicPolicyConfig m_topicPolicyConfig;
    bool m_topicPolicyConfigHasBeenSet = false;

    GuardrailContentPolicyConfig m_contentPolicyConfig;
    bool m_contentPolicyConfigHasBeenSet = false;

    GuardrailWordPolicyConfig m_wordPolicyConfig;
    bool m_wordPolicyConfigHasBeenSet = false;

    GuardrailSensitiveInformationPolicyConfig m_sensitiveInformationPolicyConfig;
    bool m_sensitiveInformationPolicyConfigHasBeenSet = false;

    GuardrailContextualGroundingPolicyConfig m_contextualGroundingPolicyConfig;
    bool m_contextualGroundingPolicyConfigHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
