/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerAddress.h>
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
   * <p>Information about an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone() = default;
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetZoneName() const { return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    template<typename ZoneNameT = Aws::String>
    void SetZoneName(ZoneNameT&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::forward<ZoneNameT>(value); }
    template<typename ZoneNameT = Aws::String>
    AvailabilityZone& WithZoneName(ZoneNameT&& value) { SetZoneName(std::forward<ZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AvailabilityZone& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    AvailabilityZone& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline const Aws::Vector<LoadBalancerAddress>& GetLoadBalancerAddresses() const { return m_loadBalancerAddresses; }
    inline bool LoadBalancerAddressesHasBeenSet() const { return m_loadBalancerAddressesHasBeenSet; }
    template<typename LoadBalancerAddressesT = Aws::Vector<LoadBalancerAddress>>
    void SetLoadBalancerAddresses(LoadBalancerAddressesT&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses = std::forward<LoadBalancerAddressesT>(value); }
    template<typename LoadBalancerAddressesT = Aws::Vector<LoadBalancerAddress>>
    AvailabilityZone& WithLoadBalancerAddresses(LoadBalancerAddressesT&& value) { SetLoadBalancerAddresses(std::forward<LoadBalancerAddressesT>(value)); return *this;}
    template<typename LoadBalancerAddressesT = LoadBalancerAddress>
    AvailabilityZone& AddLoadBalancerAddresses(LoadBalancerAddressesT&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses.emplace_back(std::forward<LoadBalancerAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers with UDP listeners] The IPv6 prefixes to use for
     * source NAT. For each subnet, specify an IPv6 prefix (/80 netmask) from the
     * subnet CIDR block or <code>auto_assigned</code> to use an IPv6 prefix selected
     * at random from the subnet CIDR block.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNatIpv6Prefixes() const { return m_sourceNatIpv6Prefixes; }
    inline bool SourceNatIpv6PrefixesHasBeenSet() const { return m_sourceNatIpv6PrefixesHasBeenSet; }
    template<typename SourceNatIpv6PrefixesT = Aws::Vector<Aws::String>>
    void SetSourceNatIpv6Prefixes(SourceNatIpv6PrefixesT&& value) { m_sourceNatIpv6PrefixesHasBeenSet = true; m_sourceNatIpv6Prefixes = std::forward<SourceNatIpv6PrefixesT>(value); }
    template<typename SourceNatIpv6PrefixesT = Aws::Vector<Aws::String>>
    AvailabilityZone& WithSourceNatIpv6Prefixes(SourceNatIpv6PrefixesT&& value) { SetSourceNatIpv6Prefixes(std::forward<SourceNatIpv6PrefixesT>(value)); return *this;}
    template<typename SourceNatIpv6PrefixesT = Aws::String>
    AvailabilityZone& AddSourceNatIpv6Prefixes(SourceNatIpv6PrefixesT&& value) { m_sourceNatIpv6PrefixesHasBeenSet = true; m_sourceNatIpv6Prefixes.emplace_back(std::forward<SourceNatIpv6PrefixesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::Vector<LoadBalancerAddress> m_loadBalancerAddresses;
    bool m_loadBalancerAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceNatIpv6Prefixes;
    bool m_sourceNatIpv6PrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
