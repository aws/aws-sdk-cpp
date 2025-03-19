/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/UtteranceList.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetUtterancesViewResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    GetUtterancesViewResult& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version. Amazon Lex returns the most frequent utterances
     * received by the bot in the last 15 days.</p>
     */
    inline const Aws::Vector<UtteranceList>& GetUtterances() const { return m_utterances; }
    template<typename UtterancesT = Aws::Vector<UtteranceList>>
    void SetUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances = std::forward<UtterancesT>(value); }
    template<typename UtterancesT = Aws::Vector<UtteranceList>>
    GetUtterancesViewResult& WithUtterances(UtterancesT&& value) { SetUtterances(std::forward<UtterancesT>(value)); return *this;}
    template<typename UtterancesT = UtteranceList>
    GetUtterancesViewResult& AddUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances.emplace_back(std::forward<UtterancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUtterancesViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::Vector<UtteranceList> m_utterances;
    bool m_utterancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
