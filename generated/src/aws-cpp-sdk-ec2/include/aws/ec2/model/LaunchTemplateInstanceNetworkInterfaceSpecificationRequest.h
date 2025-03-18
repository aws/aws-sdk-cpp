﻿/**
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
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest() = default;
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Associates a Carrier IP address with eth0 for a new network interface.</p>
     * <p>Use this option when you launch an instance in a Wavelength Zone and want to
     * associate a Carrier IP address with the network interface. For more information
     * about Carrier IP addresses, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP addresses</a> in the <i>Wavelength Developer Guide</i>.</p>
     */
    inline bool GetAssociateCarrierIpAddress() const { return m_associateCarrierIpAddress; }
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
     * <p>Amazon Web Services charges for all public IPv4 addresses, including public
     * IPv4 addresses associated with running instances and Elastic IP addresses. For
     * more information, see the <i>Public IPv4 Address</i> tab on the <a
     * href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing page</a>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device index for the network interface attachment. Each network interface
     * requires a device index. If you create a launch template that includes secondary
     * network interfaces but not a primary network interface, then you must add a
     * primary network interface as a launch parameter when you launch an instance from
     * the template.</p>
     */
    inline int GetDeviceIndex() const { return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network interface. To create an Elastic Fabric Adapter (EFA),
     * specify <code>efa</code> or <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
     * Fabric Adapter for AI/ML and HPC workloads on Amazon EC2</a> in the <i>Amazon
     * EC2 User Guide</i>.</p> <p>If you are not creating an EFA, specify
     * <code>interface</code> or omit this parameter.</p> <p>If you specify
     * <code>efa-only</code>, do not assign any IP addresses to the network interface.
     * EFA-only network interfaces do not support IP addresses.</p> <p>Valid values:
     * <code>interface</code> | <code>efa</code> | <code>efa-only</code> </p>
     */
    inline const Aws::String& GetInterfaceType() const { return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    template<typename InterfaceTypeT = Aws::String>
    void SetInterfaceType(InterfaceTypeT&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::forward<InterfaceTypeT>(value); }
    template<typename InterfaceTypeT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithInterfaceType(InterfaceTypeT&& value) { SetInterfaceType(std::forward<InterfaceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline int GetIpv6AddressCount() const { return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline const Aws::Vector<InstanceIpv6AddressRequest>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6AddressRequest>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6AddressRequest>>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = InstanceIpv6AddressRequest>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary private IPv4 address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<PrivateIpAddressSpecification>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<PrivateIpAddressSpecification>>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = PrivateIpAddressSpecification>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const { return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet for the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more IPv4 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationRequest>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecificationRequest>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecificationRequest>>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = Ipv4PrefixSpecificationRequest>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefix</code>
     * option.</p>
     */
    inline int GetIpv4PrefixCount() const { return m_ipv4PrefixCount; }
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more IPv6 prefixes to be assigned to the network interface. You cannot
     * use this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationRequest>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecificationRequest>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecificationRequest>>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = Ipv6PrefixSpecificationRequest>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option.</p>
     */
    inline int GetIpv6PrefixCount() const { return m_ipv6PrefixCount; }
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IPv6 address of the network interface. When you enable an IPv6
     * GUA address to be a primary IPv6, the first IPv6 GUA will be made the primary
     * IPv6 address until the instance is terminated or the network interface is
     * detached. For more information about primary IPv6 addresses, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>.</p>
     */
    inline bool GetPrimaryIpv6() const { return m_primaryIpv6; }
    inline bool PrimaryIpv6HasBeenSet() const { return m_primaryIpv6HasBeenSet; }
    inline void SetPrimaryIpv6(bool value) { m_primaryIpv6HasBeenSet = true; m_primaryIpv6 = value; }
    inline LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithPrimaryIpv6(bool value) { SetPrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure ENA Express settings for your launch template.</p>
     */
    inline const EnaSrdSpecificationRequest& GetEnaSrdSpecification() const { return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    template<typename EnaSrdSpecificationT = EnaSrdSpecificationRequest>
    void SetEnaSrdSpecification(EnaSrdSpecificationT&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::forward<EnaSrdSpecificationT>(value); }
    template<typename EnaSrdSpecificationT = EnaSrdSpecificationRequest>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithEnaSrdSpecification(EnaSrdSpecificationT&& value) { SetEnaSrdSpecification(std::forward<EnaSrdSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group connection tracking specification that enables you to set
     * the timeout for connection tracking on an Elastic network interface. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Idle
     * connection tracking timeout</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ConnectionTrackingSpecificationRequest& GetConnectionTrackingSpecification() const { return m_connectionTrackingSpecification; }
    inline bool ConnectionTrackingSpecificationHasBeenSet() const { return m_connectionTrackingSpecificationHasBeenSet; }
    template<typename ConnectionTrackingSpecificationT = ConnectionTrackingSpecificationRequest>
    void SetConnectionTrackingSpecification(ConnectionTrackingSpecificationT&& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = std::forward<ConnectionTrackingSpecificationT>(value); }
    template<typename ConnectionTrackingSpecificationT = ConnectionTrackingSpecificationRequest>
    LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& WithConnectionTrackingSpecification(ConnectionTrackingSpecificationT&& value) { SetConnectionTrackingSpecification(std::forward<ConnectionTrackingSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_associateCarrierIpAddress{false};
    bool m_associateCarrierIpAddressHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deviceIndex{0};
    bool m_deviceIndexHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_interfaceType;
    bool m_interfaceTypeHasBeenSet = false;

    int m_ipv6AddressCount{0};
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<InstanceIpv6AddressRequest> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount{0};
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    int m_networkCardIndex{0};
    bool m_networkCardIndexHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecificationRequest> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv4PrefixCount{0};
    bool m_ipv4PrefixCountHasBeenSet = false;

    Aws::Vector<Ipv6PrefixSpecificationRequest> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    int m_ipv6PrefixCount{0};
    bool m_ipv6PrefixCountHasBeenSet = false;

    bool m_primaryIpv6{false};
    bool m_primaryIpv6HasBeenSet = false;

    EnaSrdSpecificationRequest m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    ConnectionTrackingSpecificationRequest m_connectionTrackingSpecification;
    bool m_connectionTrackingSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
