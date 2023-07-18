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
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult();
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListUtteranceAnalyticsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that the utterances belong to.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the ListUtteranceAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListUtteranceAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline const Aws::Vector<UtteranceSpecification>& GetUtterances() const{ return m_utterances; }

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline void SetUtterances(const Aws::Vector<UtteranceSpecification>& value) { m_utterances = value; }

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline void SetUtterances(Aws::Vector<UtteranceSpecification>&& value) { m_utterances = std::move(value); }

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithUtterances(const Aws::Vector<UtteranceSpecification>& value) { SetUtterances(value); return *this;}

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline ListUtteranceAnalyticsDataResult& WithUtterances(Aws::Vector<UtteranceSpecification>&& value) { SetUtterances(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline ListUtteranceAnalyticsDataResult& AddUtterances(const UtteranceSpecification& value) { m_utterances.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains information about an utterance in a
     * user session with your bot.</p>
     */
    inline ListUtteranceAnalyticsDataResult& AddUtterances(UtteranceSpecification&& value) { m_utterances.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUtteranceAnalyticsDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUtteranceAnalyticsDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUtteranceAnalyticsDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_nextToken;

    Aws::Vector<UtteranceSpecification> m_utterances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
