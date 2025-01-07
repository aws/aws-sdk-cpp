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
#include <aws/ec2/model/ConnectionTrackingSpecificationResponse.h>
#include <aws/ec2/model/OperatorResponse.h>
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


    ///@{
    /**
     * <p>The association information for an Elastic IPv4 associated with the network
     * interface.</p>
     */
    inline const InstanceNetworkInterfaceAssociation& GetAssociation() const{ return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    inline void SetAssociation(const InstanceNetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }
    inline void SetAssociation(InstanceNetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }
    inline InstanceNetworkInterface& WithAssociation(const InstanceNetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}
    inline InstanceNetworkInterface& WithAssociation(InstanceNetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface attachment.</p>
     */
    inline const InstanceNetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const InstanceNetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(InstanceNetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline InstanceNetworkInterface& WithAttachment(const InstanceNetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}
    inline InstanceNetworkInterface& WithAttachment(InstanceNetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InstanceNetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InstanceNetworkInterface& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline InstanceNetworkInterface& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline InstanceNetworkInterface& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline InstanceNetworkInterface& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline InstanceNetworkInterface& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline InstanceNetworkInterface& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}
    inline InstanceNetworkInterface& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline InstanceNetworkInterface& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline InstanceNetworkInterface& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
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
    inline InstanceNetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline InstanceNetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
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
    inline InstanceNetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline InstanceNetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the network
     * interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline InstanceNetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline InstanceNetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
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
    inline InstanceNetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline InstanceNetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
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
    inline InstanceNetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline InstanceNetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<InstancePrivateIpAddress>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    inline void SetPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }
    inline void SetPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }
    inline InstanceNetworkInterface& WithPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { SetPrivateIpAddresses(value); return *this;}
    inline InstanceNetworkInterface& WithPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}
    inline InstanceNetworkInterface& AddPrivateIpAddresses(const InstancePrivateIpAddress& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    inline InstanceNetworkInterface& AddPrivateIpAddresses(InstancePrivateIpAddress&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline InstanceNetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network interface.</p>
     */
    inline const NetworkInterfaceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkInterfaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkInterfaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceNetworkInterface& WithStatus(const NetworkInterfaceStatus& value) { SetStatus(value); return *this;}
    inline InstanceNetworkInterface& WithStatus(NetworkInterfaceStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline InstanceNetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline InstanceNetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
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
    inline InstanceNetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline InstanceNetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> | <code>efa-only</code> | <code>trunk</code> </p>
     */
    inline const Aws::String& GetInterfaceType() const{ return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    inline void SetInterfaceType(const Aws::String& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }
    inline void SetInterfaceType(Aws::String&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }
    inline void SetInterfaceType(const char* value) { m_interfaceTypeHasBeenSet = true; m_interfaceType.assign(value); }
    inline InstanceNetworkInterface& WithInterfaceType(const Aws::String& value) { SetInterfaceType(value); return *this;}
    inline InstanceNetworkInterface& WithInterfaceType(Aws::String&& value) { SetInterfaceType(std::move(value)); return *this;}
    inline InstanceNetworkInterface& WithInterfaceType(const char* value) { SetInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 delegated prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv4Prefix>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<InstanceIpv4Prefix>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<InstanceIpv4Prefix>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline InstanceNetworkInterface& WithIpv4Prefixes(const Aws::Vector<InstanceIpv4Prefix>& value) { SetIpv4Prefixes(value); return *this;}
    inline InstanceNetworkInterface& WithIpv4Prefixes(Aws::Vector<InstanceIpv4Prefix>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline InstanceNetworkInterface& AddIpv4Prefixes(const InstanceIpv4Prefix& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline InstanceNetworkInterface& AddIpv4Prefixes(InstanceIpv4Prefix&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 delegated prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Prefix>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    inline void SetIpv6Prefixes(const Aws::Vector<InstanceIpv6Prefix>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }
    inline void SetIpv6Prefixes(Aws::Vector<InstanceIpv6Prefix>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }
    inline InstanceNetworkInterface& WithIpv6Prefixes(const Aws::Vector<InstanceIpv6Prefix>& value) { SetIpv6Prefixes(value); return *this;}
    inline InstanceNetworkInterface& WithIpv6Prefixes(Aws::Vector<InstanceIpv6Prefix>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}
    inline InstanceNetworkInterface& AddIpv6Prefixes(const InstanceIpv6Prefix& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }
    inline InstanceNetworkInterface& AddIpv6Prefixes(InstanceIpv6Prefix&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A security group connection tracking configuration that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ConnectionTrackingSpecificationResponse& GetConnectionTrackingConfiguration() const{ return m_connectionTrackingConfiguration; }
    inline bool ConnectionTrackingConfigurationHasBeenSet() const { return m_connectionTrackingConfigurationHasBeenSet; }
    inline void SetConnectionTrackingConfiguration(const ConnectionTrackingSpecificationResponse& value) { m_connectionTrackingConfigurationHasBeenSet = true; m_connectionTrackingConfiguration = value; }
    inline void SetConnectionTrackingConfiguration(ConnectionTrackingSpecificationResponse&& value) { m_connectionTrackingConfigurationHasBeenSet = true; m_connectionTrackingConfiguration = std::move(value); }
    inline InstanceNetworkInterface& WithConnectionTrackingConfiguration(const ConnectionTrackingSpecificationResponse& value) { SetConnectionTrackingConfiguration(value); return *this;}
    inline InstanceNetworkInterface& WithConnectionTrackingConfiguration(ConnectionTrackingSpecificationResponse&& value) { SetConnectionTrackingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the network interface.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline InstanceNetworkInterface& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline InstanceNetworkInterface& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
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

    ConnectionTrackingSpecificationResponse m_connectionTrackingConfiguration;
    bool m_connectionTrackingConfigurationHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
