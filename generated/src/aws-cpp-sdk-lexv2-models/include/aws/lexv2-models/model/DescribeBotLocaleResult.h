/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotLocaleHistoryEvent.h>
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
  class DescribeBotLocaleResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotLocaleResult();
    AWS_LEXMODELSV2_API DescribeBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The name of the locale.</p>
     */
    inline const Aws::String& GetLocaleName() const{ return m_localeName; }

    /**
     * <p>The name of the locale.</p>
     */
    inline void SetLocaleName(const Aws::String& value) { m_localeName = value; }

    /**
     * <p>The name of the locale.</p>
     */
    inline void SetLocaleName(Aws::String&& value) { m_localeName = std::move(value); }

    /**
     * <p>The name of the locale.</p>
     */
    inline void SetLocaleName(const char* value) { m_localeName.assign(value); }

    /**
     * <p>The name of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleName(const Aws::String& value) { SetLocaleName(value); return *this;}

    /**
     * <p>The name of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleName(Aws::String&& value) { SetLocaleName(std::move(value)); return *this;}

    /**
     * <p>The name of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithLocaleName(const char* value) { SetLocaleName(value); return *this;}


    /**
     * <p>The description of the locale.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the locale.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the locale.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the locale.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the locale.</p>
     */
    inline DescribeBotLocaleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }

    /**
     * <p>The confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThreshold = value; }

    /**
     * <p>The confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline DescribeBotLocaleResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}


    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const{ return m_voiceSettings; }

    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline void SetVoiceSettings(const VoiceSettings& value) { m_voiceSettings = value; }

    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline void SetVoiceSettings(VoiceSettings&& value) { m_voiceSettings = std::move(value); }

    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline DescribeBotLocaleResult& WithVoiceSettings(const VoiceSettings& value) { SetVoiceSettings(value); return *this;}

    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline DescribeBotLocaleResult& WithVoiceSettings(VoiceSettings&& value) { SetVoiceSettings(std::move(value)); return *this;}


    /**
     * <p>The number of intents defined for the locale.</p>
     */
    inline int GetIntentsCount() const{ return m_intentsCount; }

    /**
     * <p>The number of intents defined for the locale.</p>
     */
    inline void SetIntentsCount(int value) { m_intentsCount = value; }

    /**
     * <p>The number of intents defined for the locale.</p>
     */
    inline DescribeBotLocaleResult& WithIntentsCount(int value) { SetIntentsCount(value); return *this;}


    /**
     * <p>The number of slot types defined for the locale.</p>
     */
    inline int GetSlotTypesCount() const{ return m_slotTypesCount; }

    /**
     * <p>The number of slot types defined for the locale.</p>
     */
    inline void SetSlotTypesCount(int value) { m_slotTypesCount = value; }

    /**
     * <p>The number of slot types defined for the locale.</p>
     */
    inline DescribeBotLocaleResult& WithSlotTypesCount(int value) { SetSlotTypesCount(value); return *this;}


    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }

    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }

    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }

    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}

    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}


    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline DescribeBotLocaleResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline DescribeBotLocaleResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline DescribeBotLocaleResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline DescribeBotLocaleResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline DescribeBotLocaleResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }


    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline DescribeBotLocaleResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline DescribeBotLocaleResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline DescribeBotLocaleResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline DescribeBotLocaleResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const{ return m_lastBuildSubmittedDateTime; }

    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline void SetLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { m_lastBuildSubmittedDateTime = value; }

    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline void SetLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { m_lastBuildSubmittedDateTime = std::move(value); }

    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline DescribeBotLocaleResult& WithLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { SetLastBuildSubmittedDateTime(value); return *this;}

    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline DescribeBotLocaleResult& WithLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { SetLastBuildSubmittedDateTime(std::move(value)); return *this;}


    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline const Aws::Vector<BotLocaleHistoryEvent>& GetBotLocaleHistoryEvents() const{ return m_botLocaleHistoryEvents; }

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline void SetBotLocaleHistoryEvents(const Aws::Vector<BotLocaleHistoryEvent>& value) { m_botLocaleHistoryEvents = value; }

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline void SetBotLocaleHistoryEvents(Aws::Vector<BotLocaleHistoryEvent>&& value) { m_botLocaleHistoryEvents = std::move(value); }

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotLocaleHistoryEvents(const Aws::Vector<BotLocaleHistoryEvent>& value) { SetBotLocaleHistoryEvents(value); return *this;}

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline DescribeBotLocaleResult& WithBotLocaleHistoryEvents(Aws::Vector<BotLocaleHistoryEvent>&& value) { SetBotLocaleHistoryEvents(std::move(value)); return *this;}

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline DescribeBotLocaleResult& AddBotLocaleHistoryEvents(const BotLocaleHistoryEvent& value) { m_botLocaleHistoryEvents.push_back(value); return *this; }

    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline DescribeBotLocaleResult& AddBotLocaleHistoryEvents(BotLocaleHistoryEvent&& value) { m_botLocaleHistoryEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const{ return m_recommendedActions; }

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline void SetRecommendedActions(const Aws::Vector<Aws::String>& value) { m_recommendedActions = value; }

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline void SetRecommendedActions(Aws::Vector<Aws::String>&& value) { m_recommendedActions = std::move(value); }

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& WithRecommendedActions(const Aws::Vector<Aws::String>& value) { SetRecommendedActions(value); return *this;}

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& WithRecommendedActions(Aws::Vector<Aws::String>&& value) { SetRecommendedActions(std::move(value)); return *this;}

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& AddRecommendedActions(const Aws::String& value) { m_recommendedActions.push_back(value); return *this; }

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& AddRecommendedActions(Aws::String&& value) { m_recommendedActions.push_back(std::move(value)); return *this; }

    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline DescribeBotLocaleResult& AddRecommendedActions(const char* value) { m_recommendedActions.push_back(value); return *this; }

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_localeName;

    Aws::String m_description;

    double m_nluIntentConfidenceThreshold;

    VoiceSettings m_voiceSettings;

    int m_intentsCount;

    int m_slotTypesCount;

    BotLocaleStatus m_botLocaleStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime;

    Aws::Vector<BotLocaleHistoryEvent> m_botLocaleHistoryEvents;

    Aws::Vector<Aws::String> m_recommendedActions;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
