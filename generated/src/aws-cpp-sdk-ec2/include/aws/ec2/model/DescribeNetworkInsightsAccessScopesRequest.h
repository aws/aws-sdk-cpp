/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeNetworkInsightsAccessScopesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsAccessScopesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsAccessScopes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsAccessScopeIds() const{ return m_networkInsightsAccessScopeIds; }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline bool NetworkInsightsAccessScopeIdsHasBeenSet() const { return m_networkInsightsAccessScopeIdsHasBeenSet; }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline void SetNetworkInsightsAccessScopeIds(const Aws::Vector<Aws::String>& value) { m_networkInsightsAccessScopeIdsHasBeenSet = true; m_networkInsightsAccessScopeIds = value; }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline void SetNetworkInsightsAccessScopeIds(Aws::Vector<Aws::String>&& value) { m_networkInsightsAccessScopeIdsHasBeenSet = true; m_networkInsightsAccessScopeIds = std::move(value); }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithNetworkInsightsAccessScopeIds(const Aws::Vector<Aws::String>& value) { SetNetworkInsightsAccessScopeIds(value); return *this;}

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithNetworkInsightsAccessScopeIds(Aws::Vector<Aws::String>&& value) { SetNetworkInsightsAccessScopeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& AddNetworkInsightsAccessScopeIds(const Aws::String& value) { m_networkInsightsAccessScopeIdsHasBeenSet = true; m_networkInsightsAccessScopeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& AddNetworkInsightsAccessScopeIds(Aws::String&& value) { m_networkInsightsAccessScopeIdsHasBeenSet = true; m_networkInsightsAccessScopeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Network Access Scopes.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& AddNetworkInsightsAccessScopeIds(const char* value) { m_networkInsightsAccessScopeIdsHasBeenSet = true; m_networkInsightsAccessScopeIds.push_back(value); return *this; }


    /**
     * <p>There are no supported filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAccessScopesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_networkInsightsAccessScopeIds;
    bool m_networkInsightsAccessScopeIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
