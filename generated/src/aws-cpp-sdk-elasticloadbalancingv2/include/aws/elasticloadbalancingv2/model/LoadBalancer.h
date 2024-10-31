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
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer();
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline LoadBalancer& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline LoadBalancer& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline LoadBalancer& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }
    inline LoadBalancer& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}
    inline LoadBalancer& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}
    inline LoadBalancer& WithDNSName(const char* value) { SetDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneId() const{ return m_canonicalHostedZoneId; }
    inline bool CanonicalHostedZoneIdHasBeenSet() const { return m_canonicalHostedZoneIdHasBeenSet; }
    inline void SetCanonicalHostedZoneId(const Aws::String& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = value; }
    inline void SetCanonicalHostedZoneId(Aws::String&& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = std::move(value); }
    inline void SetCanonicalHostedZoneId(const char* value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId.assign(value); }
    inline LoadBalancer& WithCanonicalHostedZoneId(const Aws::String& value) { SetCanonicalHostedZoneId(value); return *this;}
    inline LoadBalancer& WithCanonicalHostedZoneId(Aws::String&& value) { SetCanonicalHostedZoneId(std::move(value)); return *this;}
    inline LoadBalancer& WithCanonicalHostedZoneId(const char* value) { SetCanonicalHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline LoadBalancer& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline LoadBalancer& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline LoadBalancer& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline LoadBalancer& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline LoadBalancer& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
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
    inline const LoadBalancerSchemeEnum& GetScheme() const{ return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(const LoadBalancerSchemeEnum& value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline void SetScheme(LoadBalancerSchemeEnum&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }
    inline LoadBalancer& WithScheme(const LoadBalancerSchemeEnum& value) { SetScheme(value); return *this;}
    inline LoadBalancer& WithScheme(LoadBalancerSchemeEnum&& value) { SetScheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline LoadBalancer& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline LoadBalancer& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline LoadBalancer& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the load balancer.</p>
     */
    inline const LoadBalancerState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const LoadBalancerState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(LoadBalancerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline LoadBalancer& WithState(const LoadBalancerState& value) { SetState(value); return *this;}
    inline LoadBalancer& WithState(LoadBalancerState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer.</p>
     */
    inline const LoadBalancerTypeEnum& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LoadBalancerTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LoadBalancerTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline LoadBalancer& WithType(const LoadBalancerTypeEnum& value) { SetType(value); return *this;}
    inline LoadBalancer& WithType(LoadBalancerTypeEnum&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets for the load balancer.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline LoadBalancer& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}
    inline LoadBalancer& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline LoadBalancer& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline LoadBalancer& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline LoadBalancer& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline LoadBalancer& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline LoadBalancer& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline LoadBalancer& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline LoadBalancer& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
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
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline LoadBalancer& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline LoadBalancer& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers on Outposts] The ID of the customer-owned address
     * pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }
    inline LoadBalancer& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline LoadBalancer& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline LoadBalancer& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to evaluate inbound security group rules for traffic sent
     * to a Network Load Balancer through Amazon Web Services PrivateLink.</p>
     */
    inline const Aws::String& GetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic() const{ return m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic; }
    inline bool EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet() const { return m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const Aws::String& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = value; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(Aws::String&& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = std::move(value); }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const char* value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic.assign(value); }
    inline LoadBalancer& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const Aws::String& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(value); return *this;}
    inline LoadBalancer& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(Aws::String&& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(std::move(value)); return *this;}
    inline LoadBalancer& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const char* value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers with UDP listeners] Indicates whether to use an IPv6
     * prefix from each subnet for source NAT. The IP address type must be
     * <code>dualstack</code>. The default value is <code>off</code>.</p>
     */
    inline const EnablePrefixForIpv6SourceNatEnum& GetEnablePrefixForIpv6SourceNat() const{ return m_enablePrefixForIpv6SourceNat; }
    inline bool EnablePrefixForIpv6SourceNatHasBeenSet() const { return m_enablePrefixForIpv6SourceNatHasBeenSet; }
    inline void SetEnablePrefixForIpv6SourceNat(const EnablePrefixForIpv6SourceNatEnum& value) { m_enablePrefixForIpv6SourceNatHasBeenSet = true; m_enablePrefixForIpv6SourceNat = value; }
    inline void SetEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum&& value) { m_enablePrefixForIpv6SourceNatHasBeenSet = true; m_enablePrefixForIpv6SourceNat = std::move(value); }
    inline LoadBalancer& WithEnablePrefixForIpv6SourceNat(const EnablePrefixForIpv6SourceNatEnum& value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    inline LoadBalancer& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum&& value) { SetEnablePrefixForIpv6SourceNat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_canonicalHostedZoneId;
    bool m_canonicalHostedZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    LoadBalancerSchemeEnum m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet = false;

    LoadBalancerTypeEnum m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic;
    bool m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat;
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
