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
    AWS_CHATBOT_API CreateChimeWebhookConfigurationRequest();

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
    inline const Aws::String& GetWebhookDescription() const{ return m_webhookDescription; }
    inline bool WebhookDescriptionHasBeenSet() const { return m_webhookDescriptionHasBeenSet; }
    inline void SetWebhookDescription(const Aws::String& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = value; }
    inline void SetWebhookDescription(Aws::String&& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = std::move(value); }
    inline void SetWebhookDescription(const char* value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription.assign(value); }
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(const Aws::String& value) { SetWebhookDescription(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(Aws::String&& value) { SetWebhookDescription(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(const char* value) { SetWebhookDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the Amazon Chime webhook.</p>
     */
    inline const Aws::String& GetWebhookUrl() const{ return m_webhookUrl; }
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
    inline void SetWebhookUrl(const Aws::String& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = value; }
    inline void SetWebhookUrl(Aws::String&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::move(value); }
    inline void SetWebhookUrl(const char* value) { m_webhookUrlHasBeenSet = true; m_webhookUrl.assign(value); }
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(const Aws::String& value) { SetWebhookUrl(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(Aws::String&& value) { SetWebhookUrl(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(const char* value) { SetWebhookUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the SNS topics that deliver notifications
     * to AWS Chatbot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }
    inline CreateChimeWebhookConfigurationRequest& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-defined role that AWS Chatbot assumes. This is not the service-linked
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/chatbot-iam-policies.html">IAM
     * policies for AWS Chatbot</a> in the <i> AWS Chatbot Administrator Guide</i>.
     * </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging levels include <code>ERROR</code>, <code>INFO</code>, or
     * <code>NONE</code>.</p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateChimeWebhookConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateChimeWebhookConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateChimeWebhookConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateChimeWebhookConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
