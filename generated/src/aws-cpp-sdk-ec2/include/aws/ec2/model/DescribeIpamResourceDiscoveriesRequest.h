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
  class DescribeIpamResourceDiscoveriesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIpamResourceDiscoveries"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeIpamResourceDiscoveriesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM resource discovery IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpamResourceDiscoveryIds() const{ return m_ipamResourceDiscoveryIds; }
    inline bool IpamResourceDiscoveryIdsHasBeenSet() const { return m_ipamResourceDiscoveryIdsHasBeenSet; }
    inline void SetIpamResourceDiscoveryIds(const Aws::Vector<Aws::String>& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds = value; }
    inline void SetIpamResourceDiscoveryIds(Aws::Vector<Aws::String>&& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds = std::move(value); }
    inline DescribeIpamResourceDiscoveriesRequest& WithIpamResourceDiscoveryIds(const Aws::Vector<Aws::String>& value) { SetIpamResourceDiscoveryIds(value); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& WithIpamResourceDiscoveryIds(Aws::Vector<Aws::String>&& value) { SetIpamResourceDiscoveryIds(std::move(value)); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& AddIpamResourceDiscoveryIds(const Aws::String& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds.push_back(value); return *this; }
    inline DescribeIpamResourceDiscoveriesRequest& AddIpamResourceDiscoveryIds(Aws::String&& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds.push_back(std::move(value)); return *this; }
    inline DescribeIpamResourceDiscoveriesRequest& AddIpamResourceDiscoveryIds(const char* value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeIpamResourceDiscoveriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource discoveries to return in one page of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeIpamResourceDiscoveriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeIpamResourceDiscoveriesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeIpamResourceDiscoveriesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeIpamResourceDiscoveriesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipamResourceDiscoveryIds;
    bool m_ipamResourceDiscoveryIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
