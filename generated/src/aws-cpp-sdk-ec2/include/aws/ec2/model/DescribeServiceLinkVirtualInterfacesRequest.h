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
  class DescribeServiceLinkVirtualInterfacesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeServiceLinkVirtualInterfacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceLinkVirtualInterfaces"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the service link virtual interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceLinkVirtualInterfaceIds() const { return m_serviceLinkVirtualInterfaceIds; }
    inline bool ServiceLinkVirtualInterfaceIdsHasBeenSet() const { return m_serviceLinkVirtualInterfaceIdsHasBeenSet; }
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { m_serviceLinkVirtualInterfaceIdsHasBeenSet = true; m_serviceLinkVirtualInterfaceIds = std::forward<ServiceLinkVirtualInterfaceIdsT>(value); }
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    DescribeServiceLinkVirtualInterfacesRequest& WithServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { SetServiceLinkVirtualInterfaceIds(std::forward<ServiceLinkVirtualInterfaceIdsT>(value)); return *this;}
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::String>
    DescribeServiceLinkVirtualInterfacesRequest& AddServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { m_serviceLinkVirtualInterfaceIdsHasBeenSet = true; m_serviceLinkVirtualInterfaceIds.emplace_back(std::forward<ServiceLinkVirtualInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters to use for narrowing down the request. The following filters are
     * supported:</p> <ul> <li> <p> <code>outpost-lag-id</code> - The ID of the Outpost
     * LAG.</p> </li> <li> <p> <code>outpost-arn</code> - The Outpost ARN.</p> </li>
     * <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account that
     * owns the service link virtual interface.</p> </li> <li> <p> <code>state</code> -
     * The state of the Outpost LAG.</p> </li> <li> <p> <code>vlan</code> - The ID of
     * the address pool.</p> </li> <li> <p>
     * <code>service-link-virtual-interface-id</code> - The ID of the service link
     * virtual interface.</p> </li> <li> <p>
     * <code>local-gateway-virtual-interface-id</code> - The ID of the local gateway
     * virtual interface.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeServiceLinkVirtualInterfacesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeServiceLinkVirtualInterfacesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeServiceLinkVirtualInterfacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServiceLinkVirtualInterfacesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeServiceLinkVirtualInterfacesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceLinkVirtualInterfaceIds;
    bool m_serviceLinkVirtualInterfaceIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
