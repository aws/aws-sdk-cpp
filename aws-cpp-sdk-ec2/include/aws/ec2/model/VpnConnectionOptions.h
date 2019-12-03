/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TunnelOption.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnConnectionOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpnConnectionOptions
  {
  public:
    VpnConnectionOptions();
    VpnConnectionOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnConnectionOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether acceleration is enabled for the VPN connection.</p>
     */
    inline bool GetEnableAcceleration() const{ return m_enableAcceleration; }

    /**
     * <p>Indicates whether acceleration is enabled for the VPN connection.</p>
     */
    inline bool EnableAccelerationHasBeenSet() const { return m_enableAccelerationHasBeenSet; }

    /**
     * <p>Indicates whether acceleration is enabled for the VPN connection.</p>
     */
    inline void SetEnableAcceleration(bool value) { m_enableAccelerationHasBeenSet = true; m_enableAcceleration = value; }

    /**
     * <p>Indicates whether acceleration is enabled for the VPN connection.</p>
     */
    inline VpnConnectionOptions& WithEnableAcceleration(bool value) { SetEnableAcceleration(value); return *this;}


    /**
     * <p>Indicates whether the VPN connection uses static routes only. Static routes
     * must be used for devices that don't support BGP.</p>
     */
    inline bool GetStaticRoutesOnly() const{ return m_staticRoutesOnly; }

    /**
     * <p>Indicates whether the VPN connection uses static routes only. Static routes
     * must be used for devices that don't support BGP.</p>
     */
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }

    /**
     * <p>Indicates whether the VPN connection uses static routes only. Static routes
     * must be used for devices that don't support BGP.</p>
     */
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }

    /**
     * <p>Indicates whether the VPN connection uses static routes only. Static routes
     * must be used for devices that don't support BGP.</p>
     */
    inline VpnConnectionOptions& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}


    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline const Aws::Vector<TunnelOption>& GetTunnelOptions() const{ return m_tunnelOptions; }

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline void SetTunnelOptions(const Aws::Vector<TunnelOption>& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = value; }

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline void SetTunnelOptions(Aws::Vector<TunnelOption>&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::move(value); }

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline VpnConnectionOptions& WithTunnelOptions(const Aws::Vector<TunnelOption>& value) { SetTunnelOptions(value); return *this;}

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline VpnConnectionOptions& WithTunnelOptions(Aws::Vector<TunnelOption>&& value) { SetTunnelOptions(std::move(value)); return *this;}

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline VpnConnectionOptions& AddTunnelOptions(const TunnelOption& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(value); return *this; }

    /**
     * <p>Indicates the VPN tunnel options.</p>
     */
    inline VpnConnectionOptions& AddTunnelOptions(TunnelOption&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(std::move(value)); return *this; }

  private:

    bool m_enableAcceleration;
    bool m_enableAccelerationHasBeenSet;

    bool m_staticRoutesOnly;
    bool m_staticRoutesOnlyHasBeenSet;

    Aws::Vector<TunnelOption> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
