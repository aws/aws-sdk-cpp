/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeVpnConnectionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpnConnectionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpnConnections"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
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
     * with the VPN connection.</p> </li> <li> <p> <code>transit-gateway-id</code> -
     * The ID of a transit gateway associated with the VPN connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVpnConnectionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVpnConnectionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more VPN connection IDs.</p> <p>Default: Describes your VPN
     * connections.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpnConnectionIds() const { return m_vpnConnectionIds; }
    inline bool VpnConnectionIdsHasBeenSet() const { return m_vpnConnectionIdsHasBeenSet; }
    template<typename VpnConnectionIdsT = Aws::Vector<Aws::String>>
    void SetVpnConnectionIds(VpnConnectionIdsT&& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds = std::forward<VpnConnectionIdsT>(value); }
    template<typename VpnConnectionIdsT = Aws::Vector<Aws::String>>
    DescribeVpnConnectionsRequest& WithVpnConnectionIds(VpnConnectionIdsT&& value) { SetVpnConnectionIds(std::forward<VpnConnectionIdsT>(value)); return *this;}
    template<typename VpnConnectionIdsT = Aws::String>
    DescribeVpnConnectionsRequest& AddVpnConnectionIds(VpnConnectionIdsT&& value) { m_vpnConnectionIdsHasBeenSet = true; m_vpnConnectionIds.emplace_back(std::forward<VpnConnectionIdsT>(value)); return *this; }
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
    inline DescribeVpnConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpnConnectionIds;
    bool m_vpnConnectionIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
