/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/UtteranceSpecification.h>
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
  class ListUtteranceAnalyticsDataResult
  {
  public:
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult() = default;
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListUtteranceAnalyticsDataResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUtteranceAnalyticsDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline const Aws::Vector<UtteranceSpecification>& GetUtterances() const { return m_utterances; }
    template<typename UtterancesT = Aws::Vector<UtteranceSpecification>>
    void SetUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances = std::forward<UtterancesT>(value); }
    template<typename UtterancesT = Aws::Vector<UtteranceSpecification>>
    ListUtteranceAnalyticsDataResult& WithUtterances(UtterancesT&& value) { SetUtterances(std::forward<UtterancesT>(value)); return *this;}
    template<typename UtterancesT = UtteranceSpecification>
    ListUtteranceAnalyticsDataResult& AddUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances.emplace_back(std::forward<UtterancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUtteranceAnalyticsDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<UtteranceSpecification> m_utterances;
    bool m_utterancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
