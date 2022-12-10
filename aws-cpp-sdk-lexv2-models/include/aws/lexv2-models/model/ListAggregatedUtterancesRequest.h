/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/UtteranceAggregationDuration.h>
#include <aws/lexv2-models/model/AggregatedUtterancesSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AggregatedUtterancesFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListAggregatedUtterancesRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListAggregatedUtterancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAggregatedUtterances"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot associated with this request.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot alias associated with this request. If you specify
     * the bot alias, you can't specify the bot version.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot version associated with this request. If you
     * specify the bot version, you can't specify the bot alias.</p>
     */
    inline ListAggregatedUtterancesRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListAggregatedUtterancesRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListAggregatedUtterancesRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListAggregatedUtterancesRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline const UtteranceAggregationDuration& GetAggregationDuration() const{ return m_aggregationDuration; }

    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline bool AggregationDurationHasBeenSet() const { return m_aggregationDurationHasBeenSet; }

    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline void SetAggregationDuration(const UtteranceAggregationDuration& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = value; }

    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline void SetAggregationDuration(UtteranceAggregationDuration&& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = std::move(value); }

    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline ListAggregatedUtterancesRequest& WithAggregationDuration(const UtteranceAggregationDuration& value) { SetAggregationDuration(value); return *this;}

    /**
     * <p>The time window for aggregating the utterance information. You can specify a
     * time between one hour and two weeks.</p>
     */
    inline ListAggregatedUtterancesRequest& WithAggregationDuration(UtteranceAggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}


    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline const AggregatedUtterancesSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline void SetSortBy(const AggregatedUtterancesSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline void SetSortBy(AggregatedUtterancesSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline ListAggregatedUtterancesRequest& WithSortBy(const AggregatedUtterancesSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Specifies sorting parameters for the list of utterances. You can sort by the
     * hit count, the missed count, or the number of distinct sessions the utterance
     * appeared in.</p>
     */
    inline ListAggregatedUtterancesRequest& WithSortBy(AggregatedUtterancesSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline const Aws::Vector<AggregatedUtterancesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline void SetFilters(const Aws::Vector<AggregatedUtterancesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline void SetFilters(Aws::Vector<AggregatedUtterancesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListAggregatedUtterancesRequest& WithFilters(const Aws::Vector<AggregatedUtterancesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListAggregatedUtterancesRequest& WithFilters(Aws::Vector<AggregatedUtterancesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListAggregatedUtterancesRequest& AddFilters(const AggregatedUtterancesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Provides the specification of a filter used to limit the utterances in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListAggregatedUtterancesRequest& AddFilters(AggregatedUtterancesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of utterances to return in each page of results. If there
     * are fewer results than the maximum page size, only the actual number of results
     * are returned. If you don't specify the <code>maxResults</code> parameter, 1,000
     * results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of utterances to return in each page of results. If there
     * are fewer results than the maximum page size, only the actual number of results
     * are returned. If you don't specify the <code>maxResults</code> parameter, 1,000
     * results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of utterances to return in each page of results. If there
     * are fewer results than the maximum page size, only the actual number of results
     * are returned. If you don't specify the <code>maxResults</code> parameter, 1,000
     * results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of utterances to return in each page of results. If there
     * are fewer results than the maximum page size, only the actual number of results
     * are returned. If you don't specify the <code>maxResults</code> parameter, 1,000
     * results are returned.</p>
     */
    inline ListAggregatedUtterancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListAggregatedUtterancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListAggregatedUtterancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListAggregatedUtterances</code> operation
     * contains more results that specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListAggregatedUtterancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    UtteranceAggregationDuration m_aggregationDuration;
    bool m_aggregationDurationHasBeenSet = false;

    AggregatedUtterancesSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<AggregatedUtterancesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
