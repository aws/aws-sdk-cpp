/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/LogSettingsRequest.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides the settings needed for conversation logs.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ConversationLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConversationLogsRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest();
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline const Aws::Vector<LogSettingsRequest>& GetLogSettings() const{ return m_logSettings; }

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline void SetLogSettings(const Aws::Vector<LogSettingsRequest>& value) { m_logSettingsHasBeenSet = true; m_logSettings = value; }

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline void SetLogSettings(Aws::Vector<LogSettingsRequest>&& value) { m_logSettingsHasBeenSet = true; m_logSettings = std::move(value); }

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline ConversationLogsRequest& WithLogSettings(const Aws::Vector<LogSettingsRequest>& value) { SetLogSettings(value); return *this;}

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline ConversationLogsRequest& WithLogSettings(Aws::Vector<LogSettingsRequest>&& value) { SetLogSettings(std::move(value)); return *this;}

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline ConversationLogsRequest& AddLogSettings(const LogSettingsRequest& value) { m_logSettingsHasBeenSet = true; m_logSettings.push_back(value); return *this; }

    /**
     * <p>The settings for your conversation logs. You can log the conversation text,
     * conversation audio, or both.</p>
     */
    inline ConversationLogsRequest& AddLogSettings(LogSettingsRequest&& value) { m_logSettingsHasBeenSet = true; m_logSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline ConversationLogsRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline ConversationLogsRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to write to
     * your CloudWatch Logs for text logs and your S3 bucket for audio logs. If audio
     * encryption is enabled, this role also provides access permission for the AWS KMS
     * key used for encrypting audio logs. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/conversation-logs-role-and-policy.html">Creating
     * an IAM Role and Policy for Conversation Logs</a>.</p>
     */
    inline ConversationLogsRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::Vector<LogSettingsRequest> m_logSettings;
    bool m_logSettingsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
