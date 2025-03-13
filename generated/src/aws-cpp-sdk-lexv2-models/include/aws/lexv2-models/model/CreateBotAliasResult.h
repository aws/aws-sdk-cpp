/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/ConversationLogSettings.h>
#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class CreateBotAliasResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotAliasResult() = default;
    AWS_LEXMODELSV2_API CreateBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    CreateBotAliasResult& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    CreateBotAliasResult& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBotAliasResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with this alias.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateBotAliasResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for a specific locale.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const { return m_botAliasLocaleSettings; }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    void SetBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::forward<BotAliasLocaleSettingsT>(value); }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    CreateBotAliasResult& WithBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { SetBotAliasLocaleSettings(std::forward<BotAliasLocaleSettingsT>(value)); return *this;}
    template<typename BotAliasLocaleSettingsKeyT = Aws::String, typename BotAliasLocaleSettingsValueT = BotAliasLocaleSettings>
    CreateBotAliasResult& AddBotAliasLocaleSettings(BotAliasLocaleSettingsKeyT&& key, BotAliasLocaleSettingsValueT&& value) {
      m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::forward<BotAliasLocaleSettingsKeyT>(key), std::forward<BotAliasLocaleSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The conversation log settings specified for the alias.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const { return m_conversationLogSettings; }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    void SetConversationLogSettings(ConversationLogSettingsT&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::forward<ConversationLogSettingsT>(value); }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    CreateBotAliasResult& WithConversationLogSettings(ConversationLogSettingsT&& value) { SetConversationLogSettings(std::forward<ConversationLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const { return m_sentimentAnalysisSettings; }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    void SetSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::forward<SentimentAnalysisSettingsT>(value); }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    CreateBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { SetSentimentAnalysisSettings(std::forward<SentimentAnalysisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the alias. The alias is first put into the
     * <code>Creating</code> state. When the alias is ready to be used, it is put into
     * the <code>Available</code> state. You can use the <code>DescribeBotAlias</code>
     * operation to get the current state of an alias.</p>
     */
    inline BotAliasStatus GetBotAliasStatus() const { return m_botAliasStatus; }
    inline void SetBotAliasStatus(BotAliasStatus value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = value; }
    inline CreateBotAliasResult& WithBotAliasStatus(BotAliasStatus value) { SetBotAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot that this alias applies to.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotAliasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Unix timestamp indicating the date and time that the bot alias was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    CreateBotAliasResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBotAliasResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateBotAliasResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBotAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    BotAliasStatus m_botAliasStatus{BotAliasStatus::NOT_SET};
    bool m_botAliasStatusHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
