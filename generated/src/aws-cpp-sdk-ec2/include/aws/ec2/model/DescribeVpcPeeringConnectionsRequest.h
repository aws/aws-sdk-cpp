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
  class DescribeVpcPeeringConnectionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcPeeringConnectionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcPeeringConnections"; }

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
    DescribeVpcPeeringConnectionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline DescribeVpcPeeringConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeVpcPeeringConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPC peering connections.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcPeeringConnectionIds() const { return m_vpcPeeringConnectionIds; }
    inline bool VpcPeeringConnectionIdsHasBeenSet() const { return m_vpcPeeringConnectionIdsHasBeenSet; }
    template<typename VpcPeeringConnectionIdsT = Aws::Vector<Aws::String>>
    void SetVpcPeeringConnectionIds(VpcPeeringConnectionIdsT&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds = std::forward<VpcPeeringConnectionIdsT>(value); }
    template<typename VpcPeeringConnectionIdsT = Aws::Vector<Aws::String>>
    DescribeVpcPeeringConnectionsRequest& WithVpcPeeringConnectionIds(VpcPeeringConnectionIdsT&& value) { SetVpcPeeringConnectionIds(std::forward<VpcPeeringConnectionIdsT>(value)); return *this;}
    template<typename VpcPeeringConnectionIdsT = Aws::String>
    DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(VpcPeeringConnectionIdsT&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.emplace_back(std::forward<VpcPeeringConnectionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>accepter-vpc-info.cidr-block</code> -
     * The IPv4 CIDR block of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.owner-id</code> - The ID of the Amazon Web Services
     * account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code> - The key/value combination of a tag assigned to the
     * resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVpcPeeringConnectionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVpcPeeringConnectionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcPeeringConnectionIds;
    bool m_vpcPeeringConnectionIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
