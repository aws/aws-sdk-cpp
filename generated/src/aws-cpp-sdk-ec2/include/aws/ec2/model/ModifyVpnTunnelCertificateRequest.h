/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpnTunnelCertificateRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnTunnelCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnTunnelCertificate"; }

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
    inline ModifyVpnTunnelCertificateRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline ModifyVpnTunnelCertificateRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline ModifyVpnTunnelCertificateRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


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
    inline ModifyVpnTunnelCertificateRequest& WithVpnTunnelOutsideIpAddress(const Aws::String& value) { SetVpnTunnelOutsideIpAddress(value); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline ModifyVpnTunnelCertificateRequest& WithVpnTunnelOutsideIpAddress(Aws::String&& value) { SetVpnTunnelOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline ModifyVpnTunnelCertificateRequest& WithVpnTunnelOutsideIpAddress(const char* value) { SetVpnTunnelOutsideIpAddress(value); return *this;}


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
    inline ModifyVpnTunnelCertificateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnTunnelOutsideIpAddress;
    bool m_vpnTunnelOutsideIpAddressHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
