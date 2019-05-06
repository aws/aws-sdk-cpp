/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerSchemeEnum.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerTypeEnum.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
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
  class AWS_ELASTICLOADBALANCINGV2_API CreateLoadBalancerRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline CreateLoadBalancerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline CreateLoadBalancerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, must not begin or end with a hyphen, and must not begin
     * with "internal-".</p>
     */
    inline CreateLoadBalancerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones.</p> <p>[Network Load Balancers] You can specify subnets from
     * one or more Availability Zones.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const{ return m_subnetMappings; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline void SetSubnetMappings(const Aws::Vector<SubnetMapping>& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = value; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline void SetSubnetMappings(Aws::Vector<SubnetMapping>&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::move(value); }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnetMappings(const Aws::Vector<SubnetMapping>& value) { SetSubnetMappings(value); return *this;}

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnetMappings(Aws::Vector<SubnetMapping>&& value) { SetSubnetMappings(std::move(value)); return *this;}

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnetMappings(const SubnetMapping& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(value); return *this; }

    /**
     * <p>The IDs of the public subnets. You can specify only one subnet per
     * Availability Zone. You must specify either subnets or subnet mappings.</p>
     * <p>[Application Load Balancers] You must specify subnets from at least two
     * Availability Zones. You cannot specify Elastic IP addresses for your
     * subnets.</p> <p>[Network Load Balancers] You can specify subnets from one or
     * more Availability Zones. You can specify one Elastic IP address per subnet.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnetMappings(SubnetMapping&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>[Application Load Balancers] The IDs of the security groups for the load
     * balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline const LoadBalancerSchemeEnum& GetScheme() const{ return m_scheme; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline void SetScheme(const LoadBalancerSchemeEnum& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline void SetScheme(LoadBalancerSchemeEnum&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithScheme(const LoadBalancerSchemeEnum& value) { SetScheme(value); return *this;}

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p> <p>The default is an
     * Internet-facing load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithScheme(LoadBalancerSchemeEnum&& value) { SetScheme(std::move(value)); return *this;}


    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline const LoadBalancerTypeEnum& GetType() const{ return m_type; }

    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline void SetType(const LoadBalancerTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline void SetType(LoadBalancerTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithType(const LoadBalancerTypeEnum& value) { SetType(value); return *this;}

    /**
     * <p>The type of load balancer. The default is <code>application</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithType(LoadBalancerTypeEnum&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>[Application Load Balancers] The type of IP addresses used by the subnets for
     * your load balancer. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    LoadBalancerSchemeEnum m_scheme;
    bool m_schemeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    LoadBalancerTypeEnum m_type;
    bool m_typeHasBeenSet;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
