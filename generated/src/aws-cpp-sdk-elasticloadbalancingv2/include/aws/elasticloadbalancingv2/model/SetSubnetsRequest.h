/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
#include <aws/elasticloadbalancingv2/model/EnablePrefixForIpv6SourceNatEnum.h>
#include <aws/elasticloadbalancingv2/model/SubnetMapping.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class SetSubnetsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetSubnets"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    SetSubnetsRequest& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
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
    SetSubnetsRequest& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    SetSubnetsRequest& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
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
     * Balancers] You can specify subnets from one or more Availability Zones.</p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    SetSubnetsRequest& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = SubnetMapping>
    SetSubnetsRequest& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p> <p>[Application Load Balancers] The possible values
     * are <code>ipv4</code> (IPv4 addresses), <code>dualstack</code> (IPv4 and IPv6
     * addresses), and <code>dualstack-without-public-ipv4</code> (public IPv6
     * addresses and private IPv4 and IPv6 addresses).</p> <p>[Network Load Balancers
     * and Gateway Load Balancers] The possible values are <code>ipv4</code> (IPv4
     * addresses) and <code>dualstack</code> (IPv4 and IPv6 addresses).</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline SetSubnetsRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
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
    inline SetSubnetsRequest& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat{EnablePrefixForIpv6SourceNatEnum::NOT_SET};
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
