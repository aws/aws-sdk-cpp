/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/NetworkInterfaceAssociation.h>
#include <aws/ec2/model/NetworkInterfaceAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ConnectionTrackingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceType.h>
#include <aws/ec2/model/PublicIpDnsNameOptions.h>
#include <aws/ec2/model/NetworkInterfaceStatus.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/NetworkInterfaceIpv6Address.h>
#include <aws/ec2/model/NetworkInterfacePrivateIpAddress.h>
#include <aws/ec2/model/Ipv4PrefixSpecification.h>
#include <aws/ec2/model/Ipv6PrefixSpecification.h>
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
   * <p>Describes a network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_EC2_API NetworkInterface() = default;
    AWS_EC2_API NetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline const NetworkInterfaceAssociation& GetAssociation() const { return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    template<typename AssociationT = NetworkInterfaceAssociation>
    void SetAssociation(AssociationT&& value) { m_associationHasBeenSet = true; m_association = std::forward<AssociationT>(value); }
    template<typename AssociationT = NetworkInterfaceAssociation>
    NetworkInterface& WithAssociation(AssociationT&& value) { SetAssociation(std::forward<AssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface attachment.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = NetworkInterfaceAttachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = NetworkInterfaceAttachment>
    NetworkInterface& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    NetworkInterface& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group connection tracking configuration that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ConnectionTrackingConfiguration& GetConnectionTrackingConfiguration() const { return m_connectionTrackingConfiguration; }
    inline bool ConnectionTrackingConfigurationHasBeenSet() const { return m_connectionTrackingConfigurationHasBeenSet; }
    template<typename ConnectionTrackingConfigurationT = ConnectionTrackingConfiguration>
    void SetConnectionTrackingConfiguration(ConnectionTrackingConfigurationT&& value) { m_connectionTrackingConfigurationHasBeenSet = true; m_connectionTrackingConfiguration = std::forward<ConnectionTrackingConfigurationT>(value); }
    template<typename ConnectionTrackingConfigurationT = ConnectionTrackingConfiguration>
    NetworkInterface& WithConnectionTrackingConfiguration(ConnectionTrackingConfigurationT&& value) { SetConnectionTrackingConfiguration(std::forward<ConnectionTrackingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    NetworkInterface& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    NetworkInterface& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = GroupIdentifier>
    NetworkInterface& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network interface.</p>
     */
    inline NetworkInterfaceType GetInterfaceType() const { return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    inline void SetInterfaceType(NetworkInterfaceType value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }
    inline NetworkInterface& WithInterfaceType(NetworkInterfaceType value) { SetInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfaceIpv6Address>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<NetworkInterfaceIpv6Address>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<NetworkInterfaceIpv6Address>>
    NetworkInterface& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = NetworkInterfaceIpv6Address>
    NetworkInterface& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MAC address.</p>
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    NetworkInterface& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    NetworkInterface& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    NetworkInterface& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    NetworkInterface& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private hostname. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
     * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    NetworkInterface& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A public hostname. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
     * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPublicDnsName() const { return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    template<typename PublicDnsNameT = Aws::String>
    void SetPublicDnsName(PublicDnsNameT&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::forward<PublicDnsNameT>(value); }
    template<typename PublicDnsNameT = Aws::String>
    NetworkInterface& WithPublicDnsName(PublicDnsNameT&& value) { SetPublicDnsName(std::forward<PublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Public hostname type options. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
     * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const PublicIpDnsNameOptions& GetPublicIpDnsNameOptions() const { return m_publicIpDnsNameOptions; }
    inline bool PublicIpDnsNameOptionsHasBeenSet() const { return m_publicIpDnsNameOptionsHasBeenSet; }
    template<typename PublicIpDnsNameOptionsT = PublicIpDnsNameOptions>
    void SetPublicIpDnsNameOptions(PublicIpDnsNameOptionsT&& value) { m_publicIpDnsNameOptionsHasBeenSet = true; m_publicIpDnsNameOptions = std::forward<PublicIpDnsNameOptionsT>(value); }
    template<typename PublicIpDnsNameOptionsT = PublicIpDnsNameOptions>
    NetworkInterface& WithPublicIpDnsNameOptions(PublicIpDnsNameOptionsT&& value) { SetPublicIpDnsNameOptions(std::forward<PublicIpDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    NetworkInterface& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfacePrivateIpAddress>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<NetworkInterfacePrivateIpAddress>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<NetworkInterfacePrivateIpAddress>>
    NetworkInterface& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = NetworkInterfacePrivateIpAddress>
    NetworkInterface& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecification>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecification>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecification>>
    NetworkInterface& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = Ipv4PrefixSpecification>
    NetworkInterface& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecification>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecification>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecification>>
    NetworkInterface& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = Ipv6PrefixSpecification>
    NetworkInterface& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline const Aws::String& GetRequesterId() const { return m_requesterId; }
    inline bool RequesterIdHasBeenSet() const { return m_requesterIdHasBeenSet; }
    template<typename RequesterIdT = Aws::String>
    void SetRequesterId(RequesterIdT&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::forward<RequesterIdT>(value); }
    template<typename RequesterIdT = Aws::String>
    NetworkInterface& WithRequesterId(RequesterIdT&& value) { SetRequesterId(std::forward<RequesterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline bool GetRequesterManaged() const { return m_requesterManaged; }
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }
    inline NetworkInterface& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const { return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline NetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network interface.</p>
     */
    inline NetworkInterfaceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NetworkInterfaceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NetworkInterface& WithStatus(NetworkInterfaceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    NetworkInterface& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const { return m_tagSet; }
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }
    template<typename TagSetT = Aws::Vector<Tag>>
    void SetTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::forward<TagSetT>(value); }
    template<typename TagSetT = Aws::Vector<Tag>>
    NetworkInterface& WithTagSet(TagSetT&& value) { SetTagSet(std::forward<TagSetT>(value)); return *this;}
    template<typename TagSetT = Tag>
    NetworkInterface& AddTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet.emplace_back(std::forward<TagSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    NetworkInterface& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a network interface with an IPv6 address is unreachable
     * from the public internet. If the value is <code>true</code>, inbound traffic
     * from the internet is dropped and you cannot assign an elastic IP address to the
     * network interface. The network interface is reachable from peered VPCs and
     * resources connected through a transit gateway, including on-premises
     * networks.</p>
     */
    inline bool GetDenyAllIgwTraffic() const { return m_denyAllIgwTraffic; }
    inline bool DenyAllIgwTrafficHasBeenSet() const { return m_denyAllIgwTrafficHasBeenSet; }
    inline void SetDenyAllIgwTraffic(bool value) { m_denyAllIgwTrafficHasBeenSet = true; m_denyAllIgwTraffic = value; }
    inline NetworkInterface& WithDenyAllIgwTraffic(bool value) { SetDenyAllIgwTraffic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline bool GetIpv6Native() const { return m_ipv6Native; }
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }
    inline NetworkInterface& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    NetworkInterface& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the network interface.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    NetworkInterface& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets associated with this network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedSubnets() const { return m_associatedSubnets; }
    inline bool AssociatedSubnetsHasBeenSet() const { return m_associatedSubnetsHasBeenSet; }
    template<typename AssociatedSubnetsT = Aws::Vector<Aws::String>>
    void SetAssociatedSubnets(AssociatedSubnetsT&& value) { m_associatedSubnetsHasBeenSet = true; m_associatedSubnets = std::forward<AssociatedSubnetsT>(value); }
    template<typename AssociatedSubnetsT = Aws::Vector<Aws::String>>
    NetworkInterface& WithAssociatedSubnets(AssociatedSubnetsT&& value) { SetAssociatedSubnets(std::forward<AssociatedSubnetsT>(value)); return *this;}
    template<typename AssociatedSubnetsT = Aws::String>
    NetworkInterface& AddAssociatedSubnets(AssociatedSubnetsT&& value) { m_associatedSubnetsHasBeenSet = true; m_associatedSubnets.emplace_back(std::forward<AssociatedSubnetsT>(value)); return *this; }
    ///@}
  private:

    NetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet = false;

    NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    ConnectionTrackingConfiguration m_connectionTrackingConfiguration;
    bool m_connectionTrackingConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    NetworkInterfaceType m_interfaceType{NetworkInterfaceType::NOT_SET};
    bool m_interfaceTypeHasBeenSet = false;

    Aws::Vector<NetworkInterfaceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    PublicIpDnsNameOptions m_publicIpDnsNameOptions;
    bool m_publicIpDnsNameOptionsHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<NetworkInterfacePrivateIpAddress> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecification> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    Aws::Vector<Ipv6PrefixSpecification> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    Aws::String m_requesterId;
    bool m_requesterIdHasBeenSet = false;

    bool m_requesterManaged{false};
    bool m_requesterManagedHasBeenSet = false;

    bool m_sourceDestCheck{false};
    bool m_sourceDestCheckHasBeenSet = false;

    NetworkInterfaceStatus m_status{NetworkInterfaceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_denyAllIgwTraffic{false};
    bool m_denyAllIgwTrafficHasBeenSet = false;

    bool m_ipv6Native{false};
    bool m_ipv6NativeHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedSubnets;
    bool m_associatedSubnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
