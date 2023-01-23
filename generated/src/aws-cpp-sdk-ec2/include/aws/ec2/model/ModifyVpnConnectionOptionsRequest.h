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
    AWS_EC2_API ModifyVpnConnectionOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnConnectionOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv4NetworkCidr() const{ return m_localIpv4NetworkCidr; }

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline bool LocalIpv4NetworkCidrHasBeenSet() const { return m_localIpv4NetworkCidrHasBeenSet; }

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetLocalIpv4NetworkCidr(const Aws::String& value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr = value; }

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetLocalIpv4NetworkCidr(Aws::String&& value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr = std::move(value); }

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetLocalIpv4NetworkCidr(const char* value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr.assign(value); }

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv4NetworkCidr(const Aws::String& value) { SetLocalIpv4NetworkCidr(value); return *this;}

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv4NetworkCidr(Aws::String&& value) { SetLocalIpv4NetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv4NetworkCidr(const char* value) { SetLocalIpv4NetworkCidr(value); return *this;}


    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv4NetworkCidr() const{ return m_remoteIpv4NetworkCidr; }

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline bool RemoteIpv4NetworkCidrHasBeenSet() const { return m_remoteIpv4NetworkCidrHasBeenSet; }

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetRemoteIpv4NetworkCidr(const Aws::String& value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr = value; }

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetRemoteIpv4NetworkCidr(Aws::String&& value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr = std::move(value); }

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline void SetRemoteIpv4NetworkCidr(const char* value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr.assign(value); }

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv4NetworkCidr(const Aws::String& value) { SetRemoteIpv4NetworkCidr(value); return *this;}

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv4NetworkCidr(Aws::String&& value) { SetRemoteIpv4NetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv4NetworkCidr(const char* value) { SetRemoteIpv4NetworkCidr(value); return *this;}


    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv6NetworkCidr() const{ return m_localIpv6NetworkCidr; }

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline bool LocalIpv6NetworkCidrHasBeenSet() const { return m_localIpv6NetworkCidrHasBeenSet; }

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline void SetLocalIpv6NetworkCidr(const Aws::String& value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr = value; }

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline void SetLocalIpv6NetworkCidr(Aws::String&& value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr = std::move(value); }

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline void SetLocalIpv6NetworkCidr(const char* value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr.assign(value); }

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv6NetworkCidr(const Aws::String& value) { SetLocalIpv6NetworkCidr(value); return *this;}

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv6NetworkCidr(Aws::String&& value) { SetLocalIpv6NetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithLocalIpv6NetworkCidr(const char* value) { SetLocalIpv6NetworkCidr(value); return *this;}


    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv6NetworkCidr() const{ return m_remoteIpv6NetworkCidr; }

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline bool RemoteIpv6NetworkCidrHasBeenSet() const { return m_remoteIpv6NetworkCidrHasBeenSet; }

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline void SetRemoteIpv6NetworkCidr(const Aws::String& value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr = value; }

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline void SetRemoteIpv6NetworkCidr(Aws::String&& value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr = std::move(value); }

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline void SetRemoteIpv6NetworkCidr(const char* value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr.assign(value); }

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv6NetworkCidr(const Aws::String& value) { SetRemoteIpv6NetworkCidr(value); return *this;}

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv6NetworkCidr(Aws::String&& value) { SetRemoteIpv6NetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline ModifyVpnConnectionOptionsRequest& WithRemoteIpv6NetworkCidr(const char* value) { SetRemoteIpv6NetworkCidr(value); return *this;}


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
    inline ModifyVpnConnectionOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
