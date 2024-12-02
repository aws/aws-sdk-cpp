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
#include <aws/ec2/model/SubnetIpPrefixes.h>
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


    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint.</p>
     */
    inline const VpcEndpointType& GetVpcEndpointType() const{ return m_vpcEndpointType; }
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }
    inline void SetVpcEndpointType(const VpcEndpointType& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }
    inline void SetVpcEndpointType(VpcEndpointType&& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = std::move(value); }
    inline VpcEndpoint& WithVpcEndpointType(const VpcEndpointType& value) { SetVpcEndpointType(value); return *this;}
    inline VpcEndpoint& WithVpcEndpointType(VpcEndpointType&& value) { SetVpcEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline VpcEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline VpcEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline VpcEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline VpcEndpoint& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline VpcEndpoint& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline VpcEndpoint& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the endpoint.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpcEndpoint& WithState(const State& value) { SetState(value); return *this;}
    inline VpcEndpoint& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }
    inline VpcEndpoint& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline VpcEndpoint& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline VpcEndpoint& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables associated with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }
    inline VpcEndpoint& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}
    inline VpcEndpoint& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}
    inline VpcEndpoint& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    inline VpcEndpoint& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }
    inline VpcEndpoint& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline VpcEndpoint& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline VpcEndpoint& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline VpcEndpoint& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline VpcEndpoint& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline VpcEndpoint& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline VpcEndpoint& WithGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { SetGroups(value); return *this;}
    inline VpcEndpoint& WithGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline VpcEndpoint& AddGroups(const SecurityGroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline VpcEndpoint& AddGroups(SecurityGroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline VpcEndpoint& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline VpcEndpoint& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptions& GetDnsOptions() const{ return m_dnsOptions; }
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
    inline void SetDnsOptions(const DnsOptions& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = value; }
    inline void SetDnsOptions(DnsOptions&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::move(value); }
    inline VpcEndpoint& WithDnsOptions(const DnsOptions& value) { SetDnsOptions(value); return *this;}
    inline VpcEndpoint& WithDnsOptions(DnsOptions&& value) { SetDnsOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline VpcEndpoint& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline bool GetRequesterManaged() const{ return m_requesterManaged; }
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }
    inline VpcEndpoint& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The network interfaces for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline VpcEndpoint& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline VpcEndpoint& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline VpcEndpoint& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline VpcEndpoint& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline VpcEndpoint& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const{ return m_dnsEntries; }
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }
    inline void SetDnsEntries(const Aws::Vector<DnsEntry>& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = value; }
    inline void SetDnsEntries(Aws::Vector<DnsEntry>&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::move(value); }
    inline VpcEndpoint& WithDnsEntries(const Aws::Vector<DnsEntry>& value) { SetDnsEntries(value); return *this;}
    inline VpcEndpoint& WithDnsEntries(Aws::Vector<DnsEntry>&& value) { SetDnsEntries(std::move(value)); return *this;}
    inline VpcEndpoint& AddDnsEntries(const DnsEntry& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(value); return *this; }
    inline VpcEndpoint& AddDnsEntries(DnsEntry&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline VpcEndpoint& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline VpcEndpoint& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpcEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpcEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline VpcEndpoint& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline VpcEndpoint& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline VpcEndpoint& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline const LastError& GetLastError() const{ return m_lastError; }
    inline bool LastErrorHasBeenSet() const { return m_lastErrorHasBeenSet; }
    inline void SetLastError(const LastError& value) { m_lastErrorHasBeenSet = true; m_lastError = value; }
    inline void SetLastError(LastError&& value) { m_lastErrorHasBeenSet = true; m_lastError = std::move(value); }
    inline VpcEndpoint& WithLastError(const LastError& value) { SetLastError(value); return *this;}
    inline VpcEndpoint& WithLastError(LastError&& value) { SetLastError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of IPv4 prefixes.</p>
     */
    inline const Aws::Vector<SubnetIpPrefixes>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<SubnetIpPrefixes>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<SubnetIpPrefixes>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline VpcEndpoint& WithIpv4Prefixes(const Aws::Vector<SubnetIpPrefixes>& value) { SetIpv4Prefixes(value); return *this;}
    inline VpcEndpoint& WithIpv4Prefixes(Aws::Vector<SubnetIpPrefixes>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline VpcEndpoint& AddIpv4Prefixes(const SubnetIpPrefixes& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline VpcEndpoint& AddIpv4Prefixes(SubnetIpPrefixes&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of IPv6 prefixes.</p>
     */
    inline const Aws::Vector<SubnetIpPrefixes>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    inline void SetIpv6Prefixes(const Aws::Vector<SubnetIpPrefixes>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }
    inline void SetIpv6Prefixes(Aws::Vector<SubnetIpPrefixes>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }
    inline VpcEndpoint& WithIpv6Prefixes(const Aws::Vector<SubnetIpPrefixes>& value) { SetIpv6Prefixes(value); return *this;}
    inline VpcEndpoint& WithIpv6Prefixes(Aws::Vector<SubnetIpPrefixes>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}
    inline VpcEndpoint& AddIpv6Prefixes(const SubnetIpPrefixes& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }
    inline VpcEndpoint& AddIpv6Prefixes(SubnetIpPrefixes&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline VpcEndpoint& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline VpcEndpoint& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline VpcEndpoint& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline VpcEndpoint& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline VpcEndpoint& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline VpcEndpoint& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline VpcEndpoint& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline VpcEndpoint& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline VpcEndpoint& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted.</p>
     */
    inline const Aws::String& GetServiceRegion() const{ return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    inline void SetServiceRegion(const Aws::String& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = value; }
    inline void SetServiceRegion(Aws::String&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::move(value); }
    inline void SetServiceRegion(const char* value) { m_serviceRegionHasBeenSet = true; m_serviceRegion.assign(value); }
    inline VpcEndpoint& WithServiceRegion(const Aws::String& value) { SetServiceRegion(value); return *this;}
    inline VpcEndpoint& WithServiceRegion(Aws::String&& value) { SetServiceRegion(std::move(value)); return *this;}
    inline VpcEndpoint& WithServiceRegion(const char* value) { SetServiceRegion(value); return *this;}
    ///@}
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

    Aws::Vector<SubnetIpPrefixes> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    Aws::Vector<SubnetIpPrefixes> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    Aws::String m_serviceRegion;
    bool m_serviceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
