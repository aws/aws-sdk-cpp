/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes an IPv6 address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceIpv6Address">AWS
   * API Reference</a></p>
   */
  class InstanceIpv6Address
  {
  public:
    AWS_EC2_API InstanceIpv6Address();
    AWS_EC2_API InstanceIpv6Address(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceIpv6Address& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv6 address.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }

    /**
     * <p>The IPv6 address.</p>
     */
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }

    /**
     * <p>The IPv6 address.</p>
     */
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }

    /**
     * <p>The IPv6 address.</p>
     */
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }

    /**
     * <p>The IPv6 address.</p>
     */
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }

    /**
     * <p>The IPv6 address.</p>
     */
    inline InstanceIpv6Address& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}

    /**
     * <p>The IPv6 address.</p>
     */
    inline InstanceIpv6Address& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}

    /**
     * <p>The IPv6 address.</p>
     */
    inline InstanceIpv6Address& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}


    /**
     * <p>Determines if an IPv6 address associated with a network interface is the
     * primary IPv6 address. When you enable an IPv6 GUA address to be a primary IPv6,
     * the first IPv6 GUA will be made the primary IPv6 address until the instance is
     * terminated or the network interface is detached. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool GetIsPrimaryIpv6() const{ return m_isPrimaryIpv6; }

    /**
     * <p>Determines if an IPv6 address associated with a network interface is the
     * primary IPv6 address. When you enable an IPv6 GUA address to be a primary IPv6,
     * the first IPv6 GUA will be made the primary IPv6 address until the instance is
     * terminated or the network interface is detached. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool IsPrimaryIpv6HasBeenSet() const { return m_isPrimaryIpv6HasBeenSet; }

    /**
     * <p>Determines if an IPv6 address associated with a network interface is the
     * primary IPv6 address. When you enable an IPv6 GUA address to be a primary IPv6,
     * the first IPv6 GUA will be made the primary IPv6 address until the instance is
     * terminated or the network interface is detached. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline void SetIsPrimaryIpv6(bool value) { m_isPrimaryIpv6HasBeenSet = true; m_isPrimaryIpv6 = value; }

    /**
     * <p>Determines if an IPv6 address associated with a network interface is the
     * primary IPv6 address. When you enable an IPv6 GUA address to be a primary IPv6,
     * the first IPv6 GUA will be made the primary IPv6 address until the instance is
     * terminated or the network interface is detached. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline InstanceIpv6Address& WithIsPrimaryIpv6(bool value) { SetIsPrimaryIpv6(value); return *this;}

  private:

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    bool m_isPrimaryIpv6;
    bool m_isPrimaryIpv6HasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
