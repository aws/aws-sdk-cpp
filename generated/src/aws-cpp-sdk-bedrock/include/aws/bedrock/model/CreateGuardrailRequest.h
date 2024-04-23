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


    /**
     * <p>The name to give the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to give the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the guardrail.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the guardrail.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the guardrail.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the guardrail.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline const GuardrailTopicPolicyConfig& GetTopicPolicyConfig() const{ return m_topicPolicyConfig; }

    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }

    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline void SetTopicPolicyConfig(const GuardrailTopicPolicyConfig& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = value; }

    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline void SetTopicPolicyConfig(GuardrailTopicPolicyConfig&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::move(value); }

    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithTopicPolicyConfig(const GuardrailTopicPolicyConfig& value) { SetTopicPolicyConfig(value); return *this;}

    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithTopicPolicyConfig(GuardrailTopicPolicyConfig&& value) { SetTopicPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline const GuardrailContentPolicyConfig& GetContentPolicyConfig() const{ return m_contentPolicyConfig; }

    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }

    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline void SetContentPolicyConfig(const GuardrailContentPolicyConfig& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = value; }

    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline void SetContentPolicyConfig(GuardrailContentPolicyConfig&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::move(value); }

    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithContentPolicyConfig(const GuardrailContentPolicyConfig& value) { SetContentPolicyConfig(value); return *this;}

    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithContentPolicyConfig(GuardrailContentPolicyConfig&& value) { SetContentPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline const GuardrailWordPolicyConfig& GetWordPolicyConfig() const{ return m_wordPolicyConfig; }

    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }

    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline void SetWordPolicyConfig(const GuardrailWordPolicyConfig& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = value; }

    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline void SetWordPolicyConfig(GuardrailWordPolicyConfig&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::move(value); }

    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithWordPolicyConfig(const GuardrailWordPolicyConfig& value) { SetWordPolicyConfig(value); return *this;}

    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithWordPolicyConfig(GuardrailWordPolicyConfig&& value) { SetWordPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const{ return m_sensitiveInformationPolicyConfig; }

    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }

    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline void SetSensitiveInformationPolicyConfig(const GuardrailSensitiveInformationPolicyConfig& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = value; }

    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline void SetSensitiveInformationPolicyConfig(GuardrailSensitiveInformationPolicyConfig&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::move(value); }

    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithSensitiveInformationPolicyConfig(const GuardrailSensitiveInformationPolicyConfig& value) { SetSensitiveInformationPolicyConfig(value); return *this;}

    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithSensitiveInformationPolicyConfig(GuardrailSensitiveInformationPolicyConfig&& value) { SetSensitiveInformationPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const{ return m_blockedInputMessaging; }

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline bool BlockedInputMessagingHasBeenSet() const { return m_blockedInputMessagingHasBeenSet; }

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(const Aws::String& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = value; }

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(Aws::String&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::move(value); }

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(const char* value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging.assign(value); }

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline CreateGuardrailRequest& WithBlockedInputMessaging(const Aws::String& value) { SetBlockedInputMessaging(value); return *this;}

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline CreateGuardrailRequest& WithBlockedInputMessaging(Aws::String&& value) { SetBlockedInputMessaging(std::move(value)); return *this;}

    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline CreateGuardrailRequest& WithBlockedInputMessaging(const char* value) { SetBlockedInputMessaging(value); return *this;}


    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const{ return m_blockedOutputsMessaging; }

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline bool BlockedOutputsMessagingHasBeenSet() const { return m_blockedOutputsMessagingHasBeenSet; }

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(const Aws::String& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = value; }

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(Aws::String&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::move(value); }

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(const char* value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging.assign(value); }

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(const Aws::String& value) { SetBlockedOutputsMessaging(value); return *this;}

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(Aws::String&& value) { SetBlockedOutputsMessaging(std::move(value)); return *this;}

    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline CreateGuardrailRequest& WithBlockedOutputsMessaging(const char* value) { SetBlockedOutputsMessaging(value); return *this;}


    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline CreateGuardrailRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline CreateGuardrailRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline CreateGuardrailRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline CreateGuardrailRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline CreateGuardrailRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateGuardrailRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateGuardrailRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateGuardrailRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

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
