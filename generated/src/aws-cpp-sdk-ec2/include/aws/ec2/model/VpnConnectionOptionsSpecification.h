/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/TunnelInsideIpVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnTunnelOptionsSpecification.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes VPN connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnConnectionOptionsSpecification">AWS
   * API Reference</a></p>
   */
  class VpnConnectionOptionsSpecification
  {
  public:
    AWS_EC2_API VpnConnectionOptionsSpecification();
    AWS_EC2_API VpnConnectionOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnectionOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableAcceleration() const{ return m_enableAcceleration; }
    inline bool EnableAccelerationHasBeenSet() const { return m_enableAccelerationHasBeenSet; }
    inline void SetEnableAcceleration(bool value) { m_enableAccelerationHasBeenSet = true; m_enableAcceleration = value; }
    inline VpnConnectionOptionsSpecification& WithEnableAcceleration(bool value) { SetEnableAcceleration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline const TunnelInsideIpVersion& GetTunnelInsideIpVersion() const{ return m_tunnelInsideIpVersion; }
    inline bool TunnelInsideIpVersionHasBeenSet() const { return m_tunnelInsideIpVersionHasBeenSet; }
    inline void SetTunnelInsideIpVersion(const TunnelInsideIpVersion& value) { m_tunnelInsideIpVersionHasBeenSet = true; m_tunnelInsideIpVersion = value; }
    inline void SetTunnelInsideIpVersion(TunnelInsideIpVersion&& value) { m_tunnelInsideIpVersionHasBeenSet = true; m_tunnelInsideIpVersion = std::move(value); }
    inline VpnConnectionOptionsSpecification& WithTunnelInsideIpVersion(const TunnelInsideIpVersion& value) { SetTunnelInsideIpVersion(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithTunnelInsideIpVersion(TunnelInsideIpVersion&& value) { SetTunnelInsideIpVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline const Aws::Vector<VpnTunnelOptionsSpecification>& GetTunnelOptions() const{ return m_tunnelOptions; }
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }
    inline void SetTunnelOptions(const Aws::Vector<VpnTunnelOptionsSpecification>& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = value; }
    inline void SetTunnelOptions(Aws::Vector<VpnTunnelOptionsSpecification>&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::move(value); }
    inline VpnConnectionOptionsSpecification& WithTunnelOptions(const Aws::Vector<VpnTunnelOptionsSpecification>& value) { SetTunnelOptions(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithTunnelOptions(Aws::Vector<VpnTunnelOptionsSpecification>&& value) { SetTunnelOptions(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& AddTunnelOptions(const VpnTunnelOptionsSpecification& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(value); return *this; }
    inline VpnConnectionOptionsSpecification& AddTunnelOptions(VpnTunnelOptionsSpecification&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv4NetworkCidr() const{ return m_localIpv4NetworkCidr; }
    inline bool LocalIpv4NetworkCidrHasBeenSet() const { return m_localIpv4NetworkCidrHasBeenSet; }
    inline void SetLocalIpv4NetworkCidr(const Aws::String& value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr = value; }
    inline void SetLocalIpv4NetworkCidr(Aws::String&& value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr = std::move(value); }
    inline void SetLocalIpv4NetworkCidr(const char* value) { m_localIpv4NetworkCidrHasBeenSet = true; m_localIpv4NetworkCidr.assign(value); }
    inline VpnConnectionOptionsSpecification& WithLocalIpv4NetworkCidr(const Aws::String& value) { SetLocalIpv4NetworkCidr(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithLocalIpv4NetworkCidr(Aws::String&& value) { SetLocalIpv4NetworkCidr(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithLocalIpv4NetworkCidr(const char* value) { SetLocalIpv4NetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>0.0.0.0/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv4NetworkCidr() const{ return m_remoteIpv4NetworkCidr; }
    inline bool RemoteIpv4NetworkCidrHasBeenSet() const { return m_remoteIpv4NetworkCidrHasBeenSet; }
    inline void SetRemoteIpv4NetworkCidr(const Aws::String& value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr = value; }
    inline void SetRemoteIpv4NetworkCidr(Aws::String&& value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr = std::move(value); }
    inline void SetRemoteIpv4NetworkCidr(const char* value) { m_remoteIpv4NetworkCidrHasBeenSet = true; m_remoteIpv4NetworkCidr.assign(value); }
    inline VpnConnectionOptionsSpecification& WithRemoteIpv4NetworkCidr(const Aws::String& value) { SetRemoteIpv4NetworkCidr(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithRemoteIpv4NetworkCidr(Aws::String&& value) { SetRemoteIpv4NetworkCidr(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithRemoteIpv4NetworkCidr(const char* value) { SetRemoteIpv4NetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR on the customer gateway (on-premises) side of the VPN
     * connection.</p> <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetLocalIpv6NetworkCidr() const{ return m_localIpv6NetworkCidr; }
    inline bool LocalIpv6NetworkCidrHasBeenSet() const { return m_localIpv6NetworkCidrHasBeenSet; }
    inline void SetLocalIpv6NetworkCidr(const Aws::String& value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr = value; }
    inline void SetLocalIpv6NetworkCidr(Aws::String&& value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr = std::move(value); }
    inline void SetLocalIpv6NetworkCidr(const char* value) { m_localIpv6NetworkCidrHasBeenSet = true; m_localIpv6NetworkCidr.assign(value); }
    inline VpnConnectionOptionsSpecification& WithLocalIpv6NetworkCidr(const Aws::String& value) { SetLocalIpv6NetworkCidr(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithLocalIpv6NetworkCidr(Aws::String&& value) { SetLocalIpv6NetworkCidr(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithLocalIpv6NetworkCidr(const char* value) { SetLocalIpv6NetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR on the Amazon Web Services side of the VPN connection.</p>
     * <p>Default: <code>::/0</code> </p>
     */
    inline const Aws::String& GetRemoteIpv6NetworkCidr() const{ return m_remoteIpv6NetworkCidr; }
    inline bool RemoteIpv6NetworkCidrHasBeenSet() const { return m_remoteIpv6NetworkCidrHasBeenSet; }
    inline void SetRemoteIpv6NetworkCidr(const Aws::String& value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr = value; }
    inline void SetRemoteIpv6NetworkCidr(Aws::String&& value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr = std::move(value); }
    inline void SetRemoteIpv6NetworkCidr(const char* value) { m_remoteIpv6NetworkCidrHasBeenSet = true; m_remoteIpv6NetworkCidr.assign(value); }
    inline VpnConnectionOptionsSpecification& WithRemoteIpv6NetworkCidr(const Aws::String& value) { SetRemoteIpv6NetworkCidr(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithRemoteIpv6NetworkCidr(Aws::String&& value) { SetRemoteIpv6NetworkCidr(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithRemoteIpv6NetworkCidr(const char* value) { SetRemoteIpv6NetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IPv4 address assigned to the outside interface of the customer
     * gateway device.</p> <p>Valid values: <code>PrivateIpv4</code> |
     * <code>PublicIpv4</code> </p> <p>Default: <code>PublicIpv4</code> </p>
     */
    inline const Aws::String& GetOutsideIpAddressType() const{ return m_outsideIpAddressType; }
    inline bool OutsideIpAddressTypeHasBeenSet() const { return m_outsideIpAddressTypeHasBeenSet; }
    inline void SetOutsideIpAddressType(const Aws::String& value) { m_outsideIpAddressTypeHasBeenSet = true; m_outsideIpAddressType = value; }
    inline void SetOutsideIpAddressType(Aws::String&& value) { m_outsideIpAddressTypeHasBeenSet = true; m_outsideIpAddressType = std::move(value); }
    inline void SetOutsideIpAddressType(const char* value) { m_outsideIpAddressTypeHasBeenSet = true; m_outsideIpAddressType.assign(value); }
    inline VpnConnectionOptionsSpecification& WithOutsideIpAddressType(const Aws::String& value) { SetOutsideIpAddressType(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithOutsideIpAddressType(Aws::String&& value) { SetOutsideIpAddressType(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithOutsideIpAddressType(const char* value) { SetOutsideIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway attachment ID to use for the VPN tunnel.</p> <p>Required
     * if <code>OutsideIpAddressType</code> is set to <code>PrivateIpv4</code>.</p>
     */
    inline const Aws::String& GetTransportTransitGatewayAttachmentId() const{ return m_transportTransitGatewayAttachmentId; }
    inline bool TransportTransitGatewayAttachmentIdHasBeenSet() const { return m_transportTransitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransportTransitGatewayAttachmentId(const Aws::String& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = value; }
    inline void SetTransportTransitGatewayAttachmentId(Aws::String&& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = std::move(value); }
    inline void SetTransportTransitGatewayAttachmentId(const char* value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId.assign(value); }
    inline VpnConnectionOptionsSpecification& WithTransportTransitGatewayAttachmentId(const Aws::String& value) { SetTransportTransitGatewayAttachmentId(value); return *this;}
    inline VpnConnectionOptionsSpecification& WithTransportTransitGatewayAttachmentId(Aws::String&& value) { SetTransportTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline VpnConnectionOptionsSpecification& WithTransportTransitGatewayAttachmentId(const char* value) { SetTransportTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetStaticRoutesOnly() const{ return m_staticRoutesOnly; }
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }
    inline VpnConnectionOptionsSpecification& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}
    ///@}
  private:

    bool m_enableAcceleration;
    bool m_enableAccelerationHasBeenSet = false;

    TunnelInsideIpVersion m_tunnelInsideIpVersion;
    bool m_tunnelInsideIpVersionHasBeenSet = false;

    Aws::Vector<VpnTunnelOptionsSpecification> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet = false;

    Aws::String m_localIpv4NetworkCidr;
    bool m_localIpv4NetworkCidrHasBeenSet = false;

    Aws::String m_remoteIpv4NetworkCidr;
    bool m_remoteIpv4NetworkCidrHasBeenSet = false;

    Aws::String m_localIpv6NetworkCidr;
    bool m_localIpv6NetworkCidrHasBeenSet = false;

    Aws::String m_remoteIpv6NetworkCidr;
    bool m_remoteIpv6NetworkCidrHasBeenSet = false;

    Aws::String m_outsideIpAddressType;
    bool m_outsideIpAddressTypeHasBeenSet = false;

    Aws::String m_transportTransitGatewayAttachmentId;
    bool m_transportTransitGatewayAttachmentIdHasBeenSet = false;

    bool m_staticRoutesOnly;
    bool m_staticRoutesOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
