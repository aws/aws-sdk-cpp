/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/Policies.h>
#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <aws/elasticloadbalancing/model/SourceSecurityGroup.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticloadbalancing/model/ListenerDescription.h>
#include <aws/elasticloadbalancing/model/BackendServerDescription.h>
#include <aws/elasticloadbalancing/model/Instance.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/LoadBalancerDescription">AWS
   * API Reference</a></p>
   */
  class LoadBalancerDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription();
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline LoadBalancerDescription& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline LoadBalancerDescription& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }
    inline LoadBalancerDescription& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}
    inline LoadBalancerDescription& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithDNSName(const char* value) { SetDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const{ return m_canonicalHostedZoneName; }
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }
    inline void SetCanonicalHostedZoneName(const Aws::String& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = value; }
    inline void SetCanonicalHostedZoneName(Aws::String&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::move(value); }
    inline void SetCanonicalHostedZoneName(const char* value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName.assign(value); }
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(const Aws::String& value) { SetCanonicalHostedZoneName(value); return *this;}
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(Aws::String&& value) { SetCanonicalHostedZoneName(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(const char* value) { SetCanonicalHostedZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const{ return m_canonicalHostedZoneNameID; }
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }
    inline void SetCanonicalHostedZoneNameID(const Aws::String& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = value; }
    inline void SetCanonicalHostedZoneNameID(Aws::String&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::move(value); }
    inline void SetCanonicalHostedZoneNameID(const char* value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID.assign(value); }
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(const Aws::String& value) { SetCanonicalHostedZoneNameID(value); return *this;}
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(Aws::String&& value) { SetCanonicalHostedZoneNameID(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(const char* value) { SetCanonicalHostedZoneNameID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline const Aws::Vector<ListenerDescription>& GetListenerDescriptions() const{ return m_listenerDescriptions; }
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }
    inline void SetListenerDescriptions(const Aws::Vector<ListenerDescription>& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = value; }
    inline void SetListenerDescriptions(Aws::Vector<ListenerDescription>&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::move(value); }
    inline LoadBalancerDescription& WithListenerDescriptions(const Aws::Vector<ListenerDescription>& value) { SetListenerDescriptions(value); return *this;}
    inline LoadBalancerDescription& WithListenerDescriptions(Aws::Vector<ListenerDescription>&& value) { SetListenerDescriptions(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddListenerDescriptions(const ListenerDescription& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(value); return *this; }
    inline LoadBalancerDescription& AddListenerDescriptions(ListenerDescription&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline const Policies& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const Policies& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(Policies&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline LoadBalancerDescription& WithPolicies(const Policies& value) { SetPolicies(value); return *this;}
    inline LoadBalancerDescription& WithPolicies(Policies&& value) { SetPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline const Aws::Vector<BackendServerDescription>& GetBackendServerDescriptions() const{ return m_backendServerDescriptions; }
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }
    inline void SetBackendServerDescriptions(const Aws::Vector<BackendServerDescription>& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = value; }
    inline void SetBackendServerDescriptions(Aws::Vector<BackendServerDescription>&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::move(value); }
    inline LoadBalancerDescription& WithBackendServerDescriptions(const Aws::Vector<BackendServerDescription>& value) { SetBackendServerDescriptions(value); return *this;}
    inline LoadBalancerDescription& WithBackendServerDescriptions(Aws::Vector<BackendServerDescription>&& value) { SetBackendServerDescriptions(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddBackendServerDescriptions(const BackendServerDescription& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(value); return *this; }
    inline LoadBalancerDescription& AddBackendServerDescriptions(BackendServerDescription&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline LoadBalancerDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline LoadBalancerDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline LoadBalancerDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline LoadBalancerDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline LoadBalancerDescription& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline LoadBalancerDescription& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline LoadBalancerDescription& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline LoadBalancerDescription& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }
    inline LoadBalancerDescription& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}
    inline LoadBalancerDescription& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithVPCId(const char* value) { SetVPCId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline LoadBalancerDescription& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}
    inline LoadBalancerDescription& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline LoadBalancerDescription& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline LoadBalancerDescription& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}
    inline LoadBalancerDescription& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline const SourceSecurityGroup& GetSourceSecurityGroup() const{ return m_sourceSecurityGroup; }
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }
    inline void SetSourceSecurityGroup(const SourceSecurityGroup& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = value; }
    inline void SetSourceSecurityGroup(SourceSecurityGroup&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::move(value); }
    inline LoadBalancerDescription& WithSourceSecurityGroup(const SourceSecurityGroup& value) { SetSourceSecurityGroup(value); return *this;}
    inline LoadBalancerDescription& WithSourceSecurityGroup(SourceSecurityGroup&& value) { SetSourceSecurityGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline LoadBalancerDescription& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline LoadBalancerDescription& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline LoadBalancerDescription& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline LoadBalancerDescription& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline LoadBalancerDescription& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline LoadBalancerDescription& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline LoadBalancerDescription& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }
    inline LoadBalancerDescription& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}
    inline LoadBalancerDescription& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}
    inline LoadBalancerDescription& WithScheme(const char* value) { SetScheme(value); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_canonicalHostedZoneName;
    bool m_canonicalHostedZoneNameHasBeenSet = false;

    Aws::String m_canonicalHostedZoneNameID;
    bool m_canonicalHostedZoneNameIDHasBeenSet = false;

    Aws::Vector<ListenerDescription> m_listenerDescriptions;
    bool m_listenerDescriptionsHasBeenSet = false;

    Policies m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::Vector<BackendServerDescription> m_backendServerDescriptions;
    bool m_backendServerDescriptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    HealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    SourceSecurityGroup m_sourceSecurityGroup;
    bool m_sourceSecurityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
