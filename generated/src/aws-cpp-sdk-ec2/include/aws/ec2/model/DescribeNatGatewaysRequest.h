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
    AWS_EC2_API DescribeNatGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNatGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeNatGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const{ return m_filter; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline void SetFilter(const Aws::Vector<Filter>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline void SetFilter(Aws::Vector<Filter>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& WithFilter(const Aws::Vector<Filter>& value) { SetFilter(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& WithFilter(Aws::Vector<Filter>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& AddFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID of the
     * NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the NAT gateway
     * resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& AddFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline DescribeNatGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNatGatewayIds() const{ return m_natGatewayIds; }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline bool NatGatewayIdsHasBeenSet() const { return m_natGatewayIdsHasBeenSet; }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline void SetNatGatewayIds(const Aws::Vector<Aws::String>& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds = value; }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline void SetNatGatewayIds(Aws::Vector<Aws::String>&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds = std::move(value); }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline DescribeNatGatewaysRequest& WithNatGatewayIds(const Aws::Vector<Aws::String>& value) { SetNatGatewayIds(value); return *this;}

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline DescribeNatGatewaysRequest& WithNatGatewayIds(Aws::Vector<Aws::String>&& value) { SetNatGatewayIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(const Aws::String& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(Aws::String&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the NAT gateways.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(const char* value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(value); return *this; }


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_natGatewayIds;
    bool m_natGatewayIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
