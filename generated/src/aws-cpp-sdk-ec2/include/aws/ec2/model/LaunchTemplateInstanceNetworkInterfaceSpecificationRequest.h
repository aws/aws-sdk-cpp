/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceIpv6AddressRequest.h>
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
   * <p>The parameters for a network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateInstanceNetworkInterfaceSpecificationRequest
  {
  public:
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest();
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Associates a Carrier IP address with eth0 for a new network interface.</p>
     * <p>Use this option when you launch an instance in a Wavelength Zone and want to
     * associate a Carrier IP address with the network interface. For more information
     * about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline bool GetAssociateCarrierIpAddress() const{ return m_associateCarrierIpAddress; }

    /**
     * <p>Associates a Carrier IP address with eth0 for a new network interface.</p>
     * <p>Use this option when you launch an instance in a Wavelength Zone and want to
     * associate a Carrier IP address with the network interface. For more information
     * about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }

    /**
     * <p>Associates a Carrier IP address with eth0 for a new network interface.</p>
     * <p>Use this option when you launch an instance in a Wavelength Zone and want to
     * associate a Carrier IP address with the network interface. For more information
     * about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }

    /**
     * <p>Associates a Carrier IP address with eth0 for a new network interface.</p>
     * <p>Use this option when you launch an instance in a Wavelength Zone and want to
     * associate a Carrier IP address with the network interface. For more information
     * about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}


    /**
     * <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>A description for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }

    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}


    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline const Aws::String& GetInterfaceType() const{ return m_interfaceType; }

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline void SetInterfaceType(const Aws::String& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline void SetInterfaceType(Aws::String&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline void SetInterfaceType(const char* value) { m_interfaceTypeHasBeenSet = true; m_interfaceType.assign(value); }

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithInterfaceType(const Aws::String& value) { SetInterfaceType(value); return *this;}

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithInterfaceType(Aws::String&& value) { SetInterfaceType(std::move(value)); return *this;}

    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>If you are not creating an EFA, specify <code>interface</code> or omit this
     * parameter.</p> <p>Valid values: <code>interface</code> | <code>efa</code> </p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithInterfaceType(const char* value) { SetInterfaceType(value); return *this;}


    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }

    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}


    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline const Aws::Vector<InstanceIpv6AddressRequest>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6AddressRequest>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6AddressRequest>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Addresses(const Aws::Vector<InstanceIpv6AddressRequest>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Addresses(Aws::Vector<InstanceIpv6AddressRequest>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Addresses(const InstanceIpv6AddressRequest& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Addresses(InstanceIpv6AddressRequest&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface.</p>
     */
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}


    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

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
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }

    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}


    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationRequest>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv4Prefixes(const Ipv4PrefixSpecificationRequest& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv4Prefixes(Ipv4PrefixSpecificationRequest&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefix</code>
     * option.</p>
     */
    inline int GetIpv4PrefixCount() const{ return m_ipv4PrefixCount; }

    /**
     * <p>The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefix</code>
     * option.</p>
     */
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefix</code>
     * option.</p>
     */
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }

    /**
     * <p>The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefix</code>
     * option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}


    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationRequest>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Prefixes(const Ipv6PrefixSpecificationRequest& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Prefixes(Ipv6PrefixSpecificationRequest&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option.</p>
     */
    inline int GetIpv6PrefixCount() const{ return m_ipv6PrefixCount; }

    /**
     * <p>The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option.</p>
     */
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option.</p>
     */
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }

    /**
     * <p>The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option.</p>
     */
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}

  private:

    bool m_associateCarrierIpAddress;
    bool m_associateCarrierIpAddressHasBeenSet = false;

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

    Aws::String m_interfaceType;
    bool m_interfaceTypeHasBeenSet = false;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<InstanceIpv6AddressRequest> m_ipv6Addresses;
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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
