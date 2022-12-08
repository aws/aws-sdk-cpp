/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/LogSettingsResponse.h>
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
   * <p>Contains information about conversation log settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ConversationLogsResponse">AWS
   * API Reference</a></p>
   */
  class ConversationLogsResponse
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse();
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline const Aws::Vector<LogSettingsResponse>& GetLogSettings() const{ return m_logSettings; }

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline void SetLogSettings(const Aws::Vector<LogSettingsResponse>& value) { m_logSettingsHasBeenSet = true; m_logSettings = value; }

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline void SetLogSettings(Aws::Vector<LogSettingsResponse>&& value) { m_logSettingsHasBeenSet = true; m_logSettings = std::move(value); }

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline ConversationLogsResponse& WithLogSettings(const Aws::Vector<LogSettingsResponse>& value) { SetLogSettings(value); return *this;}

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline ConversationLogsResponse& WithLogSettings(Aws::Vector<LogSettingsResponse>&& value) { SetLogSettings(std::move(value)); return *this;}

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline ConversationLogsResponse& AddLogSettings(const LogSettingsResponse& value) { m_logSettingsHasBeenSet = true; m_logSettings.push_back(value); return *this; }

    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline ConversationLogsResponse& AddLogSettings(LogSettingsResponse&& value) { m_logSettingsHasBeenSet = true; m_logSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline ConversationLogsResponse& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline ConversationLogsResponse& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline ConversationLogsResponse& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::Vector<LogSettingsResponse> m_logSettings;
    bool m_logSettingsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
