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
  class ModifyVpnConnectionOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnConnectionOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnConnectionOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    ModifyVpnConnectionOptionsRequest& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv4NetworkCidr() const { return m_localIpv4NetworkCidr; }
    inline bool LocalIpv4NetworkCidrHasBeenSet() const { return m_localIpv4NetworkCidrHasBeenSet; }
    template<typename LocalIpv4NetworkCidrT = Aws::String>
    void SetLocalIpv4NetworkCidr(LocalIpv4NetworkCidrT&& value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr = std::forward<LocalIpv4NetworkCidrT>(value); }
    template<typename LocalIpv4NetworkCidrT = Aws::String>
    ModifyVpnConnectionOptionsRequest& WithLocalIpv4NetworkCidr(LocalIpv4NetworkCidrT&& value) { SetLocalIpv4NetworkCidr(std::forward<LocalIpv4NetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv4NetworkCidr() const { return m_remoteIpv4NetworkCidr; }
    inline bool RemoteIpv4NetworkCidrHasBeenSet() const { return m_remoteIpv4NetworkCidrHasBeenSet; }
    template<typename RemoteIpv4NetworkCidrT = Aws::String>
    void SetRemoteIpv4NetworkCidr(RemoteIpv4NetworkCidrT&& value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr = std::forward<RemoteIpv4NetworkCidrT>(value); }
    template<typename RemoteIpv4NetworkCidrT = Aws::String>
    ModifyVpnConnectionOptionsRequest& WithRemoteIpv4NetworkCidr(RemoteIpv4NetworkCidrT&& value) { SetRemoteIpv4NetworkCidr(std::forward<RemoteIpv4NetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv6NetworkCidr() const { return m_localIpv6NetworkCidr; }
    inline bool LocalIpv6NetworkCidrHasBeenSet() const { return m_localIpv6NetworkCidrHasBeenSet; }
    template<typename LocalIpv6NetworkCidrT = Aws::String>
    void SetLocalIpv6NetworkCidr(LocalIpv6NetworkCidrT&& value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr = std::forward<LocalIpv6NetworkCidrT>(value); }
    template<typename LocalIpv6NetworkCidrT = Aws::String>
    ModifyVpnConnectionOptionsRequest& WithLocalIpv6NetworkCidr(LocalIpv6NetworkCidrT&& value) { SetLocalIpv6NetworkCidr(std::forward<LocalIpv6NetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv6NetworkCidr() const { return m_remoteIpv6NetworkCidr; }
    inline bool RemoteIpv6NetworkCidrHasBeenSet() const { return m_remoteIpv6NetworkCidrHasBeenSet; }
    template<typename RemoteIpv6NetworkCidrT = Aws::String>
    void SetRemoteIpv6NetworkCidr(RemoteIpv6NetworkCidrT&& value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr = std::forward<RemoteIpv6NetworkCidrT>(value); }
    template<typename RemoteIpv6NetworkCidrT = Aws::String>
    ModifyVpnConnectionOptionsRequest& WithRemoteIpv6NetworkCidr(RemoteIpv6NetworkCidrT&& value) { SetRemoteIpv6NetworkCidr(std::forward<RemoteIpv6NetworkCidrT>(value)); return *this;}
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
    inline ModifyVpnConnectionOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_localIpv4NetworkCidr;
    bool m_localIpv4NetworkCidrHasBeenSet = false;

    Aws::String m_remoteIpv4NetworkCidr;
    bool m_remoteIpv4NetworkCidrHasBeenSet = false;

    Aws::String m_localIpv6NetworkCidr;
    bool m_localIpv6NetworkCidrHasBeenSet = false;

    Aws::String m_remoteIpv6NetworkCidr;
    bool m_remoteIpv6NetworkCidrHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
