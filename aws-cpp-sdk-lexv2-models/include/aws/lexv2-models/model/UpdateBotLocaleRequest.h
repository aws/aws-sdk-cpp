/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
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
    AWS_LEXMODELSV2_API UpdateBotLocaleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBotLocale"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline UpdateBotLocaleRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline UpdateBotLocaleRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the locale to be updated. The version
     * can only be the <code>DRAFT</code> version.</p>
     */
    inline UpdateBotLocaleRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateBotLocaleRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateBotLocaleRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale to update. The string must match
     * one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateBotLocaleRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The new description of the locale.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the locale.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the locale.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the locale.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the locale.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the locale.</p>
     */
    inline UpdateBotLocaleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }

    /**
     * <p>The new confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline bool NluIntentConfidenceThresholdHasBeenSet() const { return m_nluIntentConfidenceThresholdHasBeenSet; }

    /**
     * <p>The new confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThresholdHasBeenSet = true; m_nluIntentConfidenceThreshold = value; }

    /**
     * <p>The new confidence threshold where Amazon Lex inserts the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline UpdateBotLocaleRequest& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}


    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const{ return m_voiceSettings; }

    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline bool VoiceSettingsHasBeenSet() const { return m_voiceSettingsHasBeenSet; }

    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline void SetVoiceSettings(const VoiceSettings& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = value; }

    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline void SetVoiceSettings(VoiceSettings&& value) { m_voiceSettingsHasBeenSet = true; m_voiceSettings = std::move(value); }

    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline UpdateBotLocaleRequest& WithVoiceSettings(const VoiceSettings& value) { SetVoiceSettings(value); return *this;}

    /**
     * <p>The new Amazon Polly voice Amazon Lex should use for voice interaction with
     * the user.</p>
     */
    inline UpdateBotLocaleRequest& WithVoiceSettings(VoiceSettings&& value) { SetVoiceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_nluIntentConfidenceThreshold;
    bool m_nluIntentConfidenceThresholdHasBeenSet = false;

    VoiceSettings m_voiceSettings;
    bool m_voiceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
