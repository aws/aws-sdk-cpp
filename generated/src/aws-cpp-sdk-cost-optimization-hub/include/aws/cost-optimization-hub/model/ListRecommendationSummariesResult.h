/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/SummaryMetricsResult.h>
#include <aws/cost-optimization-hub/model/RecommendationSummary.h>
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
namespace CostOptimizationHub
{
namespace Model
{
  class ListRecommendationSummariesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult() = default;
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total overall savings for the aggregated view.</p>
     */
    inline double GetEstimatedTotalDedupedSavings() const { return m_estimatedTotalDedupedSavings; }
    inline void SetEstimatedTotalDedupedSavings(double value) { m_estimatedTotalDedupedSavingsHasBeenSet = true; m_estimatedTotalDedupedSavings = value; }
    inline ListRecommendationSummariesResult& WithEstimatedTotalDedupedSavings(double value) { SetEstimatedTotalDedupedSavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all savings recommendations.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<RecommendationSummary>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<RecommendationSummary>>
    ListRecommendationSummariesResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = RecommendationSummary>
    ListRecommendationSummariesResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dimension used to group the recommendations by.</p>
     */
    inline const Aws::String& GetGroupBy() const { return m_groupBy; }
    template<typename GroupByT = Aws::String>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::String>
    ListRecommendationSummariesResult& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ListRecommendationSummariesResult& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results or descriptions for the additional metrics, based on whether the
     * metrics were or were not requested.</p>
     */
    inline const SummaryMetricsResult& GetMetrics() const { return m_metrics; }
    template<typename MetricsT = SummaryMetricsResult>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = SummaryMetricsResult>
    ListRecommendationSummariesResult& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendationSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendationSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    double m_estimatedTotalDedupedSavings{0.0};
    bool m_estimatedTotalDedupedSavingsHasBeenSet = false;

    Aws::Vector<RecommendationSummary> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    SummaryMetricsResult m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
