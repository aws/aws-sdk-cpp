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
  class DescribeNatGatewaysRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNatGatewaysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNatGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeNatGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code> - The key/value combination of a
     * tag assigned to the resource. Use the tag key in the filter name and the tag
     * value as the filter value. For example, to find all resources that have a tag
     * with the key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the NAT gateway resides.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Vector<Filter>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Vector<Filter>>
    DescribeNatGatewaysRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterT = Filter>
    DescribeNatGatewaysRequest& AddFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter.emplace_back(std::forward<FilterT>(value)); return *this; }
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
    inline DescribeNatGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNatGatewayIds() const { return m_natGatewayIds; }
    inline bool NatGatewayIdsHasBeenSet() const { return m_natGatewayIdsHasBeenSet; }
    template<typename NatGatewayIdsT = Aws::Vector<Aws::String>>
    void SetNatGatewayIds(NatGatewayIdsT&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds = std::forward<NatGatewayIdsT>(value); }
    template<typename NatGatewayIdsT = Aws::Vector<Aws::String>>
    DescribeNatGatewaysRequest& WithNatGatewayIds(NatGatewayIdsT&& value) { SetNatGatewayIds(std::forward<NatGatewayIdsT>(value)); return *this;}
    template<typename NatGatewayIdsT = Aws::String>
    DescribeNatGatewaysRequest& AddNatGatewayIds(NatGatewayIdsT&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.emplace_back(std::forward<NatGatewayIdsT>(value)); return *this; }
    ///@}

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
    DescribeNatGatewaysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_natGatewayIds;
    bool m_natGatewayIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
