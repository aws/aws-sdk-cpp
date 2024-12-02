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
    AWS_EC2_API NetworkInterface();
    AWS_EC2_API NetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline const NetworkInterfaceAssociation& GetAssociation() const{ return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    inline void SetAssociation(const NetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }
    inline void SetAssociation(NetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }
    inline NetworkInterface& WithAssociation(const NetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}
    inline NetworkInterface& WithAssociation(NetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface attachment.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const NetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(NetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline NetworkInterface& WithAttachment(const NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}
    inline NetworkInterface& WithAttachment(NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline NetworkInterface& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline NetworkInterface& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline NetworkInterface& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group connection tracking configuration that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ConnectionTrackingConfiguration& GetConnectionTrackingConfiguration() const{ return m_connectionTrackingConfiguration; }
    inline bool ConnectionTrackingConfigurationHasBeenSet() const { return m_connectionTrackingConfigurationHasBeenSet; }
    inline void SetConnectionTrackingConfiguration(const ConnectionTrackingConfiguration& value) { m_connectionTrackingConfigurationHasBeenSet = true; m_connectionTrackingConfiguration = value; }
    inline void SetConnectionTrackingConfiguration(ConnectionTrackingConfiguration&& value) { m_connectionTrackingConfigurationHasBeenSet = true; m_connectionTrackingConfiguration = std::move(value); }
    inline NetworkInterface& WithConnectionTrackingConfiguration(const ConnectionTrackingConfiguration& value) { SetConnectionTrackingConfiguration(value); return *this;}
    inline NetworkInterface& WithConnectionTrackingConfiguration(ConnectionTrackingConfiguration&& value) { SetConnectionTrackingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NetworkInterface& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline NetworkInterface& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline NetworkInterface& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline NetworkInterface& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline NetworkInterface& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network interface.</p>
     */
    inline const NetworkInterfaceType& GetInterfaceType() const{ return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    inline void SetInterfaceType(const NetworkInterfaceType& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }
    inline void SetInterfaceType(NetworkInterfaceType&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }
    inline NetworkInterface& WithInterfaceType(const NetworkInterfaceType& value) { SetInterfaceType(value); return *this;}
    inline NetworkInterface& WithInterfaceType(NetworkInterfaceType&& value) { SetInterfaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfaceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<NetworkInterfaceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<NetworkInterfaceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline NetworkInterface& WithIpv6Addresses(const Aws::Vector<NetworkInterfaceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}
    inline NetworkInterface& WithIpv6Addresses(Aws::Vector<NetworkInterfaceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline NetworkInterface& AddIpv6Addresses(const NetworkInterfaceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline NetworkInterface& AddIpv6Addresses(NetworkInterfaceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MAC address.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }
    inline NetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline NetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline NetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline NetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline NetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline NetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline NetworkInterface& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline NetworkInterface& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline NetworkInterface& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline NetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline NetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline NetworkInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }
    inline NetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline NetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline NetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline NetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline NetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline NetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfacePrivateIpAddress>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    inline void SetPrivateIpAddresses(const Aws::Vector<NetworkInterfacePrivateIpAddress>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }
    inline void SetPrivateIpAddresses(Aws::Vector<NetworkInterfacePrivateIpAddress>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }
    inline NetworkInterface& WithPrivateIpAddresses(const Aws::Vector<NetworkInterfacePrivateIpAddress>& value) { SetPrivateIpAddresses(value); return *this;}
    inline NetworkInterface& WithPrivateIpAddresses(Aws::Vector<NetworkInterfacePrivateIpAddress>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}
    inline NetworkInterface& AddPrivateIpAddresses(const NetworkInterfacePrivateIpAddress& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    inline NetworkInterface& AddPrivateIpAddresses(NetworkInterfacePrivateIpAddress&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecification>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline NetworkInterface& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { SetIpv4Prefixes(value); return *this;}
    inline NetworkInterface& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline NetworkInterface& AddIpv4Prefixes(const Ipv4PrefixSpecification& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline NetworkInterface& AddIpv4Prefixes(Ipv4PrefixSpecification&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecification>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecification>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecification>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }
    inline NetworkInterface& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecification>& value) { SetIpv6Prefixes(value); return *this;}
    inline NetworkInterface& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecification>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}
    inline NetworkInterface& AddIpv6Prefixes(const Ipv6PrefixSpecification& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }
    inline NetworkInterface& AddIpv6Prefixes(Ipv6PrefixSpecification&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }
    inline bool RequesterIdHasBeenSet() const { return m_requesterIdHasBeenSet; }
    inline void SetRequesterId(const Aws::String& value) { m_requesterIdHasBeenSet = true; m_requesterId = value; }
    inline void SetRequesterId(Aws::String&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::move(value); }
    inline void SetRequesterId(const char* value) { m_requesterIdHasBeenSet = true; m_requesterId.assign(value); }
    inline NetworkInterface& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}
    inline NetworkInterface& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}
    inline NetworkInterface& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline bool GetRequesterManaged() const{ return m_requesterManaged; }
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }
    inline NetworkInterface& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline NetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network interface.</p>
     */
    inline const NetworkInterfaceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkInterfaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkInterfaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NetworkInterface& WithStatus(const NetworkInterfaceStatus& value) { SetStatus(value); return *this;}
    inline NetworkInterface& WithStatus(NetworkInterfaceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline NetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline NetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline NetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const{ return m_tagSet; }
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }
    inline void SetTagSet(const Aws::Vector<Tag>& value) { m_tagSetHasBeenSet = true; m_tagSet = value; }
    inline void SetTagSet(Aws::Vector<Tag>&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::move(value); }
    inline NetworkInterface& WithTagSet(const Aws::Vector<Tag>& value) { SetTagSet(value); return *this;}
    inline NetworkInterface& WithTagSet(Aws::Vector<Tag>&& value) { SetTagSet(std::move(value)); return *this;}
    inline NetworkInterface& AddTagSet(const Tag& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(value); return *this; }
    inline NetworkInterface& AddTagSet(Tag&& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline NetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
    inline bool GetDenyAllIgwTraffic() const{ return m_denyAllIgwTraffic; }
    inline bool DenyAllIgwTrafficHasBeenSet() const { return m_denyAllIgwTrafficHasBeenSet; }
    inline void SetDenyAllIgwTraffic(bool value) { m_denyAllIgwTrafficHasBeenSet = true; m_denyAllIgwTraffic = value; }
    inline NetworkInterface& WithDenyAllIgwTraffic(bool value) { SetDenyAllIgwTraffic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline bool GetIpv6Native() const{ return m_ipv6Native; }
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }
    inline NetworkInterface& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }
    inline NetworkInterface& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}
    inline NetworkInterface& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}
    inline NetworkInterface& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the network interface.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline NetworkInterface& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline NetworkInterface& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
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

    NetworkInterfaceType m_interfaceType;
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

    bool m_requesterManaged;
    bool m_requesterManagedHasBeenSet = false;

    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    NetworkInterfaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_denyAllIgwTraffic;
    bool m_denyAllIgwTrafficHasBeenSet = false;

    bool m_ipv6Native;
    bool m_ipv6NativeHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
