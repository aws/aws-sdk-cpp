/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/InsightsFilter.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class ListInsightsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API ListInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInsights"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline ListInsightsRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline ListInsightsRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the insights.</p>
     */
    inline ListInsightsRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline const InsightsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline void SetFilter(const InsightsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline void SetFilter(InsightsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline ListInsightsRequest& WithFilter(const InsightsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The criteria to filter your list of insights for your cluster. You can filter
     * which insights are returned by category, associated Kubernetes version, and
     * status.</p>
     */
    inline ListInsightsRequest& WithFilter(InsightsFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of identity provider configurations returned by
     * <code>ListInsights</code> in paginated output. When you use this parameter,
     * <code>ListInsights</code> returns only <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. You can see
     * the remaining results of the initial request by sending another
     * <code>ListInsights</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If you don't use this parameter,
     * <code>ListInsights</code> returns up to 100 results and a <code>nextToken</code>
     * value, if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of identity provider configurations returned by
     * <code>ListInsights</code> in paginated output. When you use this parameter,
     * <code>ListInsights</code> returns only <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. You can see
     * the remaining results of the initial request by sending another
     * <code>ListInsights</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If you don't use this parameter,
     * <code>ListInsights</code> returns up to 100 results and a <code>nextToken</code>
     * value, if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of identity provider configurations returned by
     * <code>ListInsights</code> in paginated output. When you use this parameter,
     * <code>ListInsights</code> returns only <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. You can see
     * the remaining results of the initial request by sending another
     * <code>ListInsights</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If you don't use this parameter,
     * <code>ListInsights</code> returns up to 100 results and a <code>nextToken</code>
     * value, if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of identity provider configurations returned by
     * <code>ListInsights</code> in paginated output. When you use this parameter,
     * <code>ListInsights</code> returns only <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. You can see
     * the remaining results of the initial request by sending another
     * <code>ListInsights</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If you don't use this parameter,
     * <code>ListInsights</code> returns up to 100 results and a <code>nextToken</code>
     * value, if applicable.</p>
     */
    inline ListInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListInsightsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListInsightsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListInsights</code> request. When the results of a
     * <code>ListInsights</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListInsightsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    InsightsFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
