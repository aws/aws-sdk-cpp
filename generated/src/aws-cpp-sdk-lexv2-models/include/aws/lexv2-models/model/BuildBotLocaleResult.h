﻿/**
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


    ///@{
    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline BuildBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline BuildBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline BuildBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline BuildBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BuildBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BuildBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline BuildBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline BuildBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline BuildBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }
    inline BuildBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}
    inline BuildBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const{ return m_lastBuildSubmittedDateTime; }
    inline void SetLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { m_lastBuildSubmittedDateTime = value; }
    inline void SetLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { m_lastBuildSubmittedDateTime = std::move(value); }
    inline BuildBotLocaleResult& WithLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { SetLastBuildSubmittedDateTime(value); return *this;}
    inline BuildBotLocaleResult& WithLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { SetLastBuildSubmittedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BuildBotLocaleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BuildBotLocaleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BuildBotLocaleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotLocaleStatus m_botLocaleStatus;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
