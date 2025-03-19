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
    AWS_EC2_API DescribeIpamResourceDiscoveriesRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeIpamResourceDiscoveriesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM resource discovery IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpamResourceDiscoveryIds() const { return m_ipamResourceDiscoveryIds; }
    inline bool IpamResourceDiscoveryIdsHasBeenSet() const { return m_ipamResourceDiscoveryIdsHasBeenSet; }
    template<typename IpamResourceDiscoveryIdsT = Aws::Vector<Aws::String>>
    void SetIpamResourceDiscoveryIds(IpamResourceDiscoveryIdsT&& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds = std::forward<IpamResourceDiscoveryIdsT>(value); }
    template<typename IpamResourceDiscoveryIdsT = Aws::Vector<Aws::String>>
    DescribeIpamResourceDiscoveriesRequest& WithIpamResourceDiscoveryIds(IpamResourceDiscoveryIdsT&& value) { SetIpamResourceDiscoveryIds(std::forward<IpamResourceDiscoveryIdsT>(value)); return *this;}
    template<typename IpamResourceDiscoveryIdsT = Aws::String>
    DescribeIpamResourceDiscoveriesRequest& AddIpamResourceDiscoveryIds(IpamResourceDiscoveryIdsT&& value) { m_ipamResourceDiscoveryIdsHasBeenSet = true; m_ipamResourceDiscoveryIds.emplace_back(std::forward<IpamResourceDiscoveryIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeIpamResourceDiscoveriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource discoveries to return in one page of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeIpamResourceDiscoveriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeIpamResourceDiscoveriesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeIpamResourceDiscoveriesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipamResourceDiscoveryIds;
    bool m_ipamResourceDiscoveryIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
