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
  class DescribeTransitGatewayMulticastDomainsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransitGatewayMulticastDomains"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayMulticastDomainIds() const { return m_transitGatewayMulticastDomainIds; }
    inline bool TransitGatewayMulticastDomainIdsHasBeenSet() const { return m_transitGatewayMulticastDomainIdsHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdsT = Aws::Vector<Aws::String>>
    void SetTransitGatewayMulticastDomainIds(TransitGatewayMulticastDomainIdsT&& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds = std::forward<TransitGatewayMulticastDomainIdsT>(value); }
    template<typename TransitGatewayMulticastDomainIdsT = Aws::Vector<Aws::String>>
    DescribeTransitGatewayMulticastDomainsRequest& WithTransitGatewayMulticastDomainIds(TransitGatewayMulticastDomainIdsT&& value) { SetTransitGatewayMulticastDomainIds(std::forward<TransitGatewayMulticastDomainIdsT>(value)); return *this;}
    template<typename TransitGatewayMulticastDomainIdsT = Aws::String>
    DescribeTransitGatewayMulticastDomainsRequest& AddTransitGatewayMulticastDomainIds(TransitGatewayMulticastDomainIdsT&& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds.emplace_back(std::forward<TransitGatewayMulticastDomainIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>state</code> - The state of the transit gateway multicast domain. Valid
     * values are <code>pending</code> | <code>available</code> | <code>deleting</code>
     * | <code>deleted</code>.</p> </li> <li> <p> <code>transit-gateway-id</code> - The
     * ID of the transit gateway.</p> </li> <li> <p>
     * <code>transit-gateway-multicast-domain-id</code> - The ID of the transit gateway
     * multicast domain.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeTransitGatewayMulticastDomainsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeTransitGatewayMulticastDomainsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeTransitGatewayMulticastDomainsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeTransitGatewayMulticastDomainsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline DescribeTransitGatewayMulticastDomainsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_transitGatewayMulticastDomainIds;
    bool m_transitGatewayMulticastDomainIdsHasBeenSet = false;

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
