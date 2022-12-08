/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcEndpointType.h>
#include <aws/ec2/model/State.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/DnsOptions.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/LastError.h>
#include <aws/ec2/model/SecurityGroupIdentifier.h>
#include <aws/ec2/model/DnsEntry.h>
#include <aws/ec2/model/Tag.h>
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
  class VpcEndpoint
  {
  public:
    AWS_EC2_API VpcEndpoint();
    AWS_EC2_API VpcEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The type of endpoint.</p>
     */
    inline const VpcEndpointType& GetVpcEndpointType() const{ return m_vpcEndpointType; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }

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
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

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
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

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
     * <p>The state of the endpoint.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline VpcEndpoint& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The state of the endpoint.</p>
     */
    inline VpcEndpoint& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

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
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }

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
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline VpcEndpoint& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline VpcEndpoint& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline VpcEndpoint& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline VpcEndpoint& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline VpcEndpoint& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline void SetGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline void SetGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline VpcEndpoint& WithGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline VpcEndpoint& WithGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline VpcEndpoint& AddGroups(const SecurityGroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline VpcEndpoint& AddGroups(SecurityGroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline VpcEndpoint& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline VpcEndpoint& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptions& GetDnsOptions() const{ return m_dnsOptions; }

    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }

    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline void SetDnsOptions(const DnsOptions& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = value; }

    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline void SetDnsOptions(DnsOptions&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::move(value); }

    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline VpcEndpoint& WithDnsOptions(const DnsOptions& value) { SetDnsOptions(value); return *this;}

    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline VpcEndpoint& WithDnsOptions(DnsOptions&& value) { SetDnsOptions(std::move(value)); return *this;}


    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }

    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }

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
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline bool GetRequesterManaged() const{ return m_requesterManaged; }

    /**
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }

    /**
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }

    /**
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline VpcEndpoint& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}


    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
     */
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

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
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }

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
     * <p>The date and time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline VpcEndpoint& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline VpcEndpoint& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline VpcEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline VpcEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline VpcEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the endpoint.</p>
     */
    inline VpcEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline VpcEndpoint& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline VpcEndpoint& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline VpcEndpoint& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline const LastError& GetLastError() const{ return m_lastError; }

    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline bool LastErrorHasBeenSet() const { return m_lastErrorHasBeenSet; }

    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline void SetLastError(const LastError& value) { m_lastErrorHasBeenSet = true; m_lastError = value; }

    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline void SetLastError(LastError&& value) { m_lastErrorHasBeenSet = true; m_lastError = std::move(value); }

    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline VpcEndpoint& WithLastError(const LastError& value) { SetLastError(value); return *this;}

    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline VpcEndpoint& WithLastError(LastError&& value) { SetLastError(std::move(value)); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    VpcEndpointType m_vpcEndpointType;
    bool m_vpcEndpointTypeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<SecurityGroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptions m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    bool m_privateDnsEnabled;
    bool m_privateDnsEnabledHasBeenSet = false;

    bool m_requesterManaged;
    bool m_requesterManagedHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::Vector<DnsEntry> m_dnsEntries;
    bool m_dnsEntriesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    LastError m_lastError;
    bool m_lastErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
