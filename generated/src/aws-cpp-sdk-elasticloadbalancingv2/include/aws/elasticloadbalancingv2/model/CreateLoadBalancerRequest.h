/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerSchemeEnum.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerTypeEnum.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
#include <aws/elasticloadbalancingv2/model/EnablePrefixForIpv6SourceNatEnum.h>
#include <aws/elasticloadbalancingv2/model/IpamPools.h>
#include <aws/elasticloadbalancingv2/model/SubnetMapping.h>
#include <aws/elasticloadbalancingv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class CreateLoadBalancerRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateLoadBalancerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateLoadBalancerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets. You can specify only one subnet per Availability
     * Zone. You must specify either subnets or subnet mappings, but not both. To
     * specify an Elastic IP address, specify subnet mappings instead of subnets.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Application Load Balancers on Outposts] You must
     * specify one Outpost subnet.</p> <p>[Application Load Balancers on Local Zones]
     * You can specify subnets from one or more Local Zones.</p> <p>[Network Load
     * Balancers and Gateway Load Balancers] You can specify subnets from one or more
     * Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    CreateLoadBalancerRequest& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets. You can specify only one subnet per Availability
     * Zone. You must specify either subnets or subnet mappings, but not both.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You can't specify Elastic IP addresses for your subnets.</p>
     * <p>[Application Load Balancers on Outposts] You must specify one Outpost
     * subnet.</p> <p>[Application Load Balancers on Local Zones] You can specify
     * subnets from one or more Local Zones.</p> <p>[Network Load Balancers] You can
     * specify subnets from one or more Availability Zones. You can specify one Elastic
     * IP address per subnet if you need static IP addresses for your internet-facing
     * load balancer. For internal load balancers, you can specify one private IP
     * address per subnet from the IPv4 range of the subnet. For internet-facing load
     * balancer, you can specify one IPv6 address per subnet.</p> <p>[Gateway Load
     * Balancers] You can specify subnets from one or more Availability Zones. You
     * can't specify Elastic IP addresses for your subnets.</p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    CreateLoadBalancerRequest& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = SubnetMapping>
    CreateLoadBalancerRequest& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers and Network Load Balancers] The IDs of the
     * security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    CreateLoadBalancerRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
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
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p> <p>You can't specify a scheme for a Gateway
     * Load Balancer.</p>
     */
    inline LoadBalancerSchemeEnum GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(LoadBalancerSchemeEnum value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline CreateLoadBalancerRequest& WithScheme(LoadBalancerSchemeEnum value) { SetScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the load balancer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLoadBalancerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLoadBalancerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline LoadBalancerTypeEnum GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LoadBalancerTypeEnum value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateLoadBalancerRequest& WithType(LoadBalancerTypeEnum value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type. Internal load balancers must use <code>ipv4</code>.</p>
     * <p>[Application Load Balancers] The possible values are <code>ipv4</code> (IPv4
     * addresses), <code>dualstack</code> (IPv4 and IPv6 addresses), and
     * <code>dualstack-without-public-ipv4</code> (public IPv6 addresses and private
     * IPv4 and IPv6 addresses).</p> <p>[Network Load Balancers and Gateway Load
     * Balancers] The possible values are <code>ipv4</code> (IPv4 addresses) and
     * <code>dualstack</code> (IPv4 and IPv6 addresses).</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateLoadBalancerRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers on Outposts] The ID of the customer-owned address
     * pool (CoIP pool).</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    CreateLoadBalancerRequest& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
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
    inline CreateLoadBalancerRequest& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers] The IPAM pools to use with the load
     * balancer.</p>
     */
    inline const IpamPools& GetIpamPools() const { return m_ipamPools; }
    inline bool IpamPoolsHasBeenSet() const { return m_ipamPoolsHasBeenSet; }
    template<typename IpamPoolsT = IpamPools>
    void SetIpamPools(IpamPoolsT&& value) { m_ipamPoolsHasBeenSet = true; m_ipamPools = std::forward<IpamPoolsT>(value); }
    template<typename IpamPoolsT = IpamPools>
    CreateLoadBalancerRequest& WithIpamPools(IpamPoolsT&& value) { SetIpamPools(std::forward<IpamPoolsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LoadBalancerSchemeEnum m_scheme{LoadBalancerSchemeEnum::NOT_SET};
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    LoadBalancerTypeEnum m_type{LoadBalancerTypeEnum::NOT_SET};
    bool m_typeHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat{EnablePrefixForIpv6SourceNatEnum::NOT_SET};
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;

    IpamPools m_ipamPools;
    bool m_ipamPoolsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
