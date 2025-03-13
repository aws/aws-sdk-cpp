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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
#include <aws/lexv2-models/model/BotAliasHistoryEvent.h>
#include <aws/lexv2-models/model/ParentBotNetwork.h>
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
  class DescribeBotAliasResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotAliasResult() = default;
    AWS_LEXMODELSV2_API DescribeBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    DescribeBotAliasResult& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    DescribeBotAliasResult& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeBotAliasResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeBotAliasResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const { return m_botAliasLocaleSettings; }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    void SetBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::forward<BotAliasLocaleSettingsT>(value); }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    DescribeBotAliasResult& WithBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { SetBotAliasLocaleSettings(std::forward<BotAliasLocaleSettingsT>(value)); return *this;}
    template<typename BotAliasLocaleSettingsKeyT = Aws::String, typename BotAliasLocaleSettingsValueT = BotAliasLocaleSettings>
    DescribeBotAliasResult& AddBotAliasLocaleSettings(BotAliasLocaleSettingsKeyT&& key, BotAliasLocaleSettingsValueT&& value) {
      m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::forward<BotAliasLocaleSettingsKeyT>(key), std::forward<BotAliasLocaleSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const { return m_conversationLogSettings; }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    void SetConversationLogSettings(ConversationLogSettingsT&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::forward<ConversationLogSettingsT>(value); }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    DescribeBotAliasResult& WithConversationLogSettings(ConversationLogSettingsT&& value) { SetConversationLogSettings(std::forward<ConversationLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const { return m_sentimentAnalysisSettings; }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    void SetSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::forward<SentimentAnalysisSettingsT>(value); }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    DescribeBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { SetSentimentAnalysisSettings(std::forward<SentimentAnalysisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline const Aws::Vector<BotAliasHistoryEvent>& GetBotAliasHistoryEvents() const { return m_botAliasHistoryEvents; }
    template<typename BotAliasHistoryEventsT = Aws::Vector<BotAliasHistoryEvent>>
    void SetBotAliasHistoryEvents(BotAliasHistoryEventsT&& value) { m_botAliasHistoryEventsHasBeenSet = true; m_botAliasHistoryEvents = std::forward<BotAliasHistoryEventsT>(value); }
    template<typename BotAliasHistoryEventsT = Aws::Vector<BotAliasHistoryEvent>>
    DescribeBotAliasResult& WithBotAliasHistoryEvents(BotAliasHistoryEventsT&& value) { SetBotAliasHistoryEvents(std::forward<BotAliasHistoryEventsT>(value)); return *this;}
    template<typename BotAliasHistoryEventsT = BotAliasHistoryEvent>
    DescribeBotAliasResult& AddBotAliasHistoryEvents(BotAliasHistoryEventsT&& value) { m_botAliasHistoryEventsHasBeenSet = true; m_botAliasHistoryEvents.emplace_back(std::forward<BotAliasHistoryEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline BotAliasStatus GetBotAliasStatus() const { return m_botAliasStatus; }
    inline void SetBotAliasStatus(BotAliasStatus value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = value; }
    inline DescribeBotAliasResult& WithBotAliasStatus(BotAliasStatus value) { SetBotAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeBotAliasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeBotAliasResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeBotAliasResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the networks to which the bot alias you described belongs.</p>
     */
    inline const Aws::Vector<ParentBotNetwork>& GetParentBotNetworks() const { return m_parentBotNetworks; }
    template<typename ParentBotNetworksT = Aws::Vector<ParentBotNetwork>>
    void SetParentBotNetworks(ParentBotNetworksT&& value) { m_parentBotNetworksHasBeenSet = true; m_parentBotNetworks = std::forward<ParentBotNetworksT>(value); }
    template<typename ParentBotNetworksT = Aws::Vector<ParentBotNetwork>>
    DescribeBotAliasResult& WithParentBotNetworks(ParentBotNetworksT&& value) { SetParentBotNetworks(std::forward<ParentBotNetworksT>(value)); return *this;}
    template<typename ParentBotNetworksT = ParentBotNetwork>
    DescribeBotAliasResult& AddParentBotNetworks(ParentBotNetworksT&& value) { m_parentBotNetworksHasBeenSet = true; m_parentBotNetworks.emplace_back(std::forward<ParentBotNetworksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBotAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Vector<BotAliasHistoryEvent> m_botAliasHistoryEvents;
    bool m_botAliasHistoryEventsHasBeenSet = false;

    BotAliasStatus m_botAliasStatus{BotAliasStatus::NOT_SET};
    bool m_botAliasStatusHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Vector<ParentBotNetwork> m_parentBotNetworks;
    bool m_parentBotNetworksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
