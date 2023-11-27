/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/OrderBy.h>
#include <utility>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

  /**
   */
  class ListRecommendationsRequest : public CostOptimizationHubRequest
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ListRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendations"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline ListRecommendationsRequest& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p>The constraints that you want all returned recommendations to match.</p>
     */
    inline ListRecommendationsRequest& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>List of all recommendations for a resource, or a single recommendation if
     * de-duped by <code>resourceId</code>.</p>
     */
    inline bool GetIncludeAllRecommendations() const{ return m_includeAllRecommendations; }

    /**
     * <p>List of all recommendations for a resource, or a single recommendation if
     * de-duped by <code>resourceId</code>.</p>
     */
    inline bool IncludeAllRecommendationsHasBeenSet() const { return m_includeAllRecommendationsHasBeenSet; }

    /**
     * <p>List of all recommendations for a resource, or a single recommendation if
     * de-duped by <code>resourceId</code>.</p>
     */
    inline void SetIncludeAllRecommendations(bool value) { m_includeAllRecommendationsHasBeenSet = true; m_includeAllRecommendations = value; }

    /**
     * <p>List of all recommendations for a resource, or a single recommendation if
     * de-duped by <code>resourceId</code>.</p>
     */
    inline ListRecommendationsRequest& WithIncludeAllRecommendations(bool value) { SetIncludeAllRecommendations(value); return *this;}


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
    inline ListRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline ListRecommendationsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The ordering of recommendations by a dimension.</p>
     */
    inline ListRecommendationsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    bool m_includeAllRecommendations;
    bool m_includeAllRecommendationsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
