﻿/**
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
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse() = default;
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ConversationLogsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for your conversation logs. You can log text, audio, or
     * both.</p>
     */
    inline const Aws::Vector<LogSettingsResponse>& GetLogSettings() const { return m_logSettings; }
    inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }
    template<typename LogSettingsT = Aws::Vector<LogSettingsResponse>>
    void SetLogSettings(LogSettingsT&& value) { m_logSettingsHasBeenSet = true; m_logSettings = std::forward<LogSettingsT>(value); }
    template<typename LogSettingsT = Aws::Vector<LogSettingsResponse>>
    ConversationLogsResponse& WithLogSettings(LogSettingsT&& value) { SetLogSettings(std::forward<LogSettingsT>(value)); return *this;}
    template<typename LogSettingsT = LogSettingsResponse>
    ConversationLogsResponse& AddLogSettings(LogSettingsT&& value) { m_logSettingsHasBeenSet = true; m_logSettings.emplace_back(std::forward<LogSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to write your logs to
     * CloudWatch Logs or an S3 bucket.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ConversationLogsResponse& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogSettingsResponse> m_logSettings;
    bool m_logSettingsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
