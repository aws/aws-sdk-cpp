﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/Tag.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * An AWS Chatbot configuration for Amazon Chime.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ChimeWebhookConfiguration">AWS
   * API Reference</a></p>
   */
  class ChimeWebhookConfiguration
  {
  public:
    AWS_CHATBOT_API ChimeWebhookConfiguration();
    AWS_CHATBOT_API ChimeWebhookConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API ChimeWebhookConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline const Aws::String& GetWebhookDescription() const{ return m_webhookDescription; }
    inline bool WebhookDescriptionHasBeenSet() const { return m_webhookDescriptionHasBeenSet; }
    inline void SetWebhookDescription(const Aws::String& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = value; }
    inline void SetWebhookDescription(Aws::String&& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = std::move(value); }
    inline void SetWebhookDescription(const char* value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription.assign(value); }
    inline ChimeWebhookConfiguration& WithWebhookDescription(const Aws::String& value) { SetWebhookDescription(value); return *this;}
    inline ChimeWebhookConfiguration& WithWebhookDescription(Aws::String&& value) { SetWebhookDescription(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& WithWebhookDescription(const char* value) { SetWebhookDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline ChimeWebhookConfiguration& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline ChimeWebhookConfiguration& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }
    inline ChimeWebhookConfiguration& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}
    inline ChimeWebhookConfiguration& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    inline ChimeWebhookConfiguration& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }
    inline ChimeWebhookConfiguration& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The name of the configuration.
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline ChimeWebhookConfiguration& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline ChimeWebhookConfiguration& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }
    inline ChimeWebhookConfiguration& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline ChimeWebhookConfiguration& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of tags applied to the configuration.
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ChimeWebhookConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ChimeWebhookConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ChimeWebhookConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ChimeWebhookConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_webhookDescription;
    bool m_webhookDescriptionHasBeenSet = false;

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

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
