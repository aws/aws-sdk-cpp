/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Information about the virtual private network (VPN) between the VMware
   * vSphere cluster and the AWS website.</p> <p>For more information about RDS on
   * VMware, see the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
   * <i>RDS on VMware User Guide.</i> </a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/VpnDetails">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API VpnDetails
  {
  public:
    VpnDetails();
    VpnDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the VPN.</p>
     */
    inline const Aws::String& GetVpnId() const{ return m_vpnId; }

    /**
     * <p>The ID of the VPN.</p>
     */
    inline bool VpnIdHasBeenSet() const { return m_vpnIdHasBeenSet; }

    /**
     * <p>The ID of the VPN.</p>
     */
    inline void SetVpnId(const Aws::String& value) { m_vpnIdHasBeenSet = true; m_vpnId = value; }

    /**
     * <p>The ID of the VPN.</p>
     */
    inline void SetVpnId(Aws::String&& value) { m_vpnIdHasBeenSet = true; m_vpnId = std::move(value); }

    /**
     * <p>The ID of the VPN.</p>
     */
    inline void SetVpnId(const char* value) { m_vpnIdHasBeenSet = true; m_vpnId.assign(value); }

    /**
     * <p>The ID of the VPN.</p>
     */
    inline VpnDetails& WithVpnId(const Aws::String& value) { SetVpnId(value); return *this;}

    /**
     * <p>The ID of the VPN.</p>
     */
    inline VpnDetails& WithVpnId(Aws::String&& value) { SetVpnId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPN.</p>
     */
    inline VpnDetails& WithVpnId(const char* value) { SetVpnId(value); return *this;}


    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline const Aws::String& GetVpnTunnelOriginatorIP() const{ return m_vpnTunnelOriginatorIP; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline bool VpnTunnelOriginatorIPHasBeenSet() const { return m_vpnTunnelOriginatorIPHasBeenSet; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline void SetVpnTunnelOriginatorIP(const Aws::String& value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP = value; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline void SetVpnTunnelOriginatorIP(Aws::String&& value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP = std::move(value); }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline void SetVpnTunnelOriginatorIP(const char* value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP.assign(value); }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline VpnDetails& WithVpnTunnelOriginatorIP(const Aws::String& value) { SetVpnTunnelOriginatorIP(value); return *this;}

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline VpnDetails& WithVpnTunnelOriginatorIP(Aws::String&& value) { SetVpnTunnelOriginatorIP(std::move(value)); return *this;}

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p>
     */
    inline VpnDetails& WithVpnTunnelOriginatorIP(const char* value) { SetVpnTunnelOriginatorIP(value); return *this;}


    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline const Aws::String& GetVpnGatewayIp() const{ return m_vpnGatewayIp; }

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline bool VpnGatewayIpHasBeenSet() const { return m_vpnGatewayIpHasBeenSet; }

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline void SetVpnGatewayIp(const Aws::String& value) { m_vpnGatewayIpHasBeenSet = true; m_vpnGatewayIp = value; }

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline void SetVpnGatewayIp(Aws::String&& value) { m_vpnGatewayIpHasBeenSet = true; m_vpnGatewayIp = std::move(value); }

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline void SetVpnGatewayIp(const char* value) { m_vpnGatewayIpHasBeenSet = true; m_vpnGatewayIp.assign(value); }

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline VpnDetails& WithVpnGatewayIp(const Aws::String& value) { SetVpnGatewayIp(value); return *this;}

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline VpnDetails& WithVpnGatewayIp(Aws::String&& value) { SetVpnGatewayIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of network traffic from AWS to your on-premises data
     * center.</p>
     */
    inline VpnDetails& WithVpnGatewayIp(const char* value) { SetVpnGatewayIp(value); return *this;}


    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline const Aws::String& GetVpnPSK() const{ return m_vpnPSK; }

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline bool VpnPSKHasBeenSet() const { return m_vpnPSKHasBeenSet; }

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline void SetVpnPSK(const Aws::String& value) { m_vpnPSKHasBeenSet = true; m_vpnPSK = value; }

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline void SetVpnPSK(Aws::String&& value) { m_vpnPSKHasBeenSet = true; m_vpnPSK = std::move(value); }

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline void SetVpnPSK(const char* value) { m_vpnPSKHasBeenSet = true; m_vpnPSK.assign(value); }

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline VpnDetails& WithVpnPSK(const Aws::String& value) { SetVpnPSK(value); return *this;}

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline VpnDetails& WithVpnPSK(Aws::String&& value) { SetVpnPSK(std::move(value)); return *this;}

    /**
     * <p>The preshared key (PSK) for the VPN.</p>
     */
    inline VpnDetails& WithVpnPSK(const char* value) { SetVpnPSK(value); return *this;}


    /**
     * <p>The name of the VPN.</p>
     */
    inline const Aws::String& GetVpnName() const{ return m_vpnName; }

    /**
     * <p>The name of the VPN.</p>
     */
    inline bool VpnNameHasBeenSet() const { return m_vpnNameHasBeenSet; }

    /**
     * <p>The name of the VPN.</p>
     */
    inline void SetVpnName(const Aws::String& value) { m_vpnNameHasBeenSet = true; m_vpnName = value; }

    /**
     * <p>The name of the VPN.</p>
     */
    inline void SetVpnName(Aws::String&& value) { m_vpnNameHasBeenSet = true; m_vpnName = std::move(value); }

    /**
     * <p>The name of the VPN.</p>
     */
    inline void SetVpnName(const char* value) { m_vpnNameHasBeenSet = true; m_vpnName.assign(value); }

    /**
     * <p>The name of the VPN.</p>
     */
    inline VpnDetails& WithVpnName(const Aws::String& value) { SetVpnName(value); return *this;}

    /**
     * <p>The name of the VPN.</p>
     */
    inline VpnDetails& WithVpnName(Aws::String&& value) { SetVpnName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPN.</p>
     */
    inline VpnDetails& WithVpnName(const char* value) { SetVpnName(value); return *this;}


    /**
     * <p>The state of the VPN.</p>
     */
    inline const Aws::String& GetVpnState() const{ return m_vpnState; }

    /**
     * <p>The state of the VPN.</p>
     */
    inline bool VpnStateHasBeenSet() const { return m_vpnStateHasBeenSet; }

    /**
     * <p>The state of the VPN.</p>
     */
    inline void SetVpnState(const Aws::String& value) { m_vpnStateHasBeenSet = true; m_vpnState = value; }

    /**
     * <p>The state of the VPN.</p>
     */
    inline void SetVpnState(Aws::String&& value) { m_vpnStateHasBeenSet = true; m_vpnState = std::move(value); }

    /**
     * <p>The state of the VPN.</p>
     */
    inline void SetVpnState(const char* value) { m_vpnStateHasBeenSet = true; m_vpnState.assign(value); }

    /**
     * <p>The state of the VPN.</p>
     */
    inline VpnDetails& WithVpnState(const Aws::String& value) { SetVpnState(value); return *this;}

    /**
     * <p>The state of the VPN.</p>
     */
    inline VpnDetails& WithVpnState(Aws::String&& value) { SetVpnState(std::move(value)); return *this;}

    /**
     * <p>The state of the VPN.</p>
     */
    inline VpnDetails& WithVpnState(const char* value) { SetVpnState(value); return *this;}

  private:

    Aws::String m_vpnId;
    bool m_vpnIdHasBeenSet;

    Aws::String m_vpnTunnelOriginatorIP;
    bool m_vpnTunnelOriginatorIPHasBeenSet;

    Aws::String m_vpnGatewayIp;
    bool m_vpnGatewayIpHasBeenSet;

    Aws::String m_vpnPSK;
    bool m_vpnPSKHasBeenSet;

    Aws::String m_vpnName;
    bool m_vpnNameHasBeenSet;

    Aws::String m_vpnState;
    bool m_vpnStateHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
