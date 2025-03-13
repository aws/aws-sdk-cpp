/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
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
  class StopBotRecommendationResult
  {
  public:
    AWS_LEXMODELSV2_API StopBotRecommendationResult() = default;
    AWS_LEXMODELSV2_API StopBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StopBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    StopBotRecommendationResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    StopBotRecommendationResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    StopBotRecommendationResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline BotRecommendationStatus GetBotRecommendationStatus() const { return m_botRecommendationStatus; }
    inline void SetBotRecommendationStatus(BotRecommendationStatus value) { m_botRecommendationStatusHasBeenSet = true; m_botRecommendationStatus = value; }
    inline StopBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus value) { SetBotRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const { return m_botRecommendationId; }
    template<typename BotRecommendationIdT = Aws::String>
    void SetBotRecommendationId(BotRecommendationIdT&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::forward<BotRecommendationIdT>(value); }
    template<typename BotRecommendationIdT = Aws::String>
    StopBotRecommendationResult& WithBotRecommendationId(BotRecommendationIdT&& value) { SetBotRecommendationId(std::forward<BotRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopBotRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    BotRecommendationStatus m_botRecommendationStatus{BotRecommendationStatus::NOT_SET};
    bool m_botRecommendationStatusHasBeenSet = false;

    Aws::String m_botRecommendationId;
    bool m_botRecommendationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
