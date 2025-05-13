﻿/**
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
#include <aws/bedrock/model/GuardrailCrossRegionConfig.h>
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
    AWS_BEDROCK_API CreateGuardrailRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGuardrailRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateGuardrailRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic policies to configure for the guardrail.</p>
     */
    inline const GuardrailTopicPolicyConfig& GetTopicPolicyConfig() const { return m_topicPolicyConfig; }
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }
    template<typename TopicPolicyConfigT = GuardrailTopicPolicyConfig>
    void SetTopicPolicyConfig(TopicPolicyConfigT&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::forward<TopicPolicyConfigT>(value); }
    template<typename TopicPolicyConfigT = GuardrailTopicPolicyConfig>
    CreateGuardrailRequest& WithTopicPolicyConfig(TopicPolicyConfigT&& value) { SetTopicPolicyConfig(std::forward<TopicPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content filter policies to configure for the guardrail.</p>
     */
    inline const GuardrailContentPolicyConfig& GetContentPolicyConfig() const { return m_contentPolicyConfig; }
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }
    template<typename ContentPolicyConfigT = GuardrailContentPolicyConfig>
    void SetContentPolicyConfig(ContentPolicyConfigT&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::forward<ContentPolicyConfigT>(value); }
    template<typename ContentPolicyConfigT = GuardrailContentPolicyConfig>
    CreateGuardrailRequest& WithContentPolicyConfig(ContentPolicyConfigT&& value) { SetContentPolicyConfig(std::forward<ContentPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy you configure for the guardrail.</p>
     */
    inline const GuardrailWordPolicyConfig& GetWordPolicyConfig() const { return m_wordPolicyConfig; }
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }
    template<typename WordPolicyConfigT = GuardrailWordPolicyConfig>
    void SetWordPolicyConfig(WordPolicyConfigT&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::forward<WordPolicyConfigT>(value); }
    template<typename WordPolicyConfigT = GuardrailWordPolicyConfig>
    CreateGuardrailRequest& WithWordPolicyConfig(WordPolicyConfigT&& value) { SetWordPolicyConfig(std::forward<WordPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy to configure for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const { return m_sensitiveInformationPolicyConfig; }
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }
    template<typename SensitiveInformationPolicyConfigT = GuardrailSensitiveInformationPolicyConfig>
    void SetSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::forward<SensitiveInformationPolicyConfigT>(value); }
    template<typename SensitiveInformationPolicyConfigT = GuardrailSensitiveInformationPolicyConfig>
    CreateGuardrailRequest& WithSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { SetSensitiveInformationPolicyConfig(std::forward<SensitiveInformationPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy configuration used to create a guardrail.</p>
     */
    inline const GuardrailContextualGroundingPolicyConfig& GetContextualGroundingPolicyConfig() const { return m_contextualGroundingPolicyConfig; }
    inline bool ContextualGroundingPolicyConfigHasBeenSet() const { return m_contextualGroundingPolicyConfigHasBeenSet; }
    template<typename ContextualGroundingPolicyConfigT = GuardrailContextualGroundingPolicyConfig>
    void SetContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = std::forward<ContextualGroundingPolicyConfigT>(value); }
    template<typename ContextualGroundingPolicyConfigT = GuardrailContextualGroundingPolicyConfig>
    CreateGuardrailRequest& WithContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { SetContextualGroundingPolicyConfig(std::forward<ContextualGroundingPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-defined guardrail profile that you're using with your guardrail.
     * Guardrail profiles define the destination Amazon Web Services Regions where
     * guardrail inference requests can be automatically routed.</p> <p>For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const GuardrailCrossRegionConfig& GetCrossRegionConfig() const { return m_crossRegionConfig; }
    inline bool CrossRegionConfigHasBeenSet() const { return m_crossRegionConfigHasBeenSet; }
    template<typename CrossRegionConfigT = GuardrailCrossRegionConfig>
    void SetCrossRegionConfig(CrossRegionConfigT&& value) { m_crossRegionConfigHasBeenSet = true; m_crossRegionConfig = std::forward<CrossRegionConfigT>(value); }
    template<typename CrossRegionConfigT = GuardrailCrossRegionConfig>
    CreateGuardrailRequest& WithCrossRegionConfig(CrossRegionConfigT&& value) { SetCrossRegionConfig(std::forward<CrossRegionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the guardrail blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const { return m_blockedInputMessaging; }
    inline bool BlockedInputMessagingHasBeenSet() const { return m_blockedInputMessagingHasBeenSet; }
    template<typename BlockedInputMessagingT = Aws::String>
    void SetBlockedInputMessaging(BlockedInputMessagingT&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::forward<BlockedInputMessagingT>(value); }
    template<typename BlockedInputMessagingT = Aws::String>
    CreateGuardrailRequest& WithBlockedInputMessaging(BlockedInputMessagingT&& value) { SetBlockedInputMessaging(std::forward<BlockedInputMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the guardrail blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const { return m_blockedOutputsMessaging; }
    inline bool BlockedOutputsMessagingHasBeenSet() const { return m_blockedOutputsMessagingHasBeenSet; }
    template<typename BlockedOutputsMessagingT = Aws::String>
    void SetBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::forward<BlockedOutputsMessagingT>(value); }
    template<typename BlockedOutputsMessagingT = Aws::String>
    CreateGuardrailRequest& WithBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { SetBlockedOutputsMessaging(std::forward<BlockedOutputsMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that you use to encrypt the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateGuardrailRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you want to attach to the guardrail. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateGuardrailRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateGuardrailRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateGuardrailRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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

    GuardrailCrossRegionConfig m_crossRegionConfig;
    bool m_crossRegionConfigHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
