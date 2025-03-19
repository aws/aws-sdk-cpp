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
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping() = default;
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API SubnetMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    SubnetMapping& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internet-facing load balancer.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    SubnetMapping& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline const Aws::String& GetPrivateIPv4Address() const { return m_privateIPv4Address; }
    inline bool PrivateIPv4AddressHasBeenSet() const { return m_privateIPv4AddressHasBeenSet; }
    template<typename PrivateIPv4AddressT = Aws::String>
    void SetPrivateIPv4Address(PrivateIPv4AddressT&& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = std::forward<PrivateIPv4AddressT>(value); }
    template<typename PrivateIPv4AddressT = Aws::String>
    SubnetMapping& WithPrivateIPv4Address(PrivateIPv4AddressT&& value) { SetPrivateIPv4Address(std::forward<PrivateIPv4AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline const Aws::String& GetIPv6Address() const { return m_iPv6Address; }
    inline bool IPv6AddressHasBeenSet() const { return m_iPv6AddressHasBeenSet; }
    template<typename IPv6AddressT = Aws::String>
    void SetIPv6Address(IPv6AddressT&& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = std::forward<IPv6AddressT>(value); }
    template<typename IPv6AddressT = Aws::String>
    SubnetMapping& WithIPv6Address(IPv6AddressT&& value) { SetIPv6Address(std::forward<IPv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers with UDP listeners] The IPv6 prefix to use for source
     * NAT. Specify an IPv6 prefix (/80 netmask) from the subnet CIDR block or
     * <code>auto_assigned</code> to use an IPv6 prefix selected at random from the
     * subnet CIDR block.</p>
     */
    inline const Aws::String& GetSourceNatIpv6Prefix() const { return m_sourceNatIpv6Prefix; }
    inline bool SourceNatIpv6PrefixHasBeenSet() const { return m_sourceNatIpv6PrefixHasBeenSet; }
    template<typename SourceNatIpv6PrefixT = Aws::String>
    void SetSourceNatIpv6Prefix(SourceNatIpv6PrefixT&& value) { m_sourceNatIpv6PrefixHasBeenSet = true; m_sourceNatIpv6Prefix = std::forward<SourceNatIpv6PrefixT>(value); }
    template<typename SourceNatIpv6PrefixT = Aws::String>
    SubnetMapping& WithSourceNatIpv6Prefix(SourceNatIpv6PrefixT&& value) { SetSourceNatIpv6Prefix(std::forward<SourceNatIpv6PrefixT>(value)); return *this;}
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
