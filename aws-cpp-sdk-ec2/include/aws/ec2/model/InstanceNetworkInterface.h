/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/NetworkInterfaceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceNetworkInterfaceAttachment.h>
#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/InstancePrivateIpAddress.h>

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
   * <p>Describes a network interface.</p>
   */
  class AWS_EC2_API InstanceNetworkInterface
  {
  public:
    InstanceNetworkInterface();
    InstanceNetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceNetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

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
    inline InstanceNetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

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
    inline InstanceNetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

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
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

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
    inline InstanceNetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline InstanceNetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline InstanceNetworkInterface& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline InstanceNetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that created the network interface.</p>
     */
    inline InstanceNetworkInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

    /**
     * <p>The status of the network interface.</p>
     */
    inline const NetworkInterfaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline void SetStatus(const NetworkInterfaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline void SetStatus(NetworkInterfaceStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithStatus(const NetworkInterfaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network interface.</p>
     */
    inline InstanceNetworkInterface& WithStatus(NetworkInterfaceStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

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
    inline InstanceNetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address.</p>
     */
    inline InstanceNetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

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
    inline InstanceNetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline InstanceNetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>Indicates whether to validate network traffic to or from this network
     * interface.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether to validate network traffic to or from this network
     * interface.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether to validate network traffic to or from this network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>One or more security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>One or more security groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>One or more security groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>One or more security groups.</p>
     */
    inline InstanceNetworkInterface& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>One or more security groups.</p>
     */
    inline InstanceNetworkInterface& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(value); return *this;}

    /**
     * <p>One or more security groups.</p>
     */
    inline InstanceNetworkInterface& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>One or more security groups.</p>
     */
    inline InstanceNetworkInterface& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline const InstanceNetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(const InstanceNetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(InstanceNetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline InstanceNetworkInterface& WithAttachment(const InstanceNetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The network interface attachment.</p>
     */
    inline InstanceNetworkInterface& WithAttachment(InstanceNetworkInterfaceAttachment&& value) { SetAttachment(value); return *this;}

    /**
     * <p>The association information for an Elastic IP associated with the network
     * interface.</p>
     */
    inline const InstanceNetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IP associated with the network
     * interface.</p>
     */
    inline void SetAssociation(const InstanceNetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP associated with the network
     * interface.</p>
     */
    inline void SetAssociation(InstanceNetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP associated with the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithAssociation(const InstanceNetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IP associated with the network
     * interface.</p>
     */
    inline InstanceNetworkInterface& WithAssociation(InstanceNetworkInterfaceAssociation&& value) { SetAssociation(value); return *this;}

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<InstancePrivateIpAddress>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddresses(const Aws::Vector<InstancePrivateIpAddress>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& WithPrivateIpAddresses(Aws::Vector<InstancePrivateIpAddress>&& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddPrivateIpAddresses(const InstancePrivateIpAddress& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IP addresses associated with the network interface.</p>
     */
    inline InstanceNetworkInterface& AddPrivateIpAddresses(InstancePrivateIpAddress&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

  private:
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;
    NetworkInterfaceStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet;
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;
    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;
    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet;
    InstanceNetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet;
    InstanceNetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet;
    Aws::Vector<InstancePrivateIpAddress> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
