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
   * <p>Contains the parameters for DescribeVpnConnections.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnectionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpnConnectionsRequest : public EC2Request
  {
  public:
    DescribeVpnConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpnConnections"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline DescribeVpnConnectionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline DescribeVpnConnectionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline DescribeVpnConnectionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>customer-gateway-configuration</code> - The configuration information for
     * the customer gateway.</p> </li> <li> <p> <code>customer-gateway-id</code> - The
     * ID of a customer gateway associated with the VPN connection.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPN connection (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>option.static-routes-only</code> - Indicates whether the
     * connection has static routes only. Used for devices that do not support Border
     * Gateway Protocol (BGP).</p> </li> <li> <p>
     * <code>route.destination-cidr-block</code> - The destination CIDR block. This
     * corresponds to the subnet used in a customer data center.</p> </li> <li> <p>
     * <code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a
     * BGP device.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>type</code> - The type of VPN connection. Currently the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>vpn-connection-id</code> - The ID of the VPN connection.</p> </li> <li>
     * <p> <code>vpn-gateway-id</code> - The ID of a virtual private gateway associated
     * with the VPN connection.</p> </li> </ul>
     */
    inline DescribeVpnConnectionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpnConnectionIds() const{ return m_vpnConnectionIds; }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline bool VpnConnectionIdsHasBeenSet() const { return m_vpnConnectionIdsHasBeenSet; }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline void SetVpnConnectionIds(const Aws::Vector<Aws::String>& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds = value; }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline void SetVpnConnectionIds(Aws::Vector<Aws::String>&& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds = std::move(value); }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline DescribeVpnConnectionsRequest& WithVpnConnectionIds(const Aws::Vector<Aws::String>& value) { SetVpnConnectionIds(value); return *this;}

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline DescribeVpnConnectionsRequest& WithVpnConnectionIds(Aws::Vector<Aws::String>&& value) { SetVpnConnectionIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline DescribeVpnConnectionsRequest& AddVpnConnectionIds(const Aws::String& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds.push_back(value); return *this; }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline DescribeVpnConnectionsRequest& AddVpnConnectionIds(Aws::String&& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline DescribeVpnConnectionsRequest& AddVpnConnectionIds(const char* value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds.push_back(value); return *this; }


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
    inline DescribeVpnConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_vpnConnectionIds;
    bool m_vpnConnectionIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
