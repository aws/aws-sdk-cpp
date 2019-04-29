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
#include <aws/ec2/model/NetworkInterfaceAssociation.h>
#include <aws/ec2/model/NetworkInterfaceAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceType.h>
#include <aws/ec2/model/NetworkInterfaceStatus.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/NetworkInterfaceIpv6Address.h>
#include <aws/ec2/model/NetworkInterfacePrivateIpAddress.h>
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
  class AWS_EC2_API NetworkInterface
  {
  public:
    NetworkInterface();
    NetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline NetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
     */
    inline NetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the network interface.</p>
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
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline bool RequesterIdHasBeenSet() const { return m_requesterIdHasBeenSet; }

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const Aws::String& value) { m_requesterIdHasBeenSet = true; m_requesterId = value; }

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(Aws::String&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::move(value); }

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const char* value) { m_requesterIdHasBeenSet = true; m_requesterId.assign(value); }

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline NetworkInterface& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline NetworkInterface& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity that launched the instance on your behalf (for example,
     * AWS Management Console or Auto Scaling).</p>
     */
    inline NetworkInterface& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}


    /**
     * <p>Indicates whether the network interface is being managed by AWS.</p>
     */
    inline bool GetRequesterManaged() const{ return m_requesterManaged; }

    /**
     * <p>Indicates whether the network interface is being managed by AWS.</p>
     */
    inline bool RequesterManagedHasBeenSet() const { return m_requesterManagedHasBeenSet; }

    /**
     * <p>Indicates whether the network interface is being managed by AWS.</p>
     */
    inline void SetRequesterManaged(bool value) { m_requesterManagedHasBeenSet = true; m_requesterManaged = value; }

    /**
     * <p>Indicates whether the network interface is being managed by AWS.</p>
     */
    inline NetworkInterface& WithRequesterManaged(bool value) { SetRequesterManaged(value); return *this;}


    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
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

  private:

    NetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet;

    NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet;

    NetworkInterfaceType m_interfaceType;
    bool m_interfaceTypeHasBeenSet;

    Aws::Vector<NetworkInterfaceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<NetworkInterfacePrivateIpAddress> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    Aws::String m_requesterId;
    bool m_requesterIdHasBeenSet;

    bool m_requesterManaged;
    bool m_requesterManagedHasBeenSet;

    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;

    NetworkInterfaceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
