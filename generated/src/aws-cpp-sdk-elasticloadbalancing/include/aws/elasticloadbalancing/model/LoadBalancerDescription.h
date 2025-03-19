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
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription() = default;
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API LoadBalancerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancerDescription& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    LoadBalancerDescription& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const { return m_canonicalHostedZoneName; }
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }
    template<typename CanonicalHostedZoneNameT = Aws::String>
    void SetCanonicalHostedZoneName(CanonicalHostedZoneNameT&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::forward<CanonicalHostedZoneNameT>(value); }
    template<typename CanonicalHostedZoneNameT = Aws::String>
    LoadBalancerDescription& WithCanonicalHostedZoneName(CanonicalHostedZoneNameT&& value) { SetCanonicalHostedZoneName(std::forward<CanonicalHostedZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const { return m_canonicalHostedZoneNameID; }
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }
    template<typename CanonicalHostedZoneNameIDT = Aws::String>
    void SetCanonicalHostedZoneNameID(CanonicalHostedZoneNameIDT&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::forward<CanonicalHostedZoneNameIDT>(value); }
    template<typename CanonicalHostedZoneNameIDT = Aws::String>
    LoadBalancerDescription& WithCanonicalHostedZoneNameID(CanonicalHostedZoneNameIDT&& value) { SetCanonicalHostedZoneNameID(std::forward<CanonicalHostedZoneNameIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline const Aws::Vector<ListenerDescription>& GetListenerDescriptions() const { return m_listenerDescriptions; }
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }
    template<typename ListenerDescriptionsT = Aws::Vector<ListenerDescription>>
    void SetListenerDescriptions(ListenerDescriptionsT&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::forward<ListenerDescriptionsT>(value); }
    template<typename ListenerDescriptionsT = Aws::Vector<ListenerDescription>>
    LoadBalancerDescription& WithListenerDescriptions(ListenerDescriptionsT&& value) { SetListenerDescriptions(std::forward<ListenerDescriptionsT>(value)); return *this;}
    template<typename ListenerDescriptionsT = ListenerDescription>
    LoadBalancerDescription& AddListenerDescriptions(ListenerDescriptionsT&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.emplace_back(std::forward<ListenerDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline const Policies& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Policies>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Policies>
    LoadBalancerDescription& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline const Aws::Vector<BackendServerDescription>& GetBackendServerDescriptions() const { return m_backendServerDescriptions; }
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }
    template<typename BackendServerDescriptionsT = Aws::Vector<BackendServerDescription>>
    void SetBackendServerDescriptions(BackendServerDescriptionsT&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::forward<BackendServerDescriptionsT>(value); }
    template<typename BackendServerDescriptionsT = Aws::Vector<BackendServerDescription>>
    LoadBalancerDescription& WithBackendServerDescriptions(BackendServerDescriptionsT&& value) { SetBackendServerDescriptions(std::forward<BackendServerDescriptionsT>(value)); return *this;}
    template<typename BackendServerDescriptionsT = BackendServerDescription>
    LoadBalancerDescription& AddBackendServerDescriptions(BackendServerDescriptionsT&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.emplace_back(std::forward<BackendServerDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    LoadBalancerDescription& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    LoadBalancerDescription& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    LoadBalancerDescription& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    LoadBalancerDescription& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVPCId() const { return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    template<typename VPCIdT = Aws::String>
    void SetVPCId(VPCIdT&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::forward<VPCIdT>(value); }
    template<typename VPCIdT = Aws::String>
    LoadBalancerDescription& WithVPCId(VPCIdT&& value) { SetVPCId(std::forward<VPCIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Instance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Instance>>
    LoadBalancerDescription& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Instance>
    LoadBalancerDescription& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline const HealthCheck& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = HealthCheck>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = HealthCheck>
    LoadBalancerDescription& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline const SourceSecurityGroup& GetSourceSecurityGroup() const { return m_sourceSecurityGroup; }
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }
    template<typename SourceSecurityGroupT = SourceSecurityGroup>
    void SetSourceSecurityGroup(SourceSecurityGroupT&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::forward<SourceSecurityGroupT>(value); }
    template<typename SourceSecurityGroupT = SourceSecurityGroup>
    LoadBalancerDescription& WithSourceSecurityGroup(SourceSecurityGroupT&& value) { SetSourceSecurityGroup(std::forward<SourceSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    LoadBalancerDescription& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    LoadBalancerDescription& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
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
    LoadBalancerDescription& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    template<typename SchemeT = Aws::String>
    void SetScheme(SchemeT&& value) { m_schemeHasBeenSet = true; m_scheme = std::forward<SchemeT>(value); }
    template<typename SchemeT = Aws::String>
    LoadBalancerDescription& WithScheme(SchemeT&& value) { SetScheme(std::forward<SchemeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
