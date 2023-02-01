/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVpnTunnelOptionsSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpnTunnelOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnTunnelOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnTunnelOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetVpnTunnelOutsideIpAddress() const{ return m_vpnTunnelOutsideIpAddress; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline bool VpnTunnelOutsideIpAddressHasBeenSet() const { return m_vpnTunnelOutsideIpAddressHasBeenSet; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetVpnTunnelOutsideIpAddress(const Aws::String& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = value; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetVpnTunnelOutsideIpAddress(Aws::String&& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = std::move(value); }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetVpnTunnelOutsideIpAddress(const char* value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress.assign(value); }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnTunnelOutsideIpAddress(const Aws::String& value) { SetVpnTunnelOutsideIpAddress(value); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnTunnelOutsideIpAddress(Aws::String&& value) { SetVpnTunnelOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithVpnTunnelOutsideIpAddress(const char* value) { SetVpnTunnelOutsideIpAddress(value); return *this;}


    /**
     * <p>The tunnel options to modify.</p>
     */
    inline const ModifyVpnTunnelOptionsSpecification& GetTunnelOptions() const{ return m_tunnelOptions; }

    /**
     * <p>The tunnel options to modify.</p>
     */
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }

    /**
     * <p>The tunnel options to modify.</p>
     */
    inline void SetTunnelOptions(const ModifyVpnTunnelOptionsSpecification& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = value; }

    /**
     * <p>The tunnel options to modify.</p>
     */
    inline void SetTunnelOptions(ModifyVpnTunnelOptionsSpecification&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::move(value); }

    /**
     * <p>The tunnel options to modify.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithTunnelOptions(const ModifyVpnTunnelOptionsSpecification& value) { SetTunnelOptions(value); return *this;}

    /**
     * <p>The tunnel options to modify.</p>
     */
    inline ModifyVpnTunnelOptionsRequest& WithTunnelOptions(ModifyVpnTunnelOptionsSpecification&& value) { SetTunnelOptions(std::move(value)); return *this;}


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
    inline ModifyVpnTunnelOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnTunnelOutsideIpAddress;
    bool m_vpnTunnelOutsideIpAddressHasBeenSet = false;

    ModifyVpnTunnelOptionsSpecification m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
