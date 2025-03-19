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
    AWS_EC2_API VpcEndpoint() = default;
    AWS_EC2_API VpcEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    VpcEndpoint& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint.</p>
     */
    inline VpcEndpointType GetVpcEndpointType() const { return m_vpcEndpointType; }
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }
    inline void SetVpcEndpointType(VpcEndpointType value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }
    inline VpcEndpoint& WithVpcEndpointType(VpcEndpointType value) { SetVpcEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to which the endpoint is associated.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    VpcEndpoint& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the endpoint.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpcEndpoint& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy document associated with the endpoint, if applicable.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    VpcEndpoint& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables associated with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    VpcEndpoint& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    VpcEndpoint& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The subnets for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcEndpoint& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcEndpoint& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Information about the security groups that are
     * associated with the network interface.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<SecurityGroupIdentifier>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<SecurityGroupIdentifier>>
    VpcEndpoint& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = SecurityGroupIdentifier>
    VpcEndpoint& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline VpcEndpoint& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptions& GetDnsOptions() const { return m_dnsOptions; }
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
    template<typename DnsOptionsT = DnsOptions>
    void SetDnsOptions(DnsOptionsT&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::forward<DnsOptionsT>(value); }
    template<typename DnsOptionsT = DnsOptions>
    VpcEndpoint& WithDnsOptions(DnsOptionsT&& value) { SetDnsOptions(std::forward<DnsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Indicates whether the VPC is associated with a private
     * hosted zone.</p>
     */
    inline bool GetPrivateDnsEnabled() const { return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline VpcEndpoint& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the endpoint is being managed by its service.</p>
     */
    inline bool GetRequesterManaged() const { return m_requesterManaged; }
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }
    inline VpcEndpoint& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The network interfaces for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value); }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    VpcEndpoint& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value)); return *this;}
    template<typename NetworkInterfaceIdsT = Aws::String>
    VpcEndpoint& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The DNS entries for the endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const { return m_dnsEntries; }
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }
    template<typename DnsEntriesT = Aws::Vector<DnsEntry>>
    void SetDnsEntries(DnsEntriesT&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::forward<DnsEntriesT>(value); }
    template<typename DnsEntriesT = Aws::Vector<DnsEntry>>
    VpcEndpoint& WithDnsEntries(DnsEntriesT&& value) { SetDnsEntries(std::forward<DnsEntriesT>(value)); return *this;}
    template<typename DnsEntriesT = DnsEntry>
    VpcEndpoint& AddDnsEntries(DnsEntriesT&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.emplace_back(std::forward<DnsEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    VpcEndpoint& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcEndpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcEndpoint& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the endpoint.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    VpcEndpoint& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last error that occurred for endpoint.</p>
     */
    inline const LastError& GetLastError() const { return m_lastError; }
    inline bool LastErrorHasBeenSet() const { return m_lastErrorHasBeenSet; }
    template<typename LastErrorT = LastError>
    void SetLastError(LastErrorT&& value) { m_lastErrorHasBeenSet = true; m_lastError = std::forward<LastErrorT>(value); }
    template<typename LastErrorT = LastError>
    VpcEndpoint& WithLastError(LastErrorT&& value) { SetLastError(std::forward<LastErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of IPv4 prefixes.</p>
     */
    inline const Aws::Vector<SubnetIpPrefixes>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<SubnetIpPrefixes>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<SubnetIpPrefixes>>
    VpcEndpoint& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = SubnetIpPrefixes>
    VpcEndpoint& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of IPv6 prefixes.</p>
     */
    inline const Aws::Vector<SubnetIpPrefixes>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<SubnetIpPrefixes>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<SubnetIpPrefixes>>
    VpcEndpoint& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = SubnetIpPrefixes>
    VpcEndpoint& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    VpcEndpoint& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    VpcEndpoint& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    VpcEndpoint& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted.</p>
     */
    inline const Aws::String& GetServiceRegion() const { return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    template<typename ServiceRegionT = Aws::String>
    void SetServiceRegion(ServiceRegionT&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::forward<ServiceRegionT>(value); }
    template<typename ServiceRegionT = Aws::String>
    VpcEndpoint& WithServiceRegion(ServiceRegionT&& value) { SetServiceRegion(std::forward<ServiceRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    VpcEndpointType m_vpcEndpointType{VpcEndpointType::NOT_SET};
    bool m_vpcEndpointTypeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<SecurityGroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptions m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    bool m_privateDnsEnabled{false};
    bool m_privateDnsEnabledHasBeenSet = false;

    bool m_requesterManaged{false};
    bool m_requesterManagedHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::Vector<DnsEntry> m_dnsEntries;
    bool m_dnsEntriesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
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
