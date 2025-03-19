/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SampleUtterance.h>
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
  class GenerateBotElementResult
  {
  public:
    AWS_LEXMODELSV2_API GenerateBotElementResult() = default;
    AWS_LEXMODELSV2_API GenerateBotElementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API GenerateBotElementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    GenerateBotElementResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    GenerateBotElementResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    GenerateBotElementResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    GenerateBotElementResult& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const { return m_sampleUtterances; }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    GenerateBotElementResult& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = SampleUtterance>
    GenerateBotElementResult& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateBotElementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    Aws::Vector<SampleUtterance> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
