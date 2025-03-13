/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/GenerativeAISettings.h>
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
  class CreateBotLocaleResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotLocaleResult() = default;
    AWS_LEXMODELSV2_API CreateBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specified bot identifier.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotLocaleResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified bot version.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateBotLocaleResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified locale name.</p>
     */
    inline const Aws::String& GetLocaleName() const { return m_localeName; }
    template<typename LocaleNameT = Aws::String>
    void SetLocaleName(LocaleNameT&& value) { m_localeNameHasBeenSet = true; m_localeName = std::forward<LocaleNameT>(value); }
    template<typename LocaleNameT = Aws::String>
    CreateBotLocaleResult& WithLocaleName(LocaleNameT&& value) { SetLocaleName(std::forward<LocaleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified locale identifier.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    CreateBotLocaleResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBotLocaleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified confidence threshold for inserting the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const { return m_nluIntentConfidenceThreshold; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }
    inline CreateBotLocaleResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const { return m_voiceSettings; }
    template<typename VoiceSettingsT = VoiceSettings>
    void SetVoiceSettings(VoiceSettingsT&& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = std::forward<VoiceSettingsT>(value); }
    template<typename VoiceSettingsT = VoiceSettings>
    CreateBotLocaleResult& WithVoiceSettings(VoiceSettingsT&& value) { SetVoiceSettings(std::forward<VoiceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot.</p> <p>When the status is <code>Creating</code> the
     * bot locale is being configured. When the status is <code>Building</code> Amazon
     * Lex is building the bot for testing and use.</p> <p>If the status of the bot is
     * <code>ReadyExpressTesting</code>, you can test the bot using the exact
     * utterances specified in the bots' intents. When the bot is ready for full
     * testing or to run, the status is <code>Built</code>.</p> <p>If there was a
     * problem with building the bot, the status is <code>Failed</code>. If the bot was
     * saved but not built, the status is <code>NotBuilt</code>.</p>
     */
    inline BotLocaleStatus GetBotLocaleStatus() const { return m_botLocaleStatus; }
    inline void SetBotLocaleStatus(BotLocaleStatus value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = value; }
    inline CreateBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus value) { SetBotLocaleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    CreateBotLocaleResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GenerativeAISettings& GetGenerativeAISettings() const { return m_generativeAISettings; }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    void SetGenerativeAISettings(GenerativeAISettingsT&& value) { m_generativeAISettingsHasBeenSet = true; m_generativeAISettings = std::forward<GenerativeAISettingsT>(value); }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    CreateBotLocaleResult& WithGenerativeAISettings(GenerativeAISettingsT&& value) { SetGenerativeAISettings(std::forward<GenerativeAISettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBotLocaleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeName;
    bool m_localeNameHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_nluIntentConfidenceThreshold{0.0};
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    VoiceSettings m_voiceSettings;
    bool m_voiceSettingsHasBeenSet = false;

    BotLocaleStatus m_botLocaleStatus{BotLocaleStatus::NOT_SET};
    bool m_botLocaleStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    GenerativeAISettings m_generativeAISettings;
    bool m_generativeAISettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
