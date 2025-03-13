/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides the bot locale parameters required for importing a bot
   * locale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleImportSpecification">AWS
   * API Reference</a></p>
   */
  class BotLocaleImportSpecification
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleImportSpecification() = default;
    AWS_LEXMODELSV2_API BotLocaleImportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleImportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the bot to import the locale to.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    BotLocaleImportSpecification& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot to import the locale to. This can only be the
     * <code>DRAFT</code> version of the bot.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    BotLocaleImportSpecification& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    BotLocaleImportSpecification& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the threshold where Amazon Lex will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents. <code>AMAZON.FallbackIntent</code> and
     * <code>AMAZON.KendraSearchIntent</code> are only inserted if they are configured
     * for the bot. </p> <p>For example, suppose a bot is configured with the
     * confidence threshold of 0.80 and the <code>AMAZON.FallbackIntent</code>. Amazon
     * Lex returns three alternative intents with the following confidence scores:
     * IntentA (0.70), IntentB (0.60), IntentC (0.50). The response from the
     * <code>PostText</code> operation would be:</p> <ul> <li> <p>
     * <code>AMAZON.FallbackIntent</code> </p> </li> <li> <p> <code>IntentA</code> </p>
     * </li> <li> <p> <code>IntentB</code> </p> </li> <li> <p> <code>IntentC</code>
     * </p> </li> </ul>
     */
    inline double GetNluIntentConfidenceThreshold() const { return m_nluIntentConfidenceThreshold; }
    inline bool NluIntentConfidenceThresholdHasBeenSet() const { return m_nluIntentConfidenceThresholdHasBeenSet; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }
    inline BotLocaleImportSpecification& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    
    inline const VoiceSettings& GetVoiceSettings() const { return m_voiceSettings; }
    inline bool VoiceSettingsHasBeenSet() const { return m_voiceSettingsHasBeenSet; }
    template<typename VoiceSettingsT = VoiceSettings>
    void SetVoiceSettings(VoiceSettingsT&& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = std::forward<VoiceSettingsT>(value); }
    template<typename VoiceSettingsT = VoiceSettings>
    BotLocaleImportSpecification& WithVoiceSettings(VoiceSettingsT&& value) { SetVoiceSettings(std::forward<VoiceSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    double m_nluIntentConfidenceThreshold{0.0};
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    VoiceSettings m_voiceSettings;
    bool m_voiceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
