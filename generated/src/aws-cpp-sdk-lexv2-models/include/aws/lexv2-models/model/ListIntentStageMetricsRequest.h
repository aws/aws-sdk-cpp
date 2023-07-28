/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageMetric.h>
#include <aws/lexv2-models/model/AnalyticsBinBySpecification.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageGroupBySpecification.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListIntentStageMetricsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListIntentStageMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIntentStageMetrics"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve intent stage
     * metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent stage metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent stage metrics.</p>
     */
    inline ListIntentStageMetricsRequest& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}


    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsIntentStageMetric>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetrics(const Aws::Vector<AnalyticsIntentStageMetric>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetrics(Aws::Vector<AnalyticsIntentStageMetric>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline ListIntentStageMetricsRequest& WithMetrics(const Aws::Vector<AnalyticsIntentStageMetric>& value) { SetMetrics(value); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline ListIntentStageMetricsRequest& WithMetrics(Aws::Vector<AnalyticsIntentStageMetric>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline ListIntentStageMetricsRequest& AddMetrics(const AnalyticsIntentStageMetric& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline ListIntentStageMetricsRequest& AddMetrics(AnalyticsIntentStageMetric&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline const Aws::Vector<AnalyticsBinBySpecification>& GetBinBy() const{ return m_binBy; }

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline bool BinByHasBeenSet() const { return m_binByHasBeenSet; }

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline void SetBinBy(const Aws::Vector<AnalyticsBinBySpecification>& value) { m_binByHasBeenSet = true; m_binBy = value; }

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline void SetBinBy(Aws::Vector<AnalyticsBinBySpecification>&& value) { m_binByHasBeenSet = true; m_binBy = std::move(value); }

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline ListIntentStageMetricsRequest& WithBinBy(const Aws::Vector<AnalyticsBinBySpecification>& value) { SetBinBy(value); return *this;}

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline ListIntentStageMetricsRequest& WithBinBy(Aws::Vector<AnalyticsBinBySpecification>&& value) { SetBinBy(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline ListIntentStageMetricsRequest& AddBinBy(const AnalyticsBinBySpecification& value) { m_binByHasBeenSet = true; m_binBy.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline ListIntentStageMetricsRequest& AddBinBy(AnalyticsBinBySpecification&& value) { m_binByHasBeenSet = true; m_binBy.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline const Aws::Vector<AnalyticsIntentStageGroupBySpecification>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline void SetGroupBy(const Aws::Vector<AnalyticsIntentStageGroupBySpecification>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline void SetGroupBy(Aws::Vector<AnalyticsIntentStageGroupBySpecification>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline ListIntentStageMetricsRequest& WithGroupBy(const Aws::Vector<AnalyticsIntentStageGroupBySpecification>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline ListIntentStageMetricsRequest& WithGroupBy(Aws::Vector<AnalyticsIntentStageGroupBySpecification>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline ListIntentStageMetricsRequest& AddGroupBy(const AnalyticsIntentStageGroupBySpecification& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>IntentStageName</code>
     * – The name of the intent stage.</p> </li> <li> <p> <code>SwitchedToIntent</code>
     * – The intent to which the conversation was switched (if any).</p> </li> </ul>
     */
    inline ListIntentStageMetricsRequest& AddGroupBy(AnalyticsIntentStageGroupBySpecification&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline const Aws::Vector<AnalyticsIntentStageFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<AnalyticsIntentStageFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<AnalyticsIntentStageFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListIntentStageMetricsRequest& WithFilters(const Aws::Vector<AnalyticsIntentStageFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListIntentStageMetricsRequest& WithFilters(Aws::Vector<AnalyticsIntentStageFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListIntentStageMetricsRequest& AddFilters(const AnalyticsIntentStageFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListIntentStageMetricsRequest& AddFilters(AnalyticsIntentStageFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline ListIntentStageMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListIntentStageMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListIntentStageMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the ListIntentStageMetrics operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentStageMetrics request to return the next page of results. For a
     * complete set of results, call the ListIntentStageMetrics operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListIntentStageMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::Vector<AnalyticsIntentStageMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<AnalyticsBinBySpecification> m_binBy;
    bool m_binByHasBeenSet = false;

    Aws::Vector<AnalyticsIntentStageGroupBySpecification> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<AnalyticsIntentStageFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
