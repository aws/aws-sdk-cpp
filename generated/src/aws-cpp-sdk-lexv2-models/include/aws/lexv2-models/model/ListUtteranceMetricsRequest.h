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
#include <aws/lexv2-models/model/AnalyticsUtteranceMetric.h>
#include <aws/lexv2-models/model/AnalyticsBinBySpecification.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceGroupBySpecification.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceAttribute.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListUtteranceMetricsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListUtteranceMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUtteranceMetrics"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the bot for which you want to retrieve utterance
     * metrics.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListUtteranceMetricsRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see utterance metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    ListUtteranceMetricsRequest& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see utterance metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    ListUtteranceMetricsRequest& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceMetric>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<AnalyticsUtteranceMetric>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<AnalyticsUtteranceMetric>>
    ListUtteranceMetricsRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = AnalyticsUtteranceMetric>
    ListUtteranceMetricsRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains specifications for organizing the
     * results by time.</p>
     */
    inline const Aws::Vector<AnalyticsBinBySpecification>& GetBinBy() const { return m_binBy; }
    inline bool BinByHasBeenSet() const { return m_binByHasBeenSet; }
    template<typename BinByT = Aws::Vector<AnalyticsBinBySpecification>>
    void SetBinBy(BinByT&& value) { m_binByHasBeenSet = true; m_binBy = std::forward<BinByT>(value); }
    template<typename BinByT = Aws::Vector<AnalyticsBinBySpecification>>
    ListUtteranceMetricsRequest& WithBinBy(BinByT&& value) { SetBinBy(std::forward<BinByT>(value)); return *this;}
    template<typename BinByT = AnalyticsBinBySpecification>
    ListUtteranceMetricsRequest& AddBinBy(BinByT&& value) { m_binByHasBeenSet = true; m_binBy.emplace_back(std::forward<BinByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which specifies how to group the results. You can
     * group by the following criteria:</p> <ul> <li> <p> <code>UtteranceText</code> –
     * The transcription of the utterance.</p> </li> <li> <p>
     * <code>UtteranceState</code> – The state of the utterance. The possible states
     * are detailed in <a
     * href="https://docs.aws.amazon.com/analytics-key-definitions-utterances">Key
     * definitions</a> in the user guide.</p> </li> </ul>
     */
    inline const Aws::Vector<AnalyticsUtteranceGroupBySpecification>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<AnalyticsUtteranceGroupBySpecification>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<AnalyticsUtteranceGroupBySpecification>>
    ListUtteranceMetricsRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    template<typename GroupByT = AnalyticsUtteranceGroupBySpecification>
    ListUtteranceMetricsRequest& AddGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy.emplace_back(std::forward<GroupByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing attributes related to the utterance that you want the
     * response to return. The following attributes are possible:</p> <ul> <li> <p>
     * <code>LastUsedIntent</code> – The last used intent at the time of the
     * utterance.</p> </li> </ul>
     */
    inline const Aws::Vector<AnalyticsUtteranceAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<AnalyticsUtteranceAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<AnalyticsUtteranceAttribute>>
    ListUtteranceMetricsRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = AnalyticsUtteranceAttribute>
    ListUtteranceMetricsRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<AnalyticsUtteranceFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<AnalyticsUtteranceFilter>>
    ListUtteranceMetricsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = AnalyticsUtteranceFilter>
    ListUtteranceMetricsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListUtteranceMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUtteranceMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<AnalyticsBinBySpecification> m_binBy;
    bool m_binByHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceGroupBySpecification> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
