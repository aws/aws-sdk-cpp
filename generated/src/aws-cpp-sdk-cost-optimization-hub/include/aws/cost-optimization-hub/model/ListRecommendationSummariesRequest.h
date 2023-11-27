/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

  /**
   */
  class ListRecommendationSummariesRequest : public CostOptimizationHubRequest
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationSummaries"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Filter& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline ListRecommendationSummariesRequest& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    
    inline ListRecommendationSummariesRequest& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline const Aws::String& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline void SetGroupBy(const Aws::String& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline void SetGroupBy(Aws::String&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline void SetGroupBy(const char* value) { m_groupByHasBeenSet = true; m_groupBy.assign(value); }

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline ListRecommendationSummariesRequest& WithGroupBy(const Aws::String& value) { SetGroupBy(value); return *this;}

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline ListRecommendationSummariesRequest& WithGroupBy(Aws::String&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>The grouping of recommendations by a dimension.</p>
     */
    inline ListRecommendationSummariesRequest& WithGroupBy(const char* value) { SetGroupBy(value); return *this;}


    /**
     * <p>The maximum number of recommendations that are returned for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recommendations that are returned for the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recommendations that are returned for the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recommendations that are returned for the request.</p>
     */
    inline ListRecommendationSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListRecommendationSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListRecommendationSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListRecommendationSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
