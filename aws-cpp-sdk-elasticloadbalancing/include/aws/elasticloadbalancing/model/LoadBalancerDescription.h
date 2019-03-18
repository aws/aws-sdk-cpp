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
  class AWS_ELASTICLOADBALANCING_API LoadBalancerDescription
  {
  public:
    LoadBalancerDescription();
    LoadBalancerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline LoadBalancerDescription& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancerDescription& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline LoadBalancerDescription& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline LoadBalancerDescription& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline LoadBalancerDescription& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline LoadBalancerDescription& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const{ return m_canonicalHostedZoneName; }

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline void SetCanonicalHostedZoneName(const Aws::String& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = value; }

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline void SetCanonicalHostedZoneName(Aws::String&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::move(value); }

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline void SetCanonicalHostedZoneName(const char* value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName.assign(value); }

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(const Aws::String& value) { SetCanonicalHostedZoneName(value); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(Aws::String&& value) { SetCanonicalHostedZoneName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/using-domain-names-with-elb.html">Configure
     * a Custom Domain Name</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneName(const char* value) { SetCanonicalHostedZoneName(value); return *this;}


    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const{ return m_canonicalHostedZoneNameID; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(const Aws::String& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = value; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(Aws::String&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::move(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(const char* value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID.assign(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(const Aws::String& value) { SetCanonicalHostedZoneNameID(value); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(Aws::String&& value) { SetCanonicalHostedZoneNameID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithCanonicalHostedZoneNameID(const char* value) { SetCanonicalHostedZoneNameID(value); return *this;}


    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline const Aws::Vector<ListenerDescription>& GetListenerDescriptions() const{ return m_listenerDescriptions; }

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline void SetListenerDescriptions(const Aws::Vector<ListenerDescription>& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = value; }

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline void SetListenerDescriptions(Aws::Vector<ListenerDescription>&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::move(value); }

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithListenerDescriptions(const Aws::Vector<ListenerDescription>& value) { SetListenerDescriptions(value); return *this;}

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithListenerDescriptions(Aws::Vector<ListenerDescription>&& value) { SetListenerDescriptions(std::move(value)); return *this;}

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddListenerDescriptions(const ListenerDescription& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(value); return *this; }

    /**
     * <p>The listeners for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddListenerDescriptions(ListenerDescription&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline const Policies& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline void SetPolicies(const Policies& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline void SetPolicies(Policies&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithPolicies(const Policies& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies defined for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithPolicies(Policies&& value) { SetPolicies(std::move(value)); return *this;}


    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline const Aws::Vector<BackendServerDescription>& GetBackendServerDescriptions() const{ return m_backendServerDescriptions; }

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline void SetBackendServerDescriptions(const Aws::Vector<BackendServerDescription>& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = value; }

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline void SetBackendServerDescriptions(Aws::Vector<BackendServerDescription>&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::move(value); }

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline LoadBalancerDescription& WithBackendServerDescriptions(const Aws::Vector<BackendServerDescription>& value) { SetBackendServerDescriptions(value); return *this;}

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline LoadBalancerDescription& WithBackendServerDescriptions(Aws::Vector<BackendServerDescription>&& value) { SetBackendServerDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline LoadBalancerDescription& AddBackendServerDescriptions(const BackendServerDescription& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about your EC2 instances.</p>
     */
    inline LoadBalancerDescription& AddBackendServerDescriptions(BackendServerDescription&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithVPCId(const char* value) { SetVPCId(value); return *this;}


    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline LoadBalancerDescription& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The IDs of the instances for the load balancer.</p>
     */
    inline LoadBalancerDescription& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline LoadBalancerDescription& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>Information about the health checks conducted on the load balancer.</p>
     */
    inline LoadBalancerDescription& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline const SourceSecurityGroup& GetSourceSecurityGroup() const{ return m_sourceSecurityGroup; }

    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }

    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline void SetSourceSecurityGroup(const SourceSecurityGroup& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = value; }

    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline void SetSourceSecurityGroup(SourceSecurityGroup&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::move(value); }

    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline LoadBalancerDescription& WithSourceSecurityGroup(const SourceSecurityGroup& value) { SetSourceSecurityGroup(value); return *this;}

    /**
     * <p>The security group for the load balancer, which you can use as part of your
     * inbound rules for your registered instances. To only allow traffic from load
     * balancers, add a security group rule that specifies this source security group
     * as the inbound source.</p>
     */
    inline LoadBalancerDescription& WithSourceSecurityGroup(SourceSecurityGroup&& value) { SetSourceSecurityGroup(std::move(value)); return *this;}


    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline LoadBalancerDescription& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline LoadBalancerDescription& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline LoadBalancerDescription& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline LoadBalancerDescription& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups for the load balancer. Valid only for load balancers in a
     * VPC.</p>
     */
    inline LoadBalancerDescription& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


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
    inline LoadBalancerDescription& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the load balancer was created.</p>
     */
    inline LoadBalancerDescription& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline LoadBalancerDescription& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline LoadBalancerDescription& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}

    /**
     * <p>The type of load balancer. Valid only for load balancers in a VPC.</p> <p>If
     * <code>Scheme</code> is <code>internet-facing</code>, the load balancer has a
     * public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline LoadBalancerDescription& WithScheme(const char* value) { SetScheme(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet;

    Aws::String m_canonicalHostedZoneName;
    bool m_canonicalHostedZoneNameHasBeenSet;

    Aws::String m_canonicalHostedZoneNameID;
    bool m_canonicalHostedZoneNameIDHasBeenSet;

    Aws::Vector<ListenerDescription> m_listenerDescriptions;
    bool m_listenerDescriptionsHasBeenSet;

    Policies m_policies;
    bool m_policiesHasBeenSet;

    Aws::Vector<BackendServerDescription> m_backendServerDescriptions;
    bool m_backendServerDescriptionsHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet;

    HealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet;

    SourceSecurityGroup m_sourceSecurityGroup;
    bool m_sourceSecurityGroupHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
