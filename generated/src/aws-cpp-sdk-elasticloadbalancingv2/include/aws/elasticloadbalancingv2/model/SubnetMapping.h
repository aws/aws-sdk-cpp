/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a subnet mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SubnetMapping">AWS
   * API Reference</a></p>
   */
  class SubnetMapping
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping();
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline SubnetMapping& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline SubnetMapping& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline SubnetMapping& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internet-facing load balancer.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline SubnetMapping& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline SubnetMapping& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline SubnetMapping& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline const Aws::String& GetPrivateIPv4Address() const{ return m_privateIPv4Address; }
    inline bool PrivateIPv4AddressHasBeenSet() const { return m_privateIPv4AddressHasBeenSet; }
    inline void SetPrivateIPv4Address(const Aws::String& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = value; }
    inline void SetPrivateIPv4Address(Aws::String&& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = std::move(value); }
    inline void SetPrivateIPv4Address(const char* value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address.assign(value); }
    inline SubnetMapping& WithPrivateIPv4Address(const Aws::String& value) { SetPrivateIPv4Address(value); return *this;}
    inline SubnetMapping& WithPrivateIPv4Address(Aws::String&& value) { SetPrivateIPv4Address(std::move(value)); return *this;}
    inline SubnetMapping& WithPrivateIPv4Address(const char* value) { SetPrivateIPv4Address(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline const Aws::String& GetIPv6Address() const{ return m_iPv6Address; }
    inline bool IPv6AddressHasBeenSet() const { return m_iPv6AddressHasBeenSet; }
    inline void SetIPv6Address(const Aws::String& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = value; }
    inline void SetIPv6Address(Aws::String&& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = std::move(value); }
    inline void SetIPv6Address(const char* value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address.assign(value); }
    inline SubnetMapping& WithIPv6Address(const Aws::String& value) { SetIPv6Address(value); return *this;}
    inline SubnetMapping& WithIPv6Address(Aws::String&& value) { SetIPv6Address(std::move(value)); return *this;}
    inline SubnetMapping& WithIPv6Address(const char* value) { SetIPv6Address(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers with UDP listeners] The IPv6 prefix to use for source
     * NAT. Specify an IPv6 prefix (/80 netmask) from the subnet CIDR block or
     * <code>auto_assigned</code> to use an IPv6 prefix selected at random from the
     * subnet CIDR block.</p>
     */
    inline const Aws::String& GetSourceNatIpv6Prefix() const{ return m_sourceNatIpv6Prefix; }
    inline bool SourceNatIpv6PrefixHasBeenSet() const { return m_sourceNatIpv6PrefixHasBeenSet; }
    inline void SetSourceNatIpv6Prefix(const Aws::String& value) { m_sourceNatIpv6PrefixHasBeenSet = true; m_sourceNatIpv6Prefix = value; }
    inline void SetSourceNatIpv6Prefix(Aws::String&& value) { m_sourceNatIpv6PrefixHasBeenSet = true; m_sourceNatIpv6Prefix = std::move(value); }
    inline void SetSourceNatIpv6Prefix(const char* value) { m_sourceNatIpv6PrefixHasBeenSet = true; m_sourceNatIpv6Prefix.assign(value); }
    inline SubnetMapping& WithSourceNatIpv6Prefix(const Aws::String& value) { SetSourceNatIpv6Prefix(value); return *this;}
    inline SubnetMapping& WithSourceNatIpv6Prefix(Aws::String&& value) { SetSourceNatIpv6Prefix(std::move(value)); return *this;}
    inline SubnetMapping& WithSourceNatIpv6Prefix(const char* value) { SetSourceNatIpv6Prefix(value); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_privateIPv4Address;
    bool m_privateIPv4AddressHasBeenSet = false;

    Aws::String m_iPv6Address;
    bool m_iPv6AddressHasBeenSet = false;

    Aws::String m_sourceNatIpv6Prefix;
    bool m_sourceNatIpv6PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
