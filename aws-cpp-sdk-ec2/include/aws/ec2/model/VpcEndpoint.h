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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcEndpointType.h>
#include <aws/ec2/model/State.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SecurityGroupIdentifier.h>
#include <aws/ec2/model/DnsEntry.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a VPC endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEndpoint">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API VpcEndpoint
  {
  public:
    VpcEndpoint();
    VpcEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The type of endpoint.</p>
     */
    inline const VpcEndpointType& GetVpcEndpointType() const{ return m_vpcEndpointType; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetVpcEndpointType(const VpcEndpointType& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetVpcEndpointType(VpcEndpointType&& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = std::move(value); }

    /**
     * <p>The type of endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointType(const VpcEndpointType& value) { SetVpcEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointType(VpcEndpointType&& value) { SetVpcEndpointType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline VpcEndpoint& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpoint& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpoint& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline VpcEndpoint& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline VpcEndpoint& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline VpcEndpoint& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline VpcEndpoint& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline VpcEndpoint& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline VpcEndpoint& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline VpcEndpoint& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
     */
    inline VpcEndpoint& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline VpcEndpoint& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline VpcEndpoint& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline VpcEndpoint& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline VpcEndpoint& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnets in which the endpoint is
     * located.</p>
     */
    inline VpcEndpoint& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline void SetGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline void SetGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline VpcEndpoint& WithGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline VpcEndpoint& WithGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline VpcEndpoint& AddGroups(const SecurityGroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) Information about the security groups associated with
     * the network interface.</p>
     */
    inline VpcEndpoint& AddGroups(SecurityGroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }

    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }

    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline VpcEndpoint& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}


    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline VpcEndpoint& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline VpcEndpoint& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline VpcEndpoint& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline VpcEndpoint& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline VpcEndpoint& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const{ return m_dnsEntries; }

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline void SetDnsEntries(const Aws::Vector<DnsEntry>& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = value; }

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline void SetDnsEntries(Aws::Vector<DnsEntry>&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::move(value); }

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline VpcEndpoint& WithDnsEntries(const Aws::Vector<DnsEntry>& value) { SetDnsEntries(value); return *this;}

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline VpcEndpoint& WithDnsEntries(Aws::Vector<DnsEntry>&& value) { SetDnsEntries(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline VpcEndpoint& AddDnsEntries(const DnsEntry& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline VpcEndpoint& AddDnsEntries(DnsEntry&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline VpcEndpoint& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline VpcEndpoint& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    VpcEndpointType m_vpcEndpointType;
    bool m_vpcEndpointTypeHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<SecurityGroupIdentifier> m_groups;
    bool m_groupsHasBeenSet;

    bool m_privateDnsEnabled;
    bool m_privateDnsEnabledHasBeenSet;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet;

    Aws::Vector<DnsEntry> m_dnsEntries;
    bool m_dnsEntriesHasBeenSet;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
