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
    AWS_ELASTICLOADBALANCINGV2_API CreateLoadBalancerRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateLoadBalancerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateLoadBalancerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline CreateLoadBalancerRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline CreateLoadBalancerRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline CreateLoadBalancerRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline CreateLoadBalancerRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
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
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const{ return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    inline void SetSubnetMappings(const Aws::Vector<SubnetMapping>& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = value; }
    inline void SetSubnetMappings(Aws::Vector<SubnetMapping>&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::move(value); }
    inline CreateLoadBalancerRequest& WithSubnetMappings(const Aws::Vector<SubnetMapping>& value) { SetSubnetMappings(value); return *this;}
    inline CreateLoadBalancerRequest& WithSubnetMappings(Aws::Vector<SubnetMapping>&& value) { SetSubnetMappings(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& AddSubnetMappings(const SubnetMapping& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(value); return *this; }
    inline CreateLoadBalancerRequest& AddSubnetMappings(SubnetMapping&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers and Network Load Balancers] The IDs of the
     * security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline CreateLoadBalancerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline CreateLoadBalancerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline CreateLoadBalancerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline CreateLoadBalancerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
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
    inline const LoadBalancerSchemeEnum& GetScheme() const{ return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(const LoadBalancerSchemeEnum& value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline void SetScheme(LoadBalancerSchemeEnum&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }
    inline CreateLoadBalancerRequest& WithScheme(const LoadBalancerSchemeEnum& value) { SetScheme(value); return *this;}
    inline CreateLoadBalancerRequest& WithScheme(LoadBalancerSchemeEnum&& value) { SetScheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the load balancer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLoadBalancerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateLoadBalancerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLoadBalancerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline const LoadBalancerTypeEnum& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LoadBalancerTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LoadBalancerTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateLoadBalancerRequest& WithType(const LoadBalancerTypeEnum& value) { SetType(value); return *this;}
    inline CreateLoadBalancerRequest& WithType(LoadBalancerTypeEnum&& value) { SetType(std::move(value)); return *this;}
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
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateLoadBalancerRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateLoadBalancerRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancers on Outposts] The ID of the customer-owned address
     * pool (CoIP pool).</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }
    inline CreateLoadBalancerRequest& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline CreateLoadBalancerRequest& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline CreateLoadBalancerRequest& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
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
    inline CreateLoadBalancerRequest& WithEnablePrefixForIpv6SourceNat(const EnablePrefixForIpv6SourceNatEnum& value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    inline CreateLoadBalancerRequest& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum&& value) { SetEnablePrefixForIpv6SourceNat(std::move(value)); return *this;}
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

    LoadBalancerSchemeEnum m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    LoadBalancerTypeEnum m_type;
    bool m_typeHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat;
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
