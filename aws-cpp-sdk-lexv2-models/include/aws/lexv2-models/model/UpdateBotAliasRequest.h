/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/ConversationLogSettings.h>
#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateBotAliasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = value; }

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::move(value); }

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline void SetBotAliasName(const char* value) { m_botAliasNameHasBeenSet = true; m_botAliasName.assign(value); }

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}

    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}


    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const{ return m_botAliasLocaleSettings; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline bool BotAliasLocaleSettingsHasBeenSet() const { return m_botAliasLocaleSettingsHasBeenSet; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline void SetBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = value; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline void SetBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::move(value); }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { SetBotAliasLocaleSettings(value); return *this;}

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { SetBotAliasLocaleSettings(std::move(value)); return *this;}

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(const Aws::String& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, value); return *this; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(Aws::String&& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(const Aws::String& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(Aws::String&& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(const char* key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasRequest& AddBotAliasLocaleSettings(const char* key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, value); return *this; }


    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const{ return m_conversationLogSettings; }

    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline bool ConversationLogSettingsHasBeenSet() const { return m_conversationLogSettingsHasBeenSet; }

    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline void SetConversationLogSettings(const ConversationLogSettings& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = value; }

    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline void SetConversationLogSettings(ConversationLogSettings&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::move(value); }

    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline UpdateBotAliasRequest& WithConversationLogSettings(const ConversationLogSettings& value) { SetConversationLogSettings(value); return *this;}

    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline UpdateBotAliasRequest& WithConversationLogSettings(ConversationLogSettings&& value) { SetConversationLogSettings(std::move(value)); return *this;}


    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const{ return m_sentimentAnalysisSettings; }

    
    inline bool SentimentAnalysisSettingsHasBeenSet() const { return m_sentimentAnalysisSettingsHasBeenSet; }

    
    inline void SetSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = value; }

    
    inline void SetSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::move(value); }

    
    inline UpdateBotAliasRequest& WithSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { SetSentimentAnalysisSettings(value); return *this;}

    
    inline UpdateBotAliasRequest& WithSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { SetSentimentAnalysisSettings(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}

  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botAliasName;
    bool m_botAliasNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Map<Aws::String, BotAliasLocaleSettings> m_botAliasLocaleSettings;
    bool m_botAliasLocaleSettingsHasBeenSet = false;

    ConversationLogSettings m_conversationLogSettings;
    bool m_conversationLogSettingsHasBeenSet = false;

    SentimentAnalysisSettings m_sentimentAnalysisSettings;
    bool m_sentimentAnalysisSettingsHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
