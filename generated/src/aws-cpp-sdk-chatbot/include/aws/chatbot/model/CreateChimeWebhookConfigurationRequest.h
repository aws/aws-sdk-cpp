/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class CreateChimeWebhookConfigurationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API CreateChimeWebhookConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChimeWebhookConfiguration"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A description of the webhook. We recommend using the convention
     * <code>RoomName/WebhookName</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html">Tutorial:
     * Get started with Amazon Chime</a> in the <i> AWS Chatbot Administrator
     * Guide</i>. </p>
     */
    inline const Aws::String& GetWebhookDescription() const { return m_webhookDescription; }
    inline bool WebhookDescriptionHasBeenSet() const { return m_webhookDescriptionHasBeenSet; }
    template<typename WebhookDescriptionT = Aws::String>
    void SetWebhookDescription(WebhookDescriptionT&& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = std::forward<WebhookDescriptionT>(value); }
    template<typename WebhookDescriptionT = Aws::String>
    CreateChimeWebhookConfigurationRequest& WithWebhookDescription(WebhookDescriptionT&& value) { SetWebhookDescription(std::forward<WebhookDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the Amazon Chime webhook.</p>
     */
    inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
    template<typename WebhookUrlT = Aws::String>
    void SetWebhookUrl(WebhookUrlT&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::forward<WebhookUrlT>(value); }
    template<typename WebhookUrlT = Aws::String>
    CreateChimeWebhookConfigurationRequest& WithWebhookUrl(WebhookUrlT&& value) { SetWebhookUrl(std::forward<WebhookUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the SNS topics that deliver notifications
     * to AWS Chatbot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const { return m_snsTopicArns; }
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }
    template<typename SnsTopicArnsT = Aws::Vector<Aws::String>>
    void SetSnsTopicArns(SnsTopicArnsT&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::forward<SnsTopicArnsT>(value); }
    template<typename SnsTopicArnsT = Aws::Vector<Aws::String>>
    CreateChimeWebhookConfigurationRequest& WithSnsTopicArns(SnsTopicArnsT&& value) { SetSnsTopicArns(std::forward<SnsTopicArnsT>(value)); return *this;}
    template<typename SnsTopicArnsT = Aws::String>
    CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(SnsTopicArnsT&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.emplace_back(std::forward<SnsTopicArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-defined role that AWS Chatbot assumes. This is not the service-linked
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/chatbot-iam-policies.html">IAM
     * policies for AWS Chatbot</a> in the <i> AWS Chatbot Administrator Guide</i>.
     * </p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    CreateChimeWebhookConfigurationRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    CreateChimeWebhookConfigurationRequest& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging levels include <code>ERROR</code>, <code>INFO</code>, or
     * <code>NONE</code>.</p>
     */
    inline const Aws::String& GetLoggingLevel() const { return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    template<typename LoggingLevelT = Aws::String>
    void SetLoggingLevel(LoggingLevelT&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::forward<LoggingLevelT>(value); }
    template<typename LoggingLevelT = Aws::String>
    CreateChimeWebhookConfigurationRequest& WithLoggingLevel(LoggingLevelT&& value) { SetLoggingLevel(std::forward<LoggingLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateChimeWebhookConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateChimeWebhookConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_webhookDescription;
    bool m_webhookDescriptionHasBeenSet = false;

    Aws::String m_webhookUrl;
    bool m_webhookUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
