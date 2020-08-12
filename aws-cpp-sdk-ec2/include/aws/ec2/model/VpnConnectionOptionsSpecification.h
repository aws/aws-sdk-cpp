/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/TunnelInsideIpVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EC2_API VpnConnectionOptionsSpecification
  {
  public:
    VpnConnectionOptionsSpecification();
    VpnConnectionOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnConnectionOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableAcceleration() const{ return m_enableAcceleration; }

    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool EnableAccelerationHasBeenSet() const { return m_enableAccelerationHasBeenSet; }

    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetEnableAcceleration(bool value) { m_enableAccelerationHasBeenSet = true; m_enableAcceleration = value; }

    /**
     * <p>Indicate whether to enable acceleration for the VPN connection.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline VpnConnectionOptionsSpecification& WithEnableAcceleration(bool value) { SetEnableAcceleration(value); return *this;}


    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetStaticRoutesOnly() const{ return m_staticRoutesOnly; }

    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }

    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }

    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline VpnConnectionOptionsSpecification& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}


    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline const TunnelInsideIpVersion& GetTunnelInsideIpVersion() const{ return m_tunnelInsideIpVersion; }

    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline bool TunnelInsideIpVersionHasBeenSet() const { return m_tunnelInsideIpVersionHasBeenSet; }

    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline void SetTunnelInsideIpVersion(const TunnelInsideIpVersion& value) { m_tunnelInsideIpVersionHasBeenSet = true; m_tunnelInsideIpVersion = value; }

    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline void SetTunnelInsideIpVersion(TunnelInsideIpVersion&& value) { m_tunnelInsideIpVersionHasBeenSet = true; m_tunnelInsideIpVersion = std::move(value); }

    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline VpnConnectionOptionsSpecification& WithTunnelInsideIpVersion(const TunnelInsideIpVersion& value) { SetTunnelInsideIpVersion(value); return *this;}

    /**
     * <p>Indicate whether the VPN tunnels process IPv4 or IPv6 traffic.</p>
     * <p>Default: <code>ipv4</code> </p>
     */
    inline VpnConnectionOptionsSpecification& WithTunnelInsideIpVersion(TunnelInsideIpVersion&& value) { SetTunnelInsideIpVersion(std::move(value)); return *this;}


    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline const Aws::Vector<VpnTunnelOptionsSpecification>& GetTunnelOptions() const{ return m_tunnelOptions; }

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline void SetTunnelOptions(const Aws::Vector<VpnTunnelOptionsSpecification>& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = value; }

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline void SetTunnelOptions(Aws::Vector<VpnTunnelOptionsSpecification>&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::move(value); }

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline VpnConnectionOptionsSpecification& WithTunnelOptions(const Aws::Vector<VpnTunnelOptionsSpecification>& value) { SetTunnelOptions(value); return *this;}

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline VpnConnectionOptionsSpecification& WithTunnelOptions(Aws::Vector<VpnTunnelOptionsSpecification>&& value) { SetTunnelOptions(std::move(value)); return *this;}

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline VpnConnectionOptionsSpecification& AddTunnelOptions(const VpnTunnelOptionsSpecification& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(value); return *this; }

    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline VpnConnectionOptionsSpecification& AddTunnelOptions(VpnTunnelOptionsSpecification&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(std::move(value)); return *this; }

  private:

    bool m_enableAcceleration;
    bool m_enableAccelerationHasBeenSet;

    bool m_staticRoutesOnly;
    bool m_staticRoutesOnlyHasBeenSet;

    TunnelInsideIpVersion m_tunnelInsideIpVersion;
    bool m_tunnelInsideIpVersionHasBeenSet;

    Aws::Vector<VpnTunnelOptionsSpecification> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
