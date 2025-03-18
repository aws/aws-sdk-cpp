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
    AWS_LEXMODELSV2_API UpdateBotAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    UpdateBotAliasRequest& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name to assign to the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    UpdateBotAliasRequest& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description to assign to the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBotAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new bot version to assign to the bot alias.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UpdateBotAliasRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Lambda functions to use in each locale for the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const { return m_botAliasLocaleSettings; }
    inline bool BotAliasLocaleSettingsHasBeenSet() const { return m_botAliasLocaleSettingsHasBeenSet; }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    void SetBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::forward<BotAliasLocaleSettingsT>(value); }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    UpdateBotAliasRequest& WithBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { SetBotAliasLocaleSettings(std::forward<BotAliasLocaleSettingsT>(value)); return *this;}
    template<typename BotAliasLocaleSettingsKeyT = Aws::String, typename BotAliasLocaleSettingsValueT = BotAliasLocaleSettings>
    UpdateBotAliasRequest& AddBotAliasLocaleSettings(BotAliasLocaleSettingsKeyT&& key, BotAliasLocaleSettingsValueT&& value) {
      m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::forward<BotAliasLocaleSettingsKeyT>(key), std::forward<BotAliasLocaleSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The new settings for storing conversation logs in Amazon CloudWatch Logs and
     * Amazon S3 buckets.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const { return m_conversationLogSettings; }
    inline bool ConversationLogSettingsHasBeenSet() const { return m_conversationLogSettingsHasBeenSet; }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    void SetConversationLogSettings(ConversationLogSettingsT&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::forward<ConversationLogSettingsT>(value); }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    UpdateBotAliasRequest& WithConversationLogSettings(ConversationLogSettingsT&& value) { SetConversationLogSettings(std::forward<ConversationLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const { return m_sentimentAnalysisSettings; }
    inline bool SentimentAnalysisSettingsHasBeenSet() const { return m_sentimentAnalysisSettingsHasBeenSet; }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    void SetSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::forward<SentimentAnalysisSettingsT>(value); }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    UpdateBotAliasRequest& WithSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { SetSentimentAnalysisSettings(std::forward<SentimentAnalysisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotAliasRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}
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
