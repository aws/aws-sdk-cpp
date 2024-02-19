/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    inline ChimeWebhookConfiguration& WithWebhookDescription(const Aws::String& value) { SetWebhookDescription(value); return *this;}

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline ChimeWebhookConfiguration& WithWebhookDescription(Aws::String&& value) { SetWebhookDescription(std::move(value)); return *this;}

    /**
     * Description of the webhook. Recommend using the convention
     * `RoomName/WebhookName`. See Chime setup tutorial for more details:
     * https://docs.aws.amazon.com/chatbot/latest/adminguide/chime-setup.html.
     */
    inline ChimeWebhookConfiguration& WithWebhookDescription(const char* value) { SetWebhookDescription(value); return *this;}


    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}

    /**
     * The ARN of the ChimeWebhookConfiguration.
     */
    inline ChimeWebhookConfiguration& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}


    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


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
    inline ChimeWebhookConfiguration& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline ChimeWebhookConfiguration& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }


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
    inline ChimeWebhookConfiguration& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * The name of the configuration.
     */
    inline ChimeWebhookConfiguration& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * The name of the configuration.
     */
    inline ChimeWebhookConfiguration& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline ChimeWebhookConfiguration& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline ChimeWebhookConfiguration& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * Specifies the logging level for this configuration. This property affects the
     * log entries pushed to Amazon CloudWatch Logs.Logging levels include ERROR, INFO,
     * or NONE.
     */
    inline ChimeWebhookConfiguration& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}

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
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
