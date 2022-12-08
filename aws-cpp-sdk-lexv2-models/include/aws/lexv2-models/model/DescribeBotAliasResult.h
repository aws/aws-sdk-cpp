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
    AWS_LEXMODELSV2_API DescribeBotAliasResult();
    AWS_LEXMODELSV2_API DescribeBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasName = value; }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasName = std::move(value); }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetBotAliasName(const char* value) { m_botAliasName.assign(value); }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}

    /**
     * <p>The name of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}


    /**
     * <p>The description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the bot alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the bot alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the bot alias.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const{ return m_botAliasLocaleSettings; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline void SetBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { m_botAliasLocaleSettings = value; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline void SetBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { m_botAliasLocaleSettings = std::move(value); }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { SetBotAliasLocaleSettings(value); return *this;}

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { SetBotAliasLocaleSettings(std::move(value)); return *this;}

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(const char* key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The locale settings that are unique to the alias.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasLocaleSettings(const char* key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }


    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const{ return m_conversationLogSettings; }

    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline void SetConversationLogSettings(const ConversationLogSettings& value) { m_conversationLogSettings = value; }

    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline void SetConversationLogSettings(ConversationLogSettings&& value) { m_conversationLogSettings = std::move(value); }

    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline DescribeBotAliasResult& WithConversationLogSettings(const ConversationLogSettings& value) { SetConversationLogSettings(value); return *this;}

    /**
     * <p>Specifics of how Amazon Lex logs text and audio conversations with the bot
     * associated with the alias.</p>
     */
    inline DescribeBotAliasResult& WithConversationLogSettings(ConversationLogSettings&& value) { SetConversationLogSettings(std::move(value)); return *this;}


    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const{ return m_sentimentAnalysisSettings; }

    
    inline void SetSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { m_sentimentAnalysisSettings = value; }

    
    inline void SetSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { m_sentimentAnalysisSettings = std::move(value); }

    
    inline DescribeBotAliasResult& WithSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { SetSentimentAnalysisSettings(value); return *this;}

    
    inline DescribeBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { SetSentimentAnalysisSettings(std::move(value)); return *this;}


    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline const Aws::Vector<BotAliasHistoryEvent>& GetBotAliasHistoryEvents() const{ return m_botAliasHistoryEvents; }

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline void SetBotAliasHistoryEvents(const Aws::Vector<BotAliasHistoryEvent>& value) { m_botAliasHistoryEvents = value; }

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline void SetBotAliasHistoryEvents(Aws::Vector<BotAliasHistoryEvent>&& value) { m_botAliasHistoryEvents = std::move(value); }

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasHistoryEvents(const Aws::Vector<BotAliasHistoryEvent>& value) { SetBotAliasHistoryEvents(value); return *this;}

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasHistoryEvents(Aws::Vector<BotAliasHistoryEvent>&& value) { SetBotAliasHistoryEvents(std::move(value)); return *this;}

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasHistoryEvents(const BotAliasHistoryEvent& value) { m_botAliasHistoryEvents.push_back(value); return *this; }

    /**
     * <p>A list of events that affect a bot alias. For example, an event is recorded
     * when the version that the alias points to changes.</p>
     */
    inline DescribeBotAliasResult& AddBotAliasHistoryEvents(BotAliasHistoryEvent&& value) { m_botAliasHistoryEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline const BotAliasStatus& GetBotAliasStatus() const{ return m_botAliasStatus; }

    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline void SetBotAliasStatus(const BotAliasStatus& value) { m_botAliasStatus = value; }

    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline void SetBotAliasStatus(BotAliasStatus&& value) { m_botAliasStatus = std::move(value); }

    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasStatus(const BotAliasStatus& value) { SetBotAliasStatus(value); return *this;}

    /**
     * <p>The current status of the alias. When the alias is <code>Available</code>,
     * the alias is ready for use with your bot.</p>
     */
    inline DescribeBotAliasResult& WithBotAliasStatus(BotAliasStatus&& value) { SetBotAliasStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the bot alias.</p>
     */
    inline DescribeBotAliasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline DescribeBotAliasResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the alias was created.</p>
     */
    inline DescribeBotAliasResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline DescribeBotAliasResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the alias was last updated.</p>
     */
    inline DescribeBotAliasResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botAliasId;

    Aws::String m_botAliasName;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::Map<Aws::String, BotAliasLocaleSettings> m_botAliasLocaleSettings;

    ConversationLogSettings m_conversationLogSettings;

    SentimentAnalysisSettings m_sentimentAnalysisSettings;

    Aws::Vector<BotAliasHistoryEvent> m_botAliasHistoryEvents;

    BotAliasStatus m_botAliasStatus;

    Aws::String m_botId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
