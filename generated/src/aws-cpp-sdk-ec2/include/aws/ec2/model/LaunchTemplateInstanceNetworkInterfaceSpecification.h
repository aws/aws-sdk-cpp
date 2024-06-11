﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LaunchTemplateEnaSrdSpecification.h>
#include <aws/ec2/model/ConnectionTrackingSpecification.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
#include <aws/ec2/model/Ipv4PrefixSpecificationResponse.h>
#include <aws/ec2/model/Ipv6PrefixSpecificationResponse.h>
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
  class LaunchTemplateInstanceNetworkInterfaceSpecification
  {
  public:
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecification();
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether to associate a Carrier IP address with eth0 for a new
     * network interface.</p> <p>Use this option when you launch an instance in a
     * Wavelength Zone and want to associate a Carrier IP address with the network
     * interface. For more information about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline bool GetAssociateCarrierIpAddress() const{ return m_associateCarrierIpAddress; }
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to associate a public IPv4 address with eth0 for a new
     * network interface.</p> <p>Amazon Web Services charges for all public IPv4
     * addresses, including public IPv4 addresses associated with running instances and
     * Elastic IP addresses. For more information, see the <i>Public IPv4 Address</i>
     * tab on the <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing
     * page</a>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device index for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network interface.</p>
     */
    inline const Aws::String& GetInterfaceType() const{ return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    inline void SetInterfaceType(const Aws::String& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }
    inline void SetInterfaceType(Aws::String&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }
    inline void SetInterfaceType(const char* value) { m_interfaceTypeHasBeenSet = true; m_interfaceType.assign(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithInterfaceType(const Aws::String& value) { SetInterfaceType(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithInterfaceType(Aws::String&& value) { SetInterfaceType(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithInterfaceType(const char* value) { SetInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 addresses for the network interface.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses for the network interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
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
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of secondary private IPv4 addresses for the network interface.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more IPv4 prefixes assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationResponse>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationResponse>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationResponse>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationResponse>& value) { SetIpv4Prefixes(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationResponse>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv4Prefixes(const Ipv4PrefixSpecificationResponse& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv4Prefixes(Ipv4PrefixSpecificationResponse&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv4 prefixes that Amazon Web Services automatically assigned
     * to the network interface.</p>
     */
    inline int GetIpv4PrefixCount() const{ return m_ipv4PrefixCount; }
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more IPv6 prefixes assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationResponse>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationResponse>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationResponse>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationResponse>& value) { SetIpv6Prefixes(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationResponse>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Prefixes(const Ipv6PrefixSpecificationResponse& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& AddIpv6Prefixes(Ipv6PrefixSpecificationResponse&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 prefixes that Amazon Web Services automatically assigned
     * to the network interface.</p>
     */
    inline int GetIpv6PrefixCount() const{ return m_ipv6PrefixCount; }
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool GetPrimaryIpv6() const{ return m_primaryIpv6; }
    inline bool PrimaryIpv6HasBeenSet() const { return m_primaryIpv6HasBeenSet; }
    inline void SetPrimaryIpv6(bool value) { m_primaryIpv6HasBeenSet = true; m_primaryIpv6 = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithPrimaryIpv6(bool value) { SetPrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ENA Express settings for instances launched from your launch
     * template.</p>
     */
    inline const LaunchTemplateEnaSrdSpecification& GetEnaSrdSpecification() const{ return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    inline void SetEnaSrdSpecification(const LaunchTemplateEnaSrdSpecification& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = value; }
    inline void SetEnaSrdSpecification(LaunchTemplateEnaSrdSpecification&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithEnaSrdSpecification(const LaunchTemplateEnaSrdSpecification& value) { SetEnaSrdSpecification(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithEnaSrdSpecification(LaunchTemplateEnaSrdSpecification&& value) { SetEnaSrdSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
     * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const ConnectionTrackingSpecification& GetConnectionTrackingSpecification() const{ return m_connectionTrackingSpecification; }
    inline bool ConnectionTrackingSpecificationHasBeenSet() const { return m_connectionTrackingSpecificationHasBeenSet; }
    inline void SetConnectionTrackingSpecification(const ConnectionTrackingSpecification& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = value; }
    inline void SetConnectionTrackingSpecification(ConnectionTrackingSpecification&& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = std::move(value); }
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithConnectionTrackingSpecification(const ConnectionTrackingSpecification& value) { SetConnectionTrackingSpecification(value); return *this;}
    inline LaunchTemplateInstanceNetworkInterfaceSpecification& WithConnectionTrackingSpecification(ConnectionTrackingSpecification&& value) { SetConnectionTrackingSpecification(std::move(value)); return *this;}
    ///@}
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

    int m_networkCardIndex;
    bool m_networkCardIndexHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecificationResponse> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv4PrefixCount;
    bool m_ipv4PrefixCountHasBeenSet = false;

    Aws::Vector<Ipv6PrefixSpecificationResponse> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    int m_ipv6PrefixCount;
    bool m_ipv6PrefixCountHasBeenSet = false;

    bool m_primaryIpv6;
    bool m_primaryIpv6HasBeenSet = false;

    LaunchTemplateEnaSrdSpecification m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    ConnectionTrackingSpecification m_connectionTrackingSpecification;
    bool m_connectionTrackingSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
