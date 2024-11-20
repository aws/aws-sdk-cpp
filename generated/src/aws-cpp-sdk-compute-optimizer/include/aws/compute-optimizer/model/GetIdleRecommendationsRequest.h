/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/OrderBy.h>
#include <aws/compute-optimizer/model/IdleRecommendationFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetIdleRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdleRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that identifies the idle resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }
    inline GetIdleRecommendationsRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline GetIdleRecommendationsRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline GetIdleRecommendationsRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    inline GetIdleRecommendationsRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }
    inline GetIdleRecommendationsRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of idle resource recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetIdleRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIdleRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIdleRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of idle resource recommendations to return with a single
     * request. </p> <p>To retrieve the remaining results, make another request with
     * the returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetIdleRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * idle resource recommendations.</p>
     */
    inline const Aws::Vector<IdleRecommendationFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<IdleRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<IdleRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetIdleRecommendationsRequest& WithFilters(const Aws::Vector<IdleRecommendationFilter>& value) { SetFilters(value); return *this;}
    inline GetIdleRecommendationsRequest& WithFilters(Aws::Vector<IdleRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetIdleRecommendationsRequest& AddFilters(const IdleRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetIdleRecommendationsRequest& AddFilters(IdleRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Return the idle resource recommendations to the specified Amazon Web Services
     * account IDs.</p> <p>If your account is the management account or the delegated
     * administrator of an organization, use this parameter to return the idle resource
     * recommendations to specific member accounts.</p> <p>You can only specify one
     * account ID per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline GetIdleRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline GetIdleRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline GetIdleRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline GetIdleRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline GetIdleRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort the idle resource recommendations.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }
    inline GetIdleRecommendationsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}
    inline GetIdleRecommendationsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<IdleRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
