/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/EksAnywhereSubscriptionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class ListEksAnywhereSubscriptionsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API ListEksAnywhereSubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEksAnywhereSubscriptions"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of cluster results returned by
     * ListEksAnywhereSubscriptions in paginated output. When you use this parameter,
     * ListEksAnywhereSubscriptions returns only maxResults results in a single page
     * along with a nextToken response element. You can see the remaining results of
     * the initial request by sending another ListEksAnywhereSubscriptions request with
     * the returned nextToken value. This value can be between 1 and 100. If you don't
     * use this parameter, ListEksAnywhereSubscriptions returns up to 10 results and a
     * nextToken value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results returned by
     * ListEksAnywhereSubscriptions in paginated output. When you use this parameter,
     * ListEksAnywhereSubscriptions returns only maxResults results in a single page
     * along with a nextToken response element. You can see the remaining results of
     * the initial request by sending another ListEksAnywhereSubscriptions request with
     * the returned nextToken value. This value can be between 1 and 100. If you don't
     * use this parameter, ListEksAnywhereSubscriptions returns up to 10 results and a
     * nextToken value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results returned by
     * ListEksAnywhereSubscriptions in paginated output. When you use this parameter,
     * ListEksAnywhereSubscriptions returns only maxResults results in a single page
     * along with a nextToken response element. You can see the remaining results of
     * the initial request by sending another ListEksAnywhereSubscriptions request with
     * the returned nextToken value. This value can be between 1 and 100. If you don't
     * use this parameter, ListEksAnywhereSubscriptions returns up to 10 results and a
     * nextToken value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results returned by
     * ListEksAnywhereSubscriptions in paginated output. When you use this parameter,
     * ListEksAnywhereSubscriptions returns only maxResults results in a single page
     * along with a nextToken response element. You can see the remaining results of
     * the initial request by sending another ListEksAnywhereSubscriptions request with
     * the returned nextToken value. This value can be between 1 and 100. If you don't
     * use this parameter, ListEksAnywhereSubscriptions returns up to 10 results and a
     * nextToken value if applicable.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline const Aws::Vector<EksAnywhereSubscriptionStatus>& GetIncludeStatus() const{ return m_includeStatus; }

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline bool IncludeStatusHasBeenSet() const { return m_includeStatusHasBeenSet; }

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline void SetIncludeStatus(const Aws::Vector<EksAnywhereSubscriptionStatus>& value) { m_includeStatusHasBeenSet = true; m_includeStatus = value; }

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline void SetIncludeStatus(Aws::Vector<EksAnywhereSubscriptionStatus>&& value) { m_includeStatusHasBeenSet = true; m_includeStatus = std::move(value); }

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithIncludeStatus(const Aws::Vector<EksAnywhereSubscriptionStatus>& value) { SetIncludeStatus(value); return *this;}

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& WithIncludeStatus(Aws::Vector<EksAnywhereSubscriptionStatus>&& value) { SetIncludeStatus(std::move(value)); return *this;}

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& AddIncludeStatus(const EksAnywhereSubscriptionStatus& value) { m_includeStatusHasBeenSet = true; m_includeStatus.push_back(value); return *this; }

    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline ListEksAnywhereSubscriptionsRequest& AddIncludeStatus(EksAnywhereSubscriptionStatus&& value) { m_includeStatusHasBeenSet = true; m_includeStatus.push_back(std::move(value)); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EksAnywhereSubscriptionStatus> m_includeStatus;
    bool m_includeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
