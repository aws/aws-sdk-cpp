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
    AWS_LEXMODELSV2_API CreateBotLocaleResult();
    AWS_LEXMODELSV2_API CreateBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The specified bot identifier.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The specified bot identifier.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The specified bot identifier.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The specified bot identifier.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The specified bot identifier.</p>
     */
    inline CreateBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The specified bot identifier.</p>
     */
    inline CreateBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The specified bot identifier.</p>
     */
    inline CreateBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The specified bot version.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The specified bot version.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The specified bot version.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The specified bot version.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The specified bot version.</p>
     */
    inline CreateBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The specified bot version.</p>
     */
    inline CreateBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The specified bot version.</p>
     */
    inline CreateBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The specified locale name.</p>
     */
    inline const Aws::String& GetLocaleName() const{ return m_localeName; }

    /**
     * <p>The specified locale name.</p>
     */
    inline void SetLocaleName(const Aws::String& value) { m_localeName = value; }

    /**
     * <p>The specified locale name.</p>
     */
    inline void SetLocaleName(Aws::String&& value) { m_localeName = std::move(value); }

    /**
     * <p>The specified locale name.</p>
     */
    inline void SetLocaleName(const char* value) { m_localeName.assign(value); }

    /**
     * <p>The specified locale name.</p>
     */
    inline CreateBotLocaleResult& WithLocaleName(const Aws::String& value) { SetLocaleName(value); return *this;}

    /**
     * <p>The specified locale name.</p>
     */
    inline CreateBotLocaleResult& WithLocaleName(Aws::String&& value) { SetLocaleName(std::move(value)); return *this;}

    /**
     * <p>The specified locale name.</p>
     */
    inline CreateBotLocaleResult& WithLocaleName(const char* value) { SetLocaleName(value); return *this;}


    /**
     * <p>The specified locale identifier.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The specified locale identifier.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The specified locale identifier.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The specified locale identifier.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The specified locale identifier.</p>
     */
    inline CreateBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The specified locale identifier.</p>
     */
    inline CreateBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The specified locale identifier.</p>
     */
    inline CreateBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline CreateBotLocaleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline CreateBotLocaleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The specified description of the bot locale.</p>
     */
    inline CreateBotLocaleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The specified confidence threshold for inserting the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }

    /**
     * <p>The specified confidence threshold for inserting the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents.</p>
     */
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThreshold = value; }

    /**
     * <p>The specified confidence threshold for inserting the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents.</p>
     */
    inline CreateBotLocaleResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}


    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const{ return m_voiceSettings; }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline void SetVoiceSettings(const VoiceSettings& value) { m_voiceSettings = value; }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline void SetVoiceSettings(VoiceSettings&& value) { m_voiceSettings = std::move(value); }

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline CreateBotLocaleResult& WithVoiceSettings(const VoiceSettings& value) { SetVoiceSettings(value); return *this;}

    /**
     * <p>The Amazon Polly voice ID that Amazon Lex uses for voice interaction with the
     * user.</p>
     */
    inline CreateBotLocaleResult& WithVoiceSettings(VoiceSettings&& value) { SetVoiceSettings(std::move(value)); return *this;}


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
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }

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
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }

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
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }

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
    inline CreateBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}

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
    inline CreateBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline CreateBotLocaleResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp specifying the date and time that the bot locale was created.</p>
     */
    inline CreateBotLocaleResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeName;

    Aws::String m_localeId;

    Aws::String m_description;

    double m_nluIntentConfidenceThreshold;

    VoiceSettings m_voiceSettings;

    BotLocaleStatus m_botLocaleStatus;

    Aws::Utils::DateTime m_creationDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
