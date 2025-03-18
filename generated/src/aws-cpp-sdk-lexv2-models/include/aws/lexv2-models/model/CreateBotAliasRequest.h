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
  class CreateBotAliasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateBotAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    CreateBotAliasRequest& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBotAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateBotAliasRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const { return m_botAliasLocaleSettings; }
    inline bool BotAliasLocaleSettingsHasBeenSet() const { return m_botAliasLocaleSettingsHasBeenSet; }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    void SetBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::forward<BotAliasLocaleSettingsT>(value); }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    CreateBotAliasRequest& WithBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { SetBotAliasLocaleSettings(std::forward<BotAliasLocaleSettingsT>(value)); return *this;}
    template<typename BotAliasLocaleSettingsKeyT = Aws::String, typename BotAliasLocaleSettingsValueT = BotAliasLocaleSettings>
    CreateBotAliasRequest& AddBotAliasLocaleSettings(BotAliasLocaleSettingsKeyT&& key, BotAliasLocaleSettingsValueT&& value) {
      m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::forward<BotAliasLocaleSettingsKeyT>(key), std::forward<BotAliasLocaleSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const { return m_conversationLogSettings; }
    inline bool ConversationLogSettingsHasBeenSet() const { return m_conversationLogSettingsHasBeenSet; }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    void SetConversationLogSettings(ConversationLogSettingsT&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::forward<ConversationLogSettingsT>(value); }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    CreateBotAliasRequest& WithConversationLogSettings(ConversationLogSettingsT&& value) { SetConversationLogSettings(std::forward<ConversationLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const { return m_sentimentAnalysisSettings; }
    inline bool SentimentAnalysisSettingsHasBeenSet() const { return m_sentimentAnalysisSettingsHasBeenSet; }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    void SetSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::forward<SentimentAnalysisSettingsT>(value); }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    CreateBotAliasRequest& WithSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { SetSentimentAnalysisSettings(std::forward<SentimentAnalysisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotAliasRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBotAliasRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateBotAliasRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
