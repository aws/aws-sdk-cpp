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
  class DescribeNetworkInsightsPathsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsPathsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsPaths"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the paths.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsPathIds() const{ return m_networkInsightsPathIds; }
    inline bool NetworkInsightsPathIdsHasBeenSet() const { return m_networkInsightsPathIdsHasBeenSet; }
    inline void SetNetworkInsightsPathIds(const Aws::Vector<Aws::String>& value) { m_networkInsightsPathIdsHasBeenSet = true; m_networkInsightsPathIds = value; }
    inline void SetNetworkInsightsPathIds(Aws::Vector<Aws::String>&& value) { m_networkInsightsPathIdsHasBeenSet = true; m_networkInsightsPathIds = std::move(value); }
    inline DescribeNetworkInsightsPathsRequest& WithNetworkInsightsPathIds(const Aws::Vector<Aws::String>& value) { SetNetworkInsightsPathIds(value); return *this;}
    inline DescribeNetworkInsightsPathsRequest& WithNetworkInsightsPathIds(Aws::Vector<Aws::String>&& value) { SetNetworkInsightsPathIds(std::move(value)); return *this;}
    inline DescribeNetworkInsightsPathsRequest& AddNetworkInsightsPathIds(const Aws::String& value) { m_networkInsightsPathIdsHasBeenSet = true; m_networkInsightsPathIds.push_back(value); return *this; }
    inline DescribeNetworkInsightsPathsRequest& AddNetworkInsightsPathIds(Aws::String&& value) { m_networkInsightsPathIdsHasBeenSet = true; m_networkInsightsPathIds.push_back(std::move(value)); return *this; }
    inline DescribeNetworkInsightsPathsRequest& AddNetworkInsightsPathIds(const char* value) { m_networkInsightsPathIdsHasBeenSet = true; m_networkInsightsPathIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>destination - The ID of the resource.</p> </li> <li>
     * <p>filter-at-source.source-address - The source IPv4 address at the source.</p>
     * </li> <li> <p>filter-at-source.source-port-range - The source port range at the
     * source.</p> </li> <li> <p>filter-at-source.destination-address - The destination
     * IPv4 address at the source.</p> </li> <li>
     * <p>filter-at-source.destination-port-range - The destination port range at the
     * source.</p> </li> <li> <p>filter-at-destination.source-address - The source IPv4
     * address at the destination.</p> </li> <li>
     * <p>filter-at-destination.source-port-range - The source port range at the
     * destination.</p> </li> <li> <p>filter-at-destination.destination-address - The
     * destination IPv4 address at the destination.</p> </li> <li>
     * <p>filter-at-destination.destination-port-range - The destination port range at
     * the destination.</p> </li> <li> <p>protocol - The protocol.</p> </li> <li>
     * <p>source - The ID of the resource.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeNetworkInsightsPathsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeNetworkInsightsPathsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeNetworkInsightsPathsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeNetworkInsightsPathsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeNetworkInsightsPathsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeNetworkInsightsPathsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeNetworkInsightsPathsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeNetworkInsightsPathsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeNetworkInsightsPathsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_networkInsightsPathIds;
    bool m_networkInsightsPathIdsHasBeenSet = false;

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
