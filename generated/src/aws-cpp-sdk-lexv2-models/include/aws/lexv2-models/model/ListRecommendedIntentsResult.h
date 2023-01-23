/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/RecommendedIntentSummary.h>
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
  class ListRecommendedIntentsResult
  {
  public:
    AWS_LEXMODELSV2_API ListRecommendedIntentsResult();
    AWS_LEXMODELSV2_API ListRecommendedIntentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListRecommendedIntentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the recommended intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListRecommendedIntentsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListRecommendedIntentsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the intents to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListRecommendedIntentsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationId = value; }

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationId = std::move(value); }

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationId.assign(value); }

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intent.</p>
     */
    inline ListRecommendedIntentsResult& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}


    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline const Aws::Vector<RecommendedIntentSummary>& GetSummaryList() const{ return m_summaryList; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline void SetSummaryList(const Aws::Vector<RecommendedIntentSummary>& value) { m_summaryList = value; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline void SetSummaryList(Aws::Vector<RecommendedIntentSummary>&& value) { m_summaryList = std::move(value); }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& WithSummaryList(const Aws::Vector<RecommendedIntentSummary>& value) { SetSummaryList(value); return *this;}

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& WithSummaryList(Aws::Vector<RecommendedIntentSummary>&& value) { SetSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& AddSummaryList(const RecommendedIntentSummary& value) { m_summaryList.push_back(value); return *this; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the maxResults parameter
     * of the request. If there are more intents available, the nextToken field
     * contains a token to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& AddSummaryList(RecommendedIntentSummary&& value) { m_summaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListRecommendedIntents operation. If the nextToken field is present, you
     * send the contents as the nextToken parameter of a ListRecommendedIntents
     * operation request to get the next page of results.</p>
     */
    inline ListRecommendedIntentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_botRecommendationId;

    Aws::Vector<RecommendedIntentSummary> m_summaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
