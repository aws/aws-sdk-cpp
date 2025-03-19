/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
#include <aws/lexv2-models/model/GenerativeAISettings.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateBotLocaleRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotLocaleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBotLocale"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotLocaleRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UpdateBotLocaleRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    UpdateBotLocaleRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the locale.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBotLocaleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const { return m_nluIntentConfidenceThreshold; }
    inline bool NluIntentConfidenceThresholdHasBeenSet() const { return m_nluIntentConfidenceThresholdHasBeenSet; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }
    inline UpdateBotLocaleRequest& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const { return m_voiceSettings; }
    inline bool VoiceSettingsHasBeenSet() const { return m_voiceSettingsHasBeenSet; }
    template<typename VoiceSettingsT = VoiceSettings>
    void SetVoiceSettings(VoiceSettingsT&& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = std::forward<VoiceSettingsT>(value); }
    template<typename VoiceSettingsT = VoiceSettings>
    UpdateBotLocaleRequest& WithVoiceSettings(VoiceSettingsT&& value) { SetVoiceSettings(std::forward<VoiceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for generative AI features powered by Amazon Bedrock for
     * your bot locale. Use this object to turn generative AI features on and off.
     * Pricing may differ if you turn a feature on. For more information, see LINK.</p>
     */
    inline const GenerativeAISettings& GetGenerativeAISettings() const { return m_generativeAISettings; }
    inline bool GenerativeAISettingsHasBeenSet() const { return m_generativeAISettingsHasBeenSet; }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    void SetGenerativeAISettings(GenerativeAISettingsT&& value) { m_generativeAISettingsHasBeenSet = true; m_generativeAISettings = std::forward<GenerativeAISettingsT>(value); }
    template<typename GenerativeAISettingsT = GenerativeAISettings>
    UpdateBotLocaleRequest& WithGenerativeAISettings(GenerativeAISettingsT&& value) { SetGenerativeAISettings(std::forward<GenerativeAISettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_nluIntentConfidenceThreshold{0.0};
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    VoiceSettings m_voiceSettings;
    bool m_voiceSettingsHasBeenSet = false;

    GenerativeAISettings m_generativeAISettings;
    bool m_generativeAISettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
