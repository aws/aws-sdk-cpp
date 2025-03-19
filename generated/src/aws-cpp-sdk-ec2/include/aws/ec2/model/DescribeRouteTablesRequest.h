/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeRouteTablesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeRouteTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRouteTables"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRouteTablesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRouteTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeRouteTablesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the route tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    DescribeRouteTablesRequest& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    DescribeRouteTablesRequest& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>association.gateway-id</code> - The ID
     * of the gateway involved in the association.</p> </li> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account that
     * owns the route table.</p> </li> <li> <p> <code>route-table-id</code> - The ID of
     * the route table.</p> </li> <li> <p> <code>route.destination-cidr-block</code> -
     * The IPv4 CIDR range specified in a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the Amazon
     * Web Services service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.transit-gateway-id</code> - The ID of a transit gateway.</p> </li>
     * <li> <p> <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
     * <code>tag</code> - The key/value combination of a tag assigned to the resource.
     * Use the tag key in the filter name and the tag value as the filter value. For
     * example, to find all resources that have a tag with the key <code>Owner</code>
     * and the value <code>TeamA</code>, specify <code>tag:Owner</code> for the filter
     * name and <code>TeamA</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. Use this
     * filter to find all resources assigned a tag with a specific key, regardless of
     * the tag value.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for
     * the route table.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeRouteTablesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeRouteTablesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
