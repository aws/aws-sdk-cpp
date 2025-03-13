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
    AWS_LEXMODELSV2_API BuildBotLocaleResult() = default;
    AWS_LEXMODELSV2_API BuildBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API BuildBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the specified bot.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    BuildBotLocaleResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that was built. This is only the draft version of the
     * bot.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    BuildBotLocaleResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified of where the bot can be used.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    BuildBotLocaleResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot's build status. When the status is <code>ReadyExpressTesting</code>
     * you can test the bot using the utterances defined for the intents and slot
     * types. When the status is <code>Built</code>, the bot is ready for use and can
     * be tested using any utterance.</p>
     */
    inline BotLocaleStatus GetBotLocaleStatus() const { return m_botLocaleStatus; }
    inline void SetBotLocaleStatus(BotLocaleStatus value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = value; }
    inline BuildBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus value) { SetBotLocaleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating the date and time that the bot was last built for this
     * locale.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const { return m_lastBuildSubmittedDateTime; }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    void SetLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { m_lastBuildSubmittedDateTimeHasBeenSet = true; m_lastBuildSubmittedDateTime = std::forward<LastBuildSubmittedDateTimeT>(value); }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    BuildBotLocaleResult& WithLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { SetLastBuildSubmittedDateTime(std::forward<LastBuildSubmittedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BuildBotLocaleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    BotLocaleStatus m_botLocaleStatus{BotLocaleStatus::NOT_SET};
    bool m_botLocaleStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime{};
    bool m_lastBuildSubmittedDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
