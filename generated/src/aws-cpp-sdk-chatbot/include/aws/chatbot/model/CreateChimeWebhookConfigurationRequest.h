/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline const Aws::String& GetWebhookDescription() const{ return m_webhookDescription; }

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline bool WebhookDescriptionHasBeenSet() const { return m_webhookDescriptionHasBeenSet; }

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline void SetWebhookDescription(const Aws::String& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = value; }

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline void SetWebhookDescription(Aws::String&& value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription = std::move(value); }

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline void SetWebhookDescription(const char* value) { m_webhookDescriptionHasBeenSet = true; m_webhookDescription.assign(value); }

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(const Aws::String& value) { SetWebhookDescription(value); return *this;}

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(Aws::String&& value) { SetWebhookDescription(std::move(value)); return *this;}

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookDescription(const char* value) { SetWebhookDescription(value); return *this;}


    /**
     * URL for the Chime webhook.
     */
    inline const Aws::String& GetWebhookUrl() const{ return m_webhookUrl; }

    /**
     * URL for the Chime webhook.
     */
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }

    /**
     * URL for the Chime webhook.
     */
    inline void SetWebhookUrl(const Aws::String& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = value; }

    /**
     * URL for the Chime webhook.
     */
    inline void SetWebhookUrl(Aws::String&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::move(value); }

    /**
     * URL for the Chime webhook.
     */
    inline void SetWebhookUrl(const char* value) { m_webhookUrlHasBeenSet = true; m_webhookUrl.assign(value); }

    /**
     * URL for the Chime webhook.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(const Aws::String& value) { SetWebhookUrl(value); return *this;}

    /**
     * URL for the Chime webhook.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(Aws::String&& value) { SetWebhookUrl(std::move(value)); return *this;}

    /**
     * URL for the Chime webhook.
     */
    inline CreateChimeWebhookConfigurationRequest& WithWebhookUrl(const char* value) { SetWebhookUrl(value); return *this;}


    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }


    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * This is a user-defined role that AWS Chatbot will assume. This is not the
     * service-linked role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateChimeWebhookConfigurationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The name of the configuration.
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * The name of the configuration.
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * The name of the configuration.
     */
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * The name of the configuration.
     */
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * The name of the configuration.
     */
    inline CreateChimeWebhookConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateChimeWebhookConfigurationRequest& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}

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
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
