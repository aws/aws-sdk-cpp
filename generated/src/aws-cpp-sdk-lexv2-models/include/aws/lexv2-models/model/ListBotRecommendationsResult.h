/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotRecommendationSummary.h>
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
  class ListBotRecommendationsResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotRecommendationsResult();
    AWS_LEXMODELSV2_API ListBotRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline ListBotRecommendationsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline ListBotRecommendationsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the bot recommendation
     * list.</p>
     */
    inline ListBotRecommendationsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation list.</p>
     */
    inline ListBotRecommendationsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline const Aws::Vector<BotRecommendationSummary>& GetBotRecommendationSummaries() const{ return m_botRecommendationSummaries; }

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline void SetBotRecommendationSummaries(const Aws::Vector<BotRecommendationSummary>& value) { m_botRecommendationSummaries = value; }

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline void SetBotRecommendationSummaries(Aws::Vector<BotRecommendationSummary>&& value) { m_botRecommendationSummaries = std::move(value); }

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline ListBotRecommendationsResult& WithBotRecommendationSummaries(const Aws::Vector<BotRecommendationSummary>& value) { SetBotRecommendationSummaries(value); return *this;}

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline ListBotRecommendationsResult& WithBotRecommendationSummaries(Aws::Vector<BotRecommendationSummary>&& value) { SetBotRecommendationSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline ListBotRecommendationsResult& AddBotRecommendationSummaries(const BotRecommendationSummary& value) { m_botRecommendationSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for the bot recommendations that meet the filter
     * specified in this request. The length of the list is specified in the maxResults
     * parameter of the request. If there are more bot recommendations available, the
     * nextToken field contains a token to get the next page of results.</p>
     */
    inline ListBotRecommendationsResult& AddBotRecommendationSummaries(BotRecommendationSummary&& value) { m_botRecommendationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline ListBotRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline ListBotRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListBotRecommendations operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListBotRecommendations
     * operation request to get the next page of results. </p>
     */
    inline ListBotRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<BotRecommendationSummary> m_botRecommendationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
