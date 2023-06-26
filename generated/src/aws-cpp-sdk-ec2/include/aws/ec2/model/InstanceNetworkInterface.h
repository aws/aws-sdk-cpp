/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>
#include <aws/ec2/model/InstanceNetworkInterfaceAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceStatus.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/InstancePrivateIpAddress.h>
#include <aws/ec2/model/InstanceIpv4Prefix.h>
#include <aws/ec2/model/InstanceIpv6Prefix.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterface">AWS
   * API Reference</a></p>
   */
  class InstanceNetworkInterface
  {
  public:
    AWS_EC2_API InstanceNetworkInterface();
    AWS_EC2_API InstanceNetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline const InstanceNetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }

    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline void SetAssociation(const InstanceNetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline void SetAssociation(InstanceNetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithAssociation(const InstanceNetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithAssociation(InstanceNetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    /**
     * <p>The network interface attachment.</p>
     */
    inline const InstanceNetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(const InstanceNetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(InstanceNetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The network interface attachment.</p>
     */
    inline InstanceNetworkInterface& WithAttachment(const InstanceNetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The network interface attachment.</p>
     */
    inline InstanceNetworkInterface& WithAttachment(InstanceNetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline InstanceNetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline InstanceNetworkInterface& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline InstanceNetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>The security groups.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The security groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The security groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The security groups.</p>
     */
    inline InstanceNetworkInterface& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>The security groups.</p>
     */
    inline InstanceNetworkInterface& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups.</p>
     */
    inline InstanceNetworkInterface& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The security groups.</p>
     */
    inline InstanceNetworkInterface& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


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
    inline InstanceNetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline InstanceNetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline InstanceNetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


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
    inline InstanceNetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


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
    inline InstanceNetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline InstanceNetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline InstanceNetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


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
    inline InstanceNetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<InstancePrivateIpAddress>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddPrivateIpAddresses(const InstancePrivateIpAddress& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddPrivateIpAddresses(InstancePrivateIpAddress&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


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
    inline InstanceNetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}


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
    inline InstanceNetworkInterface& WithStatus(const NetworkInterfaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithStatus(NetworkInterfaceStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline InstanceNetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline InstanceNetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline InstanceNetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


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
    inline InstanceNetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline InstanceNetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline InstanceNetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline const Aws::String& GetInterfaceType() const{ return m_interfaceType; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline void SetInterfaceType(const Aws::String& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline void SetInterfaceType(Aws::String&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline void SetInterfaceType(const char* value) { m_interfaceTypeHasBeenSet = true; m_interfaceType.assign(value); }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline InstanceNetworkInterface& WithInterfaceType(const Aws::String& value) { SetInterfaceType(value); return *this;}

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline InstanceNetworkInterface& WithInterfaceType(Aws::String&& value) { SetInterfaceType(std::move(value)); return *this;}

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>trunk</code> </p>
     */
    inline InstanceNetworkInterface& WithInterfaceType(const char* value) { SetInterfaceType(value); return *this;}


    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv4Prefix>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<InstanceIpv4Prefix>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<InstanceIpv4Prefix>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv4Prefixes(const Aws::Vector<InstanceIpv4Prefix>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv4Prefixes(Aws::Vector<InstanceIpv4Prefix>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv4Prefixes(const InstanceIpv4Prefix& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv4Prefixes(InstanceIpv4Prefix&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Prefix>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<InstanceIpv6Prefix>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<InstanceIpv6Prefix>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv6Prefixes(const Aws::Vector<InstanceIpv6Prefix>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& WithIpv6Prefixes(Aws::Vector<InstanceIpv6Prefix>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv6Prefixes(const InstanceIpv6Prefix& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline InstanceNetworkInterface& AddIpv6Prefixes(InstanceIpv6Prefix&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }

  private:

    InstanceNetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet = false;

    InstanceNetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<InstancePrivateIpAddress> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    NetworkInterfaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_interfaceType;
    bool m_interfaceTypeHasBeenSet = false;

    Aws::Vector<InstanceIpv4Prefix> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    Aws::Vector<InstanceIpv6Prefix> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
