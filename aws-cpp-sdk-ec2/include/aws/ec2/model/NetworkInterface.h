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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceType.h>
#include <aws/ec2/model/NetworkInterfaceStatus.h>
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


    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline const NetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline void SetAssociation(const NetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline void SetAssociation(NetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline NetworkInterface& WithAssociation(const NetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline NetworkInterface& WithAssociation(NetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    /**
     * <p>The network interface attachment.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(const NetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(NetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The network interface attachment.</p>
     */
    inline NetworkInterface& WithAttachment(const NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The network interface attachment.</p>
     */
    inline NetworkInterface& WithAttachment(NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline NetworkInterface& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline NetworkInterface& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline NetworkInterface& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description.</p>
     */
    inline NetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description.</p>
     */
    inline NetworkInterface& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description.</p>
     */
    inline NetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline NetworkInterface& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline NetworkInterface& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline NetworkInterface& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Any security groups for the network interface.</p>
     */
    inline NetworkInterface& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of network interface.</p>
     */
    inline const NetworkInterfaceType& GetInterfaceType() const{ return m_interfaceType; }

    /**
     * <p>The type of network interface.</p>
     */
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }

    /**
     * <p>The type of network interface.</p>
     */
    inline void SetInterfaceType(const NetworkInterfaceType& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }

    /**
     * <p>The type of network interface.</p>
     */
    inline void SetInterfaceType(NetworkInterfaceType&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }

    /**
     * <p>The type of network interface.</p>
     */
    inline NetworkInterface& WithInterfaceType(const NetworkInterfaceType& value) { SetInterfaceType(value); return *this;}

    /**
     * <p>The type of network interface.</p>
     */
    inline NetworkInterface& WithInterfaceType(NetworkInterfaceType&& value) { SetInterfaceType(std::move(value)); return *this;}


    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfaceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<NetworkInterfaceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<NetworkInterfaceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Addresses(const Aws::Vector<NetworkInterfaceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Addresses(Aws::Vector<NetworkInterfaceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Addresses(const NetworkInterfaceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Addresses(NetworkInterfaceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The MAC address.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The MAC address.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The MAC address.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The MAC address.</p>
     */
    inline NetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline NetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline NetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline NetworkInterface& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline NetworkInterface& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline NetworkInterface& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline NetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline NetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the network interface.</p>
     */
    inline NetworkInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<NetworkInterfacePrivateIpAddress>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<NetworkInterfacePrivateIpAddress>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<NetworkInterfacePrivateIpAddress>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpAddresses(const Aws::Vector<NetworkInterfacePrivateIpAddress>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpAddresses(Aws::Vector<NetworkInterfacePrivateIpAddress>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddPrivateIpAddresses(const NetworkInterfacePrivateIpAddress& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddPrivateIpAddresses(NetworkInterfacePrivateIpAddress&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecification>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& AddIpv4Prefixes(const Ipv4PrefixSpecification& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& AddIpv4Prefixes(Ipv4PrefixSpecification&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecification>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecification>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecification>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecification>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecification>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Prefixes(const Ipv6PrefixSpecification& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Prefixes(Ipv6PrefixSpecification&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline bool RequesterIdHasBeenSet() const { return m_requesterIdHasBeenSet; }

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline void SetRequesterId(const Aws::String& value) { m_requesterIdHasBeenSet = true; m_requesterId = value; }

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline void SetRequesterId(Aws::String&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::move(value); }

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline void SetRequesterId(const char* value) { m_requesterIdHasBeenSet = true; m_requesterId.assign(value); }

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline NetworkInterface& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline NetworkInterface& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}

    /**
     * <p>The alias or Amazon Web Services account ID of the principal or service that
     * created the network interface.</p>
     */
    inline NetworkInterface& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}


    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline bool GetRequesterManaged() const{ return m_requesterManaged; }

    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }

    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }

    /**
     * <p>Indicates whether the network interface is being managed by Amazon Web
     * Services.</p>
     */
    inline NetworkInterface& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}


    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline NetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}


    /**
     * <p>The status of the network interface.</p>
     */
    inline const NetworkInterfaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline void SetStatus(const NetworkInterfaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline void SetStatus(NetworkInterfaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the network interface.</p>
     */
    inline NetworkInterface& WithStatus(const NetworkInterfaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network interface.</p>
     */
    inline NetworkInterface& WithStatus(NetworkInterfaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const{ return m_tagSet; }

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline void SetTagSet(const Aws::Vector<Tag>& value) { m_tagSetHasBeenSet = true; m_tagSet = value; }

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline void SetTagSet(Aws::Vector<Tag>&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::move(value); }

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline NetworkInterface& WithTagSet(const Aws::Vector<Tag>& value) { SetTagSet(value); return *this;}

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline NetworkInterface& WithTagSet(Aws::Vector<Tag>&& value) { SetTagSet(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline NetworkInterface& AddTagSet(const Tag& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the network interface.</p>
     */
    inline NetworkInterface& AddTagSet(Tag&& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline NetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline NetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline NetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Indicates whether a network interface with an IPv6 address is unreachable
     * from the public internet. If the value is <code>true</code>, inbound traffic
     * from the internet is dropped and you cannot assign an elastic IP address to the
     * network interface. The network interface is reachable from peered VPCs and
     * resources connected through a transit gateway, including on-premises
     * networks.</p>
     */
    inline bool GetDenyAllIgwTraffic() const{ return m_denyAllIgwTraffic; }

    /**
     * <p>Indicates whether a network interface with an IPv6 address is unreachable
     * from the public internet. If the value is <code>true</code>, inbound traffic
     * from the internet is dropped and you cannot assign an elastic IP address to the
     * network interface. The network interface is reachable from peered VPCs and
     * resources connected through a transit gateway, including on-premises
     * networks.</p>
     */
    inline bool DenyAllIgwTrafficHasBeenSet() const { return m_denyAllIgwTrafficHasBeenSet; }

    /**
     * <p>Indicates whether a network interface with an IPv6 address is unreachable
     * from the public internet. If the value is <code>true</code>, inbound traffic
     * from the internet is dropped and you cannot assign an elastic IP address to the
     * network interface. The network interface is reachable from peered VPCs and
     * resources connected through a transit gateway, including on-premises
     * networks.</p>
     */
    inline void SetDenyAllIgwTraffic(bool value) { m_denyAllIgwTrafficHasBeenSet = true; m_denyAllIgwTraffic = value; }

    /**
     * <p>Indicates whether a network interface with an IPv6 address is unreachable
     * from the public internet. If the value is <code>true</code>, inbound traffic
     * from the internet is dropped and you cannot assign an elastic IP address to the
     * network interface. The network interface is reachable from peered VPCs and
     * resources connected through a transit gateway, including on-premises
     * networks.</p>
     */
    inline NetworkInterface& WithDenyAllIgwTraffic(bool value) { SetDenyAllIgwTraffic(value); return *this;}


    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline bool GetIpv6Native() const{ return m_ipv6Native; }

    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }

    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }

    /**
     * <p>Indicates whether this is an IPv6 only network interface.</p>
     */
    inline NetworkInterface& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}


    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}

    /**
     * <p>The IPv6 globally unique address associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}

  private:

    NetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet = false;

    NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
