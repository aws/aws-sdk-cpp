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
namespace EC2
{
namespace Model
{

  /**
   * <p>The tunnel options for a VPN connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnTunnelOptionsSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpnTunnelOptionsSpecification
  {
  public:
    VpnTunnelOptionsSpecification();
    VpnTunnelOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnTunnelOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTunnelInsideCidr() const{ return m_tunnelInsideCidr; }

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(const Aws::String& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = value; }

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(Aws::String&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::move(value); }

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(const char* value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr.assign(value); }

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline VpnTunnelOptionsSpecification& WithTunnelInsideCidr(const Aws::String& value) { SetTunnelInsideCidr(value); return *this;}

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline VpnTunnelOptionsSpecification& WithTunnelInsideCidr(Aws::String&& value) { SetTunnelInsideCidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline VpnTunnelOptionsSpecification& WithTunnelInsideCidr(const char* value) { SetTunnelInsideCidr(value); return *this;}


    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline const Aws::String& GetPreSharedKey() const{ return m_preSharedKey; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(const Aws::String& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = value; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(Aws::String&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::move(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(const char* value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey.assign(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline VpnTunnelOptionsSpecification& WithPreSharedKey(const Aws::String& value) { SetPreSharedKey(value); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline VpnTunnelOptionsSpecification& WithPreSharedKey(Aws::String&& value) { SetPreSharedKey(std::move(value)); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters and ._. Must be between 8 and 64
     * characters in length and cannot start with zero (0).</p>
     */
    inline VpnTunnelOptionsSpecification& WithPreSharedKey(const char* value) { SetPreSharedKey(value); return *this;}

  private:

    Aws::String m_tunnelInsideCidr;
    bool m_tunnelInsideCidrHasBeenSet;

    Aws::String m_preSharedKey;
    bool m_preSharedKeyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
