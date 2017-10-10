/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeVpnGateways.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGatewaysRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpnGatewaysRequest : public EC2Request
  {
  public:
    DescribeVpnGatewaysRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpnGateways"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline DescribeVpnGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline DescribeVpnGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline DescribeVpnGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of virtual private
     * gateway. Currently the only supported type is <code>ipsec.1</code>.</p> </li>
     * <li> <p> <code>vpn-gateway-id</code> - The ID of the virtual private
     * gateway.</p> </li> </ul>
     */
    inline DescribeVpnGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpnGatewayIds() const{ return m_vpnGatewayIds; }

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline void SetVpnGatewayIds(const Aws::Vector<Aws::String>& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds = value; }

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline void SetVpnGatewayIds(Aws::Vector<Aws::String>&& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds = std::move(value); }

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysRequest& WithVpnGatewayIds(const Aws::Vector<Aws::String>& value) { SetVpnGatewayIds(value); return *this;}

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysRequest& WithVpnGatewayIds(Aws::Vector<Aws::String>&& value) { SetVpnGatewayIds(std::move(value)); return *this;}

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(const Aws::String& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(value); return *this; }

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(Aws::String&& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(const char* value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(value); return *this; }


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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeVpnGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_vpnGatewayIds;
    bool m_vpnGatewayIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
