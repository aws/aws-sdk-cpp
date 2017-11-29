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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceNetworkInterfaceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecification
  {
  public:
    LaunchTemplateInstanceNetworkInterfaceSpecification();
    LaunchTemplateInstanceNetworkInterfaceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateInstanceNetworkInterfaceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to associate a public IPv4 address with eth0 for a new
     * network interface.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Indicates whether to associate a public IPv4 address with eth0 for a new
     * network interface.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Indicates whether to associate a public IPv4 address with eth0 for a new
     * network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>A description for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the network interface.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}


    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * <p>The number of IPv6 addresses for the network interface.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>The number of IPv6 addresses for the network interface.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>The number of IPv6 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}


    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


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
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of secondary private IPv4 addresses for the network interface.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IPv4 addresses for the network interface.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IPv4 addresses for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}


    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
