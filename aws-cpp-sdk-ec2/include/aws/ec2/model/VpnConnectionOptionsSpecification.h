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
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }

    /**
     * <p>Indicate whether the VPN connection uses static routes only. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a
     * static route.</p> <p>Default: <code>false</code> </p>
     */
    inline VpnConnectionOptionsSpecification& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}


    /**
     * <p>The tunnel options for the VPN connection.</p>
     */
    inline const Aws::Vector<VpnTunnelOptionsSpecification>& GetTunnelOptions() const{ return m_tunnelOptions; }

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

    bool m_staticRoutesOnly;
    bool m_staticRoutesOnlyHasBeenSet;

    Aws::Vector<VpnTunnelOptionsSpecification> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
