/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerSchemeEnum.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerState.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
#include <aws/elasticloadbalancingv2/model/EnablePrefixForIpv6SourceNatEnum.h>
#include <aws/elasticloadbalancingv2/model/IpamPools.h>
#include <aws/elasticloadbalancingv2/model/AvailabilityZone.h>
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
   * <p>Information about a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/LoadBalancer">AWS
   * API Reference</a></p>
   */
  class LoadBalancer
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer() = default;
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    LoadBalancer& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    LoadBalancer& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneId() const { return m_canonicalHostedZoneId; }
    inline bool CanonicalHostedZoneIdHasBeenSet() const { return m_canonicalHostedZoneIdHasBeenSet; }
    template<typename CanonicalHostedZoneIdT = Aws::String>
    void SetCanonicalHostedZoneId(CanonicalHostedZoneIdT&& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = std::forward<CanonicalHostedZoneIdT>(value); }
    template<typename CanonicalHostedZoneIdT = Aws::String>
    LoadBalancer& WithCanonicalHostedZoneId(CanonicalHostedZoneIdT&& value) { SetCanonicalHostedZoneId(std::forward<CanonicalHostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    LoadBalancer& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancer& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can route requests only from clients with
     * access to the VPC for the load balancer.</p>
     */
    inline LoadBalancerSchemeEnum GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(LoadBalancerSchemeEnum value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline LoadBalancer& WithScheme(LoadBalancerSchemeEnum value) { SetScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    LoadBalancer& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the load balancer.</p>
     */
    inline const LoadBalancerState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = LoadBalancerState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = LoadBalancerState>
    LoadBalancer& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer.</p>
     */
    inline LoadBalancerTypeEnum GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LoadBalancerTypeEnum value) { m_typeHasBeenSet = true; m_type = value; }
    inline LoadBalancer& WithType(LoadBalancerTypeEnum value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets for the load balancer.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    LoadBalancer& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    LoadBalancer& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    LoadBalancer& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    LoadBalancer& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of IP addresses used for public or private connections by the
     * subnets attached to your load balancer.</p> <p>[Application Load Balancers] The
     * possible values are <code>ipv4</code> (IPv4 addresses), <code>dualstack</code>
     * (IPv4 and IPv6 addresses), and <code>dualstack-without-public-ipv4</code>
     * (public IPv6 addresses and private IPv4 and IPv6 addresses).</p> <p>[Network
     * Load Balancers and Gateway Load Balancers] The possible values are
     * <code>ipv4</code> (IPv4 addresses) and <code>dualstack</code> (IPv4 and IPv6
     * addresses).</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline LoadBalancer& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers on Outposts] The ID of the customer-owned address
     * pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    LoadBalancer& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to evaluate inbound security group rules for traffic sent
     * to a Network Load Balancer through Amazon Web Services PrivateLink.</p>
     */
    inline const Aws::String& GetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic() const { return m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic; }
    inline bool EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet() const { return m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet; }
    template<typename EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT = Aws::String>
    void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT&& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = std::forward<EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT>(value); }
    template<typename EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT = Aws::String>
    LoadBalancer& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT&& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(std::forward<EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers with UDP listeners] Indicates whether to use an IPv6
     * prefix from each subnet for source NAT. The IP address type must be
     * <code>dualstack</code>. The default value is <code>off</code>.</p>
     */
    inline EnablePrefixForIpv6SourceNatEnum GetEnablePrefixForIpv6SourceNat() const { return m_enablePrefixForIpv6SourceNat; }
    inline bool EnablePrefixForIpv6SourceNatHasBeenSet() const { return m_enablePrefixForIpv6SourceNatHasBeenSet; }
    inline void SetEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { m_enablePrefixForIpv6SourceNatHasBeenSet = true; m_enablePrefixForIpv6SourceNat = value; }
    inline LoadBalancer& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers] The IPAM pool in use by the load balancer, if
     * configured.</p>
     */
    inline const IpamPools& GetIpamPools() const { return m_ipamPools; }
    inline bool IpamPoolsHasBeenSet() const { return m_ipamPoolsHasBeenSet; }
    template<typename IpamPoolsT = IpamPools>
    void SetIpamPools(IpamPoolsT&& value) { m_ipamPoolsHasBeenSet = true; m_ipamPools = std::forward<IpamPoolsT>(value); }
    template<typename IpamPoolsT = IpamPools>
    LoadBalancer& WithIpamPools(IpamPoolsT&& value) { SetIpamPools(std::forward<IpamPoolsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_canonicalHostedZoneId;
    bool m_canonicalHostedZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    LoadBalancerSchemeEnum m_scheme{LoadBalancerSchemeEnum::NOT_SET};
    bool m_schemeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet = false;

    LoadBalancerTypeEnum m_type{LoadBalancerTypeEnum::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic;
    bool m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat{EnablePrefixForIpv6SourceNatEnum::NOT_SET};
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;

    IpamPools m_ipamPools;
    bool m_ipamPoolsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
