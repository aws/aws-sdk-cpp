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
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult();
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total overall savings for the aggregated view.</p>
     */
    inline double GetEstimatedTotalDedupedSavings() const{ return m_estimatedTotalDedupedSavings; }
    inline void SetEstimatedTotalDedupedSavings(double value) { m_estimatedTotalDedupedSavings = value; }
    inline ListRecommendationSummariesResult& WithEstimatedTotalDedupedSavings(double value) { SetEstimatedTotalDedupedSavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all savings recommendations.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<RecommendationSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<RecommendationSummary>&& value) { m_items = std::move(value); }
    inline ListRecommendationSummariesResult& WithItems(const Aws::Vector<RecommendationSummary>& value) { SetItems(value); return *this;}
    inline ListRecommendationSummariesResult& WithItems(Aws::Vector<RecommendationSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListRecommendationSummariesResult& AddItems(const RecommendationSummary& value) { m_items.push_back(value); return *this; }
    inline ListRecommendationSummariesResult& AddItems(RecommendationSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dimension used to group the recommendations by.</p>
     */
    inline const Aws::String& GetGroupBy() const{ return m_groupBy; }
    inline void SetGroupBy(const Aws::String& value) { m_groupBy = value; }
    inline void SetGroupBy(Aws::String&& value) { m_groupBy = std::move(value); }
    inline void SetGroupBy(const char* value) { m_groupBy.assign(value); }
    inline ListRecommendationSummariesResult& WithGroupBy(const Aws::String& value) { SetGroupBy(value); return *this;}
    inline ListRecommendationSummariesResult& WithGroupBy(Aws::String&& value) { SetGroupBy(std::move(value)); return *this;}
    inline ListRecommendationSummariesResult& WithGroupBy(const char* value) { SetGroupBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }
    inline ListRecommendationSummariesResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ListRecommendationSummariesResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ListRecommendationSummariesResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results or descriptions for the additional metrics, based on whether the
     * metrics were or were not requested.</p>
     */
    inline const SummaryMetricsResult& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const SummaryMetricsResult& value) { m_metrics = value; }
    inline void SetMetrics(SummaryMetricsResult&& value) { m_metrics = std::move(value); }
    inline ListRecommendationSummariesResult& WithMetrics(const SummaryMetricsResult& value) { SetMetrics(value); return *this;}
    inline ListRecommendationSummariesResult& WithMetrics(SummaryMetricsResult&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecommendationSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecommendationSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecommendationSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecommendationSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    double m_estimatedTotalDedupedSavings;

    Aws::Vector<RecommendationSummary> m_items;

    Aws::String m_groupBy;

    Aws::String m_currencyCode;

    SummaryMetricsResult m_metrics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
