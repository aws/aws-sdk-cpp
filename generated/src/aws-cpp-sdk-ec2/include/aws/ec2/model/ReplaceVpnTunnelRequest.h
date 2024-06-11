﻿/**
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
  class ReplaceVpnTunnelRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReplaceVpnTunnelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplaceVpnTunnel"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }
    inline ReplaceVpnTunnelRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}
    inline ReplaceVpnTunnelRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}
    inline ReplaceVpnTunnelRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetVpnTunnelOutsideIpAddress() const{ return m_vpnTunnelOutsideIpAddress; }
    inline bool VpnTunnelOutsideIpAddressHasBeenSet() const { return m_vpnTunnelOutsideIpAddressHasBeenSet; }
    inline void SetVpnTunnelOutsideIpAddress(const Aws::String& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = value; }
    inline void SetVpnTunnelOutsideIpAddress(Aws::String&& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = std::move(value); }
    inline void SetVpnTunnelOutsideIpAddress(const char* value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress.assign(value); }
    inline ReplaceVpnTunnelRequest& WithVpnTunnelOutsideIpAddress(const Aws::String& value) { SetVpnTunnelOutsideIpAddress(value); return *this;}
    inline ReplaceVpnTunnelRequest& WithVpnTunnelOutsideIpAddress(Aws::String&& value) { SetVpnTunnelOutsideIpAddress(std::move(value)); return *this;}
    inline ReplaceVpnTunnelRequest& WithVpnTunnelOutsideIpAddress(const char* value) { SetVpnTunnelOutsideIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trigger pending tunnel endpoint maintenance.</p>
     */
    inline bool GetApplyPendingMaintenance() const{ return m_applyPendingMaintenance; }
    inline bool ApplyPendingMaintenanceHasBeenSet() const { return m_applyPendingMaintenanceHasBeenSet; }
    inline void SetApplyPendingMaintenance(bool value) { m_applyPendingMaintenanceHasBeenSet = true; m_applyPendingMaintenance = value; }
    inline ReplaceVpnTunnelRequest& WithApplyPendingMaintenance(bool value) { SetApplyPendingMaintenance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ReplaceVpnTunnelRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnTunnelOutsideIpAddress;
    bool m_vpnTunnelOutsideIpAddressHasBeenSet = false;

    bool m_applyPendingMaintenance;
    bool m_applyPendingMaintenanceHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
