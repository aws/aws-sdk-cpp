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
   * <p>Contains the parameters for DescribeVpcEndpoints.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeVpcEndpointsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpoints"; }

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
    inline DescribeVpcEndpointsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const{ return m_vpcEndpointIds; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline void SetVpcEndpointIds(const Aws::Vector<Aws::String>& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = value; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline void SetVpcEndpointIds(Aws::Vector<Aws::String>&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = std::move(value); }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(const Aws::Vector<Aws::String>& value) { SetVpcEndpointIds(value); return *this;}

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(Aws::Vector<Aws::String>&& value) { SetVpcEndpointIds(std::move(value)); return *this;}

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const Aws::String& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(Aws::String&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const char* value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>ip-address-type</code> - The IP
     * address type (<code>ipv4</code> | <code>ipv6</code>).</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC in which the endpoint resides.</p> </li>
     * <li> <p> <code>vpc-endpoint-id</code> - The ID of the endpoint.</p> </li> <li>
     * <p> <code>vpc-endpoint-state</code> - The state of the endpoint
     * (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code>
     * | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> |
     * <code>failed</code>).</p> </li> <li> <p> <code>vpc-endpoint-type</code> - The
     * type of VPC endpoint (<code>Interface</code> | <code>Gateway</code> |
     * <code>GatewayLoadBalancer</code>).</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline DescribeVpcEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
