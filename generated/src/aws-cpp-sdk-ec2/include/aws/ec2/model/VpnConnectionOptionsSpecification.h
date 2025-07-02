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
    AWS_EC2_API VpnConnectionOptionsSpecification() = default;
    AWS_EC2_API VpnConnectionOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnectionOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableAcceleration() const { return m_enableAcceleration; }
    inline bool EnableAccelerationHasBeenSet() const { return m_enableAccelerationHasBeenSet; }
    inline void SetEnableAcceleration(bool value) { m_enableAccelerationHasBeenSet = true; m_enableAcceleration = value; }
    inline VpnConnectionOptionsSpecification& WithEnableAcceleration(bool value) { SetEnableAcceleration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline TunnelInsideIpVersion GetTunnelInsideIpVersion() const { return m_tunnelInsideIpVersion; }
    inline bool TunnelInsideIpVersionHasBeenSet() const { return m_tunnelInsideIpVersionHasBeenSet; }
    inline void SetTunnelInsideIpVersion(TunnelInsideIpVersion value) { m_tunnelInsideIpVersionHasBeenSet = true; m_tunnelInsideIpVersion = value; }
    inline VpnConnectionOptionsSpecification& WithTunnelInsideIpVersion(TunnelInsideIpVersion value) { SetTunnelInsideIpVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline const Aws::Vector<VpnTunnelOptionsSpecification>& GetTunnelOptions() const { return m_tunnelOptions; }
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }
    template<typename TunnelOptionsT = Aws::Vector<VpnTunnelOptionsSpecification>>
    void SetTunnelOptions(TunnelOptionsT&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::forward<TunnelOptionsT>(value); }
    template<typename TunnelOptionsT = Aws::Vector<VpnTunnelOptionsSpecification>>
    VpnConnectionOptionsSpecification& WithTunnelOptions(TunnelOptionsT&& value) { SetTunnelOptions(std::forward<TunnelOptionsT>(value)); return *this;}
    template<typename TunnelOptionsT = VpnTunnelOptionsSpecification>
    VpnConnectionOptionsSpecification& AddTunnelOptions(TunnelOptionsT&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.emplace_back(std::forward<TunnelOptionsT>(value)); return *this; }
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
    VpnConnectionOptionsSpecification& WithLocalIpv4NetworkCidr(LocalIpv4NetworkCidrT&& value) { SetLocalIpv4NetworkCidr(std::forward<LocalIpv4NetworkCidrT>(value)); return *this;}
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
    VpnConnectionOptionsSpecification& WithRemoteIpv4NetworkCidr(RemoteIpv4NetworkCidrT&& value) { SetRemoteIpv4NetworkCidr(std::forward<RemoteIpv4NetworkCidrT>(value)); return *this;}
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
    VpnConnectionOptionsSpecification& WithLocalIpv6NetworkCidr(LocalIpv6NetworkCidrT&& value) { SetLocalIpv6NetworkCidr(std::forward<LocalIpv6NetworkCidrT>(value)); return *this;}
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
    VpnConnectionOptionsSpecification& WithRemoteIpv6NetworkCidr(RemoteIpv6NetworkCidrT&& value) { SetRemoteIpv6NetworkCidr(std::forward<RemoteIpv6NetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address assigned to the outside interface of the customer
     * gateway device.</p> <p>Valid values: <code>PrivateIpv4</code> |
     * <code>PublicIpv4</code> | <code>Ipv6</code> </p> <p>Default:
     * <code>PublicIpv4</code> </p>
     */
    inline const Aws::String& GetOutsideIpAddressType() const { return m_outsideIpAddressType; }
    inline bool OutsideIpAddressTypeHasBeenSet() const { return m_outsideIpAddressTypeHasBeenSet; }
    template<typename OutsideIpAddressTypeT = Aws::String>
    void SetOutsideIpAddressType(OutsideIpAddressTypeT&& value) { m_outsideIpAddressTypeHasBeenSet = true; m_outsideIpAddressType = std::forward<OutsideIpAddressTypeT>(value); }
    template<typename OutsideIpAddressTypeT = Aws::String>
    VpnConnectionOptionsSpecification& WithOutsideIpAddressType(OutsideIpAddressTypeT&& value) { SetOutsideIpAddressType(std::forward<OutsideIpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway attachment ID to use for the VPN tunnel.</p> <p>Required
     * if <code>OutsideIpAddressType</code> is set to <code>PrivateIpv4</code>.</p>
     */
    inline const Aws::String& GetTransportTransitGatewayAttachmentId() const { return m_transportTransitGatewayAttachmentId; }
    inline bool TransportTransitGatewayAttachmentIdHasBeenSet() const { return m_transportTransitGatewayAttachmentIdHasBeenSet; }
    template<typename TransportTransitGatewayAttachmentIdT = Aws::String>
    void SetTransportTransitGatewayAttachmentId(TransportTransitGatewayAttachmentIdT&& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = std::forward<TransportTransitGatewayAttachmentIdT>(value); }
    template<typename TransportTransitGatewayAttachmentIdT = Aws::String>
    VpnConnectionOptionsSpecification& WithTransportTransitGatewayAttachmentId(TransportTransitGatewayAttachmentIdT&& value) { SetTransportTransitGatewayAttachmentId(std::forward<TransportTransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetStaticRoutesOnly() const { return m_staticRoutesOnly; }
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }
    inline VpnConnectionOptionsSpecification& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}
    ///@}
  private:

    bool m_enableAcceleration{false};
    bool m_enableAccelerationHasBeenSet = false;

    TunnelInsideIpVersion m_tunnelInsideIpVersion{TunnelInsideIpVersion::NOT_SET};
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

    bool m_staticRoutesOnly{false};
    bool m_staticRoutesOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
