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
   * <p>Describes the configuration of a subnet for a VPC endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetConfiguration">AWS
   * API Reference</a></p>
   */
  class SubnetConfiguration
  {
  public:
    AWS_EC2_API SubnetConfiguration();
    AWS_EC2_API SubnetConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetConfiguration& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetConfiguration& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetConfiguration& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline const Aws::String& GetIpv4() const{ return m_ipv4; }

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline bool Ipv4HasBeenSet() const { return m_ipv4HasBeenSet; }

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv4(const Aws::String& value) { m_ipv4HasBeenSet = true; m_ipv4 = value; }

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv4(Aws::String&& value) { m_ipv4HasBeenSet = true; m_ipv4 = std::move(value); }

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv4(const char* value) { m_ipv4HasBeenSet = true; m_ipv4.assign(value); }

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv4(const Aws::String& value) { SetIpv4(value); return *this;}

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv4(Aws::String&& value) { SetIpv4(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv4 address if the VPC endpoint supports IPv4.</p> <p>If
     * you specify an IPv4 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv4(const char* value) { SetIpv4(value); return *this;}


    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline const Aws::String& GetIpv6() const{ return m_ipv6; }

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv6(const Aws::String& value) { m_ipv6HasBeenSet = true; m_ipv6 = value; }

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv6(Aws::String&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::move(value); }

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline void SetIpv6(const char* value) { m_ipv6HasBeenSet = true; m_ipv6.assign(value); }

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv6(const Aws::String& value) { SetIpv6(value); return *this;}

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv6(Aws::String&& value) { SetIpv6(std::move(value)); return *this;}

    /**
     * <p>The IPv6 address to assign to the endpoint network interface in the subnet.
     * You must provide an IPv6 address if the VPC endpoint supports IPv6.</p> <p>If
     * you specify an IPv6 address when modifying a VPC endpoint, we replace the
     * existing endpoint network interface with a new endpoint network interface with
     * this IP address. This process temporarily disconnects the subnet and the VPC
     * endpoint.</p>
     */
    inline SubnetConfiguration& WithIpv6(const char* value) { SetIpv6(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ipv4;
    bool m_ipv4HasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
