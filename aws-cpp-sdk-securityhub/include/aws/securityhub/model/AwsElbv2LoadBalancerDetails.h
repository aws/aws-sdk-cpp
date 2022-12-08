/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/LoadBalancerState.h>
#include <aws/securityhub/model/AvailabilityZone.h>
#include <aws/securityhub/model/AwsElbv2LoadBalancerAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbv2LoadBalancerDetails">AWS
   * API Reference</a></p>
   */
  class AwsElbv2LoadBalancerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails();
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AwsElbv2LoadBalancerDetails& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


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
    inline AwsElbv2LoadBalancerDetails& WithCanonicalHostedZoneId(const Aws::String& value) { SetCanonicalHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithCanonicalHostedZoneId(Aws::String&& value) { SetCanonicalHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithCanonicalHostedZoneId(const char* value) { SetCanonicalHostedZoneId(value); return *this;}


    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


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
    inline AwsElbv2LoadBalancerDetails& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline const Aws::String& GetIpAddressType() const{ return m_ipAddressType; }

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
    inline void SetIpAddressType(const Aws::String& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline void SetIpAddressType(Aws::String&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline void SetIpAddressType(const char* value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType.assign(value); }

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}

    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}


    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}

    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithScheme(const char* value) { SetScheme(value); return *this;}


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
    inline AwsElbv2LoadBalancerDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


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
    inline AwsElbv2LoadBalancerDetails& WithState(const LoadBalancerState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithState(LoadBalancerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of load balancer.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of load balancer.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of load balancer.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithType(const char* value) { SetType(value); return *this;}


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
    inline AwsElbv2LoadBalancerDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline const Aws::Vector<AwsElbv2LoadBalancerAttribute>& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(const Aws::Vector<AwsElbv2LoadBalancerAttribute>& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = value; }

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(Aws::Vector<AwsElbv2LoadBalancerAttribute>&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::move(value); }

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithLoadBalancerAttributes(const Aws::Vector<AwsElbv2LoadBalancerAttribute>& value) { SetLoadBalancerAttributes(value); return *this;}

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& WithLoadBalancerAttributes(Aws::Vector<AwsElbv2LoadBalancerAttribute>&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddLoadBalancerAttributes(const AwsElbv2LoadBalancerAttribute& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes.push_back(value); return *this; }

    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline AwsElbv2LoadBalancerDetails& AddLoadBalancerAttributes(AwsElbv2LoadBalancerAttribute&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_canonicalHostedZoneId;
    bool m_canonicalHostedZoneIdHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsElbv2LoadBalancerAttribute> m_loadBalancerAttributes;
    bool m_loadBalancerAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
