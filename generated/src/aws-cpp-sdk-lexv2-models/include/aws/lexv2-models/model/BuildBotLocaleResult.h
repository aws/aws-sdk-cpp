/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BuildBotLocaleResult
  {
  public:
    AWS_LEXMODELSV2_API BuildBotLocaleResult();
    AWS_LEXMODELSV2_API BuildBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API BuildBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline BuildBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline BuildBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline BuildBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline BuildBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline BuildBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline BuildBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }

    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }

    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }

    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline BuildBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}

    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline BuildBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const{ return m_lastBuildSubmittedDateTime; }

    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline void SetLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { m_lastBuildSubmittedDateTime = value; }

    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline void SetLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { m_lastBuildSubmittedDateTime = std::move(value); }

    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline BuildBotLocaleResult& WithLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { SetLastBuildSubmittedDateTime(value); return *this;}

    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline BuildBotLocaleResult& WithLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { SetLastBuildSubmittedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotLocaleStatus m_botLocaleStatus;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
