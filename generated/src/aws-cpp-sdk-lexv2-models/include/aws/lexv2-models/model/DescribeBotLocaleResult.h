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
#include <aws/lexv2-models/model/GenerativeAISettings.h>
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
    AWS_LEXMODELSV2_API DescribeBotLocaleResult() = default;
    AWS_LEXMODELSV2_API DescribeBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot associated with the locale.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeBotLocaleResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the locale.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeBotLocaleResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the described locale.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeBotLocaleResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the locale.</p>
     */
    inline const Aws::String& GetLocaleName() const { return m_localeName; }
    template<typename LocaleNameT = Aws::String>
    void SetLocaleName(LocaleNameT&& value) { m_localeNameHasBeenSet = true; m_localeName = std::forward<LocaleNameT>(value); }
    template<typename LocaleNameT = Aws::String>
    DescribeBotLocaleResult& WithLocaleName(LocaleNameT&& value) { SetLocaleName(std::forward<LocaleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the locale.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeBotLocaleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const { return m_nluIntentConfidenceThreshold; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }
    inline DescribeBotLocaleResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Polly voice Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const { return m_voiceSettings; }
    template<typename VoiceSettingsT = VoiceSettings>
    void SetVoiceSettings(VoiceSettingsT&& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = std::forward<VoiceSettingsT>(value); }
    template<typename VoiceSettingsT = VoiceSettings>
    DescribeBotLocaleResult& WithVoiceSettings(VoiceSettingsT&& value) { SetVoiceSettings(std::forward<VoiceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of intents defined for the locale.</p>
     */
    inline int GetIntentsCount() const { return m_intentsCount; }
    inline void SetIntentsCount(int value) { m_intentsCountHasBeenSet = true; m_intentsCount = value; }
    inline DescribeBotLocaleResult& WithIntentsCount(int value) { SetIntentsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of slot types defined for the locale.</p>
     */
    inline int GetSlotTypesCount() const { return m_slotTypesCount; }
    inline void SetSlotTypesCount(int value) { m_slotTypesCountHasBeenSet = true; m_slotTypesCount = value; }
    inline DescribeBotLocaleResult& WithSlotTypesCount(int value) { SetSlotTypesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot. If the status is <code>Failed</code>, the reasons for
     * the failure are listed in the <code>failureReasons</code> field.</p>
     */
    inline BotLocaleStatus GetBotLocaleStatus() const { return m_botLocaleStatus; }
    inline void SetBotLocaleStatus(BotLocaleStatus value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = value; }
    inline DescribeBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus value) { SetBotLocaleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>if <code>botLocaleStatus</code> is <code>Failed</code>, Amazon Lex explains
     * why it failed to build the bot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeBotLocaleResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeBotLocaleResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the locale was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeBotLocaleResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the locale was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeBotLocaleResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the locale was last submitted for building.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const { return m_lastBuildSubmittedDateTime; }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    void SetLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { m_lastBuildSubmittedDateTimeHasBeenSet = true; m_lastBuildSubmittedDateTime = std::forward<LastBuildSubmittedDateTimeT>(value); }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    DescribeBotLocaleResult& WithLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { SetLastBuildSubmittedDateTime(std::forward<LastBuildSubmittedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>History of changes, such as when a locale is used in an alias, that have
     * taken place for the locale.</p>
     */
    inline const Aws::Vector<BotLocaleHistoryEvent>& GetBotLocaleHistoryEvents() const { return m_botLocaleHistoryEvents; }
    template<typename BotLocaleHistoryEventsT = Aws::Vector<BotLocaleHistoryEvent>>
    void SetBotLocaleHistoryEvents(BotLocaleHistoryEventsT&& value) { m_botLocaleHistoryEventsHasBeenSet = true; m_botLocaleHistoryEvents = std::forward<BotLocaleHistoryEventsT>(value); }
    template<typename BotLocaleHistoryEventsT = Aws::Vector<BotLocaleHistoryEvent>>
    DescribeBotLocaleResult& WithBotLocaleHistoryEvents(BotLocaleHistoryEventsT&& value) { SetBotLocaleHistoryEvents(std::forward<BotLocaleHistoryEventsT>(value)); return *this;}
    template<typename BotLocaleHistoryEventsT = BotLocaleHistoryEvent>
    DescribeBotLocaleResult& AddBotLocaleHistoryEvents(BotLocaleHistoryEventsT&& value) { m_botLocaleHistoryEventsHasBeenSet = true; m_botLocaleHistoryEvents.emplace_back(std::forward<BotLocaleHistoryEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const { return m_recommendedActions; }
    template<typename RecommendedActionsT = Aws::Vector<Aws::String>>
    void SetRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::forward<RecommendedActionsT>(value); }
    template<typename RecommendedActionsT = Aws::Vector<Aws::String>>
    DescribeBotLocaleResult& WithRecommendedActions(RecommendedActionsT&& value) { SetRecommendedActions(std::forward<RecommendedActionsT>(value)); return *this;}
    template<typename RecommendedActionsT = Aws::String>
    DescribeBotLocaleResult& AddRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.emplace_back(std::forward<RecommendedActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains settings for Amazon Bedrock's generative AI features for your bot
     * locale.</p>
     */
    inline const GenerativeAISettings& GetGenerativeAISettings() const { return m_generativeAISettings; }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    void SetGenerativeAISettings(GenerativeAISettingsT&& value) { m_generativeAISettingsHasBeenSet = true; m_generativeAISettings = std::forward<GenerativeAISettingsT>(value); }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    DescribeBotLocaleResult& WithGenerativeAISettings(GenerativeAISettingsT&& value) { SetGenerativeAISettings(std::forward<GenerativeAISettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBotLocaleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_localeName;
    bool m_localeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_nluIntentConfidenceThreshold{0.0};
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    VoiceSettings m_voiceSettings;
    bool m_voiceSettingsHasBeenSet = false;

    int m_intentsCount{0};
    bool m_intentsCountHasBeenSet = false;

    int m_slotTypesCount{0};
    bool m_slotTypesCountHasBeenSet = false;

    BotLocaleStatus m_botLocaleStatus{BotLocaleStatus::NOT_SET};
    bool m_botLocaleStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime{};
    bool m_lastBuildSubmittedDateTimeHasBeenSet = false;

    Aws::Vector<BotLocaleHistoryEvent> m_botLocaleHistoryEvents;
    bool m_botLocaleHistoryEventsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    GenerativeAISettings m_generativeAISettings;
    bool m_generativeAISettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
