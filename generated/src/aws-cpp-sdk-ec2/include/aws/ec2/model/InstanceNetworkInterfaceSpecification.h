/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/EnaSrdSpecificationRequest.h>
#include <aws/ec2/model/ConnectionTrackingSpecificationRequest.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
#include <aws/ec2/model/Ipv4PrefixSpecificationRequest.h>
#include <aws/ec2/model/Ipv6PrefixSpecificationRequest.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterfaceSpecification">AWS
   * API Reference</a></p>
   */
  class InstanceNetworkInterfaceSpecification
  {
  public:
    AWS_EC2_API InstanceNetworkInterfaceSpecification();
    AWS_EC2_API InstanceNetworkInterfaceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkInterfaceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p> <p>Starting
     * on February 1, 2024, Amazon Web Services will charge for all public IPv4
     * addresses, including public IPv4 addresses associated with running instances and
     * Elastic IP addresses. For more information, see the <i>Public IPv4 Address</i>
     * tab on the <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing
     * page</a>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p> <p>Starting
     * on February 1, 2024, Amazon Web Services will charge for all public IPv4
     * addresses, including public IPv4 addresses associated with running instances and
     * Elastic IP addresses. For more information, see the <i>Public IPv4 Address</i>
     * tab on the <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing
     * page</a>.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p> <p>Starting
     * on February 1, 2024, Amazon Web Services will charge for all public IPv4
     * addresses, including public IPv4 addresses associated with running instances and
     * Elastic IP addresses. For more information, see the <i>Public IPv4 Address</i>
     * tab on the <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing
     * page</a>.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Indicates whether to assign a public IPv4 address to an instance you launch
     * in a VPC. The public IP address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p> <p>Starting
     * on February 1, 2024, Amazon Web Services will charge for all public IPv4
     * addresses, including public IPv4 addresses associated with running instances and
     * Elastic IP addresses. For more information, see the <i>Public IPv4 Address</i>
     * tab on the <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing
     * page</a>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


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
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

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
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline InstanceNetworkInterfaceSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the network interface. Applies only if creating a network
     * interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The position of the network interface in the attachment order. A primary
     * network interface has a device index of 0.</p> <p>If you specify a network
     * interface when launching an instance, you must specify the device index.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The position of the network interface in the attachment order. A primary
     * network interface has a device index of 0.</p> <p>If you specify a network
     * interface when launching an instance, you must specify the device index.</p>
     */
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }

    /**
     * <p>The position of the network interface in the attachment order. A primary
     * network interface has a device index of 0.</p> <p>If you specify a network
     * interface when launching an instance, you must specify the device index.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The position of the network interface in the attachment order. A primary
     * network interface has a device index of 0.</p> <p>If you specify a network
     * interface when launching an instance, you must specify the device index.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}


    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups for the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


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
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }

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


    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses to assign to the network interface. You cannot specify
     * this option and the option to assign a number of IPv6 addresses in the same
     * request. You cannot specify this option if you've specified a minimum number of
     * instances to launch.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p> <p>If you are creating a Spot Fleet,
     * omit this parameter because you can’t specify a network interface ID in a launch
     * specification.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address of the network interface. Applies only if creating a
     * network interface when launching an instance. You cannot specify this option if
     * you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IPv4 addresses to assign to the network interface. Only one
     * private IPv4 address can be designated as primary. You cannot specify this
     * option if you're launching more than one instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IPv4 addresses. You can't specify this option
     * and specify more than one private IP address using the private IP addresses
     * option. You cannot specify this option if you're launching more than one
     * instance in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
     * request.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}


    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet associated with the network interface. Applies only if
     * creating a network interface when launching an instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>Indicates whether to assign a carrier IP address to the network
     * interface.</p> <p>You can only assign a carrier IP address to a network
     * interface that is in a subnet in a Wavelength Zone. For more information about
     * carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP address</a> in the <i>Amazon Web Services Wavelength Developer Guide</i>.</p>
     */
    inline bool GetAssociateCarrierIpAddress() const{ return m_associateCarrierIpAddress; }

    /**
     * <p>Indicates whether to assign a carrier IP address to the network
     * interface.</p> <p>You can only assign a carrier IP address to a network
     * interface that is in a subnet in a Wavelength Zone. For more information about
     * carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP address</a> in the <i>Amazon Web Services Wavelength Developer Guide</i>.</p>
     */
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }

    /**
     * <p>Indicates whether to assign a carrier IP address to the network
     * interface.</p> <p>You can only assign a carrier IP address to a network
     * interface that is in a subnet in a Wavelength Zone. For more information about
     * carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP address</a> in the <i>Amazon Web Services Wavelength Developer Guide</i>.</p>
     */
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }

    /**
     * <p>Indicates whether to assign a carrier IP address to the network
     * interface.</p> <p>You can only assign a carrier IP address to a network
     * interface that is in a subnet in a Wavelength Zone. For more information about
     * carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP address</a> in the <i>Amazon Web Services Wavelength Developer Guide</i>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}


    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline const Aws::String& GetInterfaceType() const{ return m_interfaceType; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline void SetInterfaceType(const Aws::String& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline void SetInterfaceType(Aws::String&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline void SetInterfaceType(const char* value) { m_interfaceTypeHasBeenSet = true; m_interfaceType.assign(value); }

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline InstanceNetworkInterfaceSpecification& WithInterfaceType(const Aws::String& value) { SetInterfaceType(value); return *this;}

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline InstanceNetworkInterfaceSpecification& WithInterfaceType(Aws::String&& value) { SetInterfaceType(std::move(value)); return *this;}

    /**
     * <p>The type of network interface.</p> <p>Valid values: <code>interface</code> |
     * <code>efa</code> </p>
     */
    inline InstanceNetworkInterfaceSpecification& WithInterfaceType(const char* value) { SetInterfaceType(value); return *this;}


    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p> <p>If you are using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>
     * to create Spot Instances, omit this parameter because you can’t specify the
     * network card index when using this API. To specify the network card index, use
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p> <p>If you are using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>
     * to create Spot Instances, omit this parameter because you can’t specify the
     * network card index when using this API. To specify the network card index, use
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p> <p>If you are using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>
     * to create Spot Instances, omit this parameter because you can’t specify the
     * network card index when using this API. To specify the network card index, use
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p> <p>If you are using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>
     * to create Spot Instances, omit this parameter because you can’t specify the
     * network card index when using this API. To specify the network card index, use
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}


    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationRequest>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv4Prefixes(const Ipv4PrefixSpecificationRequest& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv4 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv4Prefixes(Ipv4PrefixSpecificationRequest&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv4 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv4Prefix</code> option.</p>
     */
    inline int GetIpv4PrefixCount() const{ return m_ipv4PrefixCount; }

    /**
     * <p>The number of IPv4 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv4Prefix</code> option.</p>
     */
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv4 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv4Prefix</code> option.</p>
     */
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }

    /**
     * <p>The number of IPv4 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv4Prefix</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}


    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationRequest>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Prefixes(const Ipv6PrefixSpecificationRequest& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv6 delegated prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& AddIpv6Prefixes(Ipv6PrefixSpecificationRequest&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv6 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv6Prefix</code> option.</p>
     */
    inline int GetIpv6PrefixCount() const{ return m_ipv6PrefixCount; }

    /**
     * <p>The number of IPv6 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv6Prefix</code> option.</p>
     */
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv6 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv6Prefix</code> option.</p>
     */
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }

    /**
     * <p>The number of IPv6 delegated prefixes to be automatically assigned to the
     * network interface. You cannot use this option if you use the
     * <code>Ipv6Prefix</code> option.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}


    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool GetPrimaryIpv6() const{ return m_primaryIpv6; }

    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool PrimaryIpv6HasBeenSet() const { return m_primaryIpv6HasBeenSet; }

    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline void SetPrimaryIpv6(bool value) { m_primaryIpv6HasBeenSet = true; m_primaryIpv6 = value; }

    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithPrimaryIpv6(bool value) { SetPrimaryIpv6(value); return *this;}


    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline const EnaSrdSpecificationRequest& GetEnaSrdSpecification() const{ return m_enaSrdSpecification; }

    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }

    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline void SetEnaSrdSpecification(const EnaSrdSpecificationRequest& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = value; }

    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline void SetEnaSrdSpecification(EnaSrdSpecificationRequest&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::move(value); }

    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithEnaSrdSpecification(const EnaSrdSpecificationRequest& value) { SetEnaSrdSpecification(value); return *this;}

    /**
     * <p>Specifies the ENA Express settings for the network interface that's attached
     * to the instance.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithEnaSrdSpecification(EnaSrdSpecificationRequest&& value) { SetEnaSrdSpecification(std::move(value)); return *this;}


    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const ConnectionTrackingSpecificationRequest& GetConnectionTrackingSpecification() const{ return m_connectionTrackingSpecification; }

    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool ConnectionTrackingSpecificationHasBeenSet() const { return m_connectionTrackingSpecificationHasBeenSet; }

    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetConnectionTrackingSpecification(const ConnectionTrackingSpecificationRequest& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = value; }

    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetConnectionTrackingSpecification(ConnectionTrackingSpecificationRequest&& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = std::move(value); }

    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithConnectionTrackingSpecification(const ConnectionTrackingSpecificationRequest& value) { SetConnectionTrackingSpecification(value); return *this;}

    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline InstanceNetworkInterfaceSpecification& WithConnectionTrackingSpecification(ConnectionTrackingSpecificationRequest&& value) { SetConnectionTrackingSpecification(std::move(value)); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    bool m_associateCarrierIpAddress;
    bool m_associateCarrierIpAddressHasBeenSet = false;

    Aws::String m_interfaceType;
    bool m_interfaceTypeHasBeenSet = false;

    int m_networkCardIndex;
    bool m_networkCardIndexHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecificationRequest> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv4PrefixCount;
    bool m_ipv4PrefixCountHasBeenSet = false;

    Aws::Vector<Ipv6PrefixSpecificationRequest> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    int m_ipv6PrefixCount;
    bool m_ipv6PrefixCountHasBeenSet = false;

    bool m_primaryIpv6;
    bool m_primaryIpv6HasBeenSet = false;

    EnaSrdSpecificationRequest m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    ConnectionTrackingSpecificationRequest m_connectionTrackingSpecification;
    bool m_connectionTrackingSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
