﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
#include <aws/ec2/model/InstanceIpv6Address.h>

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterfaceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceNetworkInterfaceSpecification
  {
  public:
    InstanceNetworkInterfaceSpecification();
    InstanceNetworkInterfaceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceNetworkInterfaceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The index of the device on the instance for the network interface attachment.
     * If you are specifying a network interface in a <a>RunInstances</a> request, you
     * must provide the device index.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The index of the device on the instance for the network interface attachment.
     * If you are specifying a network interface in a <a>RunInstances</a> request, you
     * must provide the device index.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The index of the device on the instance for the network interface attachment.
     * If you are specifying a network interface in a <a>RunInstances</a> request, you
     * must provide the device index.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet associated with the network string. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a>RunInstances</a> request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>If set to <code>true</code>, the interface is deleted when the instance is
     * terminated. You can specify <code>true</code> only if creating a new network
     * interface when launching an instance.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>If set to <code>true</code>, the interface is deleted when the instance is
     * terminated. You can specify <code>true</code> only if creating a new network
     * interface when launching an instance.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>If set to <code>true</code>, the interface is deleted when the instance is
     * terminated. You can specify <code>true</code> only if creating a new network
     * interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>One or more private IPv4 addresses to assign to the network interface. Only
     * one private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a>RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a>RunInstances</a> request.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a>RunInstances</a> request.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a>RunInstances</a> request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>One or more IPv6 addresses to assign to the network interface. You cannot
     * specify this option and the option to assign a number of IPv6 addresses in the
     * same request. You cannot specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>A number of IPv6 addresses to assign to the network interface. Amazon EC2
     * chooses the IPv6 addresses from the range of the subnet. You cannot specify this
     * option and the option to assign specific IPv6 addresses in the same request. You
     * can specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>A number of IPv6 addresses to assign to the network interface. Amazon EC2
     * chooses the IPv6 addresses from the range of the subnet. You cannot specify this
     * option and the option to assign specific IPv6 addresses in the same request. You
     * can specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>A number of IPv6 addresses to assign to the network interface. Amazon EC2
     * chooses the IPv6 addresses from the range of the subnet. You cannot specify this
     * option and the option to assign specific IPv6 addresses in the same request. You
     * can specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}

  private:
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;
    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;
    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet;
    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;
    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;
    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
