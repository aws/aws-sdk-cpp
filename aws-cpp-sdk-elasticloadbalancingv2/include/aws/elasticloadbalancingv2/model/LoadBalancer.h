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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerSchemeEnum.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerState.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
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
  class AWS_ELASTICLOADBALANCINGV2_API LoadBalancer
  {
  public:
    LoadBalancer();
    LoadBalancer(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}


    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline LoadBalancer& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline LoadBalancer& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline LoadBalancer& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneId() const{ return m_canonicalHostedZoneId; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline bool CanonicalHostedZoneIdHasBeenSet() const { return m_canonicalHostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline void SetCanonicalHostedZoneId(const Aws::String& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = value; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline void SetCanonicalHostedZoneId(Aws::String&& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = std::move(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline void SetCanonicalHostedZoneId(const char* value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId.assign(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline LoadBalancer& WithCanonicalHostedZoneId(const Aws::String& value) { SetCanonicalHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline LoadBalancer& WithCanonicalHostedZoneId(Aws::String&& value) { SetCanonicalHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline LoadBalancer& WithCanonicalHostedZoneId(const char* value) { SetCanonicalHostedZoneId(value); return *this;}


    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline LoadBalancer& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline LoadBalancer& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancer& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p>
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
     * access to the VPC for the load balancer.</p>
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
     * access to the VPC for the load balancer.</p>
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
     * access to the VPC for the load balancer.</p>
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
     * access to the VPC for the load balancer.</p>
     */
    inline LoadBalancer& WithScheme(const LoadBalancerSchemeEnum& value) { SetScheme(value); return *this;}

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses. The
     * DNS name of an Internet-facing load balancer is publicly resolvable to the
     * public IP addresses of the nodes. Therefore, Internet-facing load balancers can
     * route requests from clients over the internet.</p> <p>The nodes of an internal
     * load balancer have only private IP addresses. The DNS name of an internal load
     * balancer is publicly resolvable to the private IP addresses of the nodes.
     * Therefore, internal load balancers can only route requests from clients with
     * access to the VPC for the load balancer.</p>
     */
    inline LoadBalancer& WithScheme(LoadBalancerSchemeEnum&& value) { SetScheme(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancer& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancer& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancer& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The state of the load balancer.</p>
     */
    inline const LoadBalancerState& GetState() const{ return m_state; }

    /**
     * <p>The state of the load balancer.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the load balancer.</p>
     */
    inline void SetState(const LoadBalancerState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the load balancer.</p>
     */
    inline void SetState(LoadBalancerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the load balancer.</p>
     */
    inline LoadBalancer& WithState(const LoadBalancerState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the load balancer.</p>
     */
    inline LoadBalancer& WithState(LoadBalancerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of load balancer.</p>
     */
    inline const LoadBalancerTypeEnum& GetType() const{ return m_type; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline void SetType(const LoadBalancerTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline void SetType(LoadBalancerTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of load balancer.</p>
     */
    inline LoadBalancer& WithType(const LoadBalancerTypeEnum& value) { SetType(value); return *this;}

    /**
     * <p>The type of load balancer.</p>
     */
    inline LoadBalancer& WithType(LoadBalancerTypeEnum&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancer& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancer& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancer& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancer& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline LoadBalancer& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline LoadBalancer& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline LoadBalancer& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline LoadBalancer& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline LoadBalancer& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline LoadBalancer& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline LoadBalancer& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet;

    Aws::String m_canonicalHostedZoneId;
    bool m_canonicalHostedZoneIdHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    LoadBalancerSchemeEnum m_scheme;
    bool m_schemeHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet;

    LoadBalancerTypeEnum m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
