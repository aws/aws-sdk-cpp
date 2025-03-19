/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ScheduledInstancesIpv6Address.h>
#include <aws/ec2/model/ScheduledInstancesPrivateIpAddressConfig.h>
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
   * <p>Describes a network interface for a Scheduled Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesNetworkInterface">AWS
   * API Reference</a></p>
   */
  class ScheduledInstancesNetworkInterface
  {
  public:
    AWS_EC2_API ScheduledInstancesNetworkInterface() = default;
    AWS_EC2_API ScheduledInstancesNetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstancesNetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether to assign a public IPv4 address to instances launched in a
     * VPC. The public IPv4 address can only be assigned to a network interface for
     * eth0, and can only be assigned to a new network interface, not an existing one.
     * You cannot specify more than one network interface in the request. If launching
     * into a default subnet, the default value is <code>true</code>.</p> <p>Amazon Web
     * Services charges for all public IPv4 addresses, including public IPv4 addresses
     * associated with running instances and Elastic IP addresses. For more
     * information, see the <i>Public IPv4 Address</i> tab on the <a
     * href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing page</a>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline ScheduledInstancesNetworkInterface& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to delete the interface when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline ScheduledInstancesNetworkInterface& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ScheduledInstancesNetworkInterface& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const { return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline ScheduledInstancesNetworkInterface& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    ScheduledInstancesNetworkInterface& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    ScheduledInstancesNetworkInterface& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 addresses to assign to the network interface. The IPv6
     * addresses are automatically selected from the subnet range.</p>
     */
    inline int GetIpv6AddressCount() const { return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline ScheduledInstancesNetworkInterface& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific IPv6 addresses from the subnet range.</p>
     */
    inline const Aws::Vector<ScheduledInstancesIpv6Address>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<ScheduledInstancesIpv6Address>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<ScheduledInstancesIpv6Address>>
    ScheduledInstancesNetworkInterface& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = ScheduledInstancesIpv6Address>
    ScheduledInstancesNetworkInterface& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
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
    ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address of the network interface within the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    ScheduledInstancesNetworkInterface& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses.</p>
     */
    inline const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& GetPrivateIpAddressConfigs() const { return m_privateIpAddressConfigs; }
    inline bool PrivateIpAddressConfigsHasBeenSet() const { return m_privateIpAddressConfigsHasBeenSet; }
    template<typename PrivateIpAddressConfigsT = Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>>
    void SetPrivateIpAddressConfigs(PrivateIpAddressConfigsT&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs = std::forward<PrivateIpAddressConfigsT>(value); }
    template<typename PrivateIpAddressConfigsT = Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>>
    ScheduledInstancesNetworkInterface& WithPrivateIpAddressConfigs(PrivateIpAddressConfigsT&& value) { SetPrivateIpAddressConfigs(std::forward<PrivateIpAddressConfigsT>(value)); return *this;}
    template<typename PrivateIpAddressConfigsT = ScheduledInstancesPrivateIpAddressConfig>
    ScheduledInstancesNetworkInterface& AddPrivateIpAddressConfigs(PrivateIpAddressConfigsT&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs.emplace_back(std::forward<PrivateIpAddressConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of secondary private IPv4 addresses.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const { return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline ScheduledInstancesNetworkInterface& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    ScheduledInstancesNetworkInterface& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

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

    int m_ipv6AddressCount{0};
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<ScheduledInstancesIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<ScheduledInstancesPrivateIpAddressConfig> m_privateIpAddressConfigs;
    bool m_privateIpAddressConfigsHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount{0};
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
