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
    AWS_EC2_API ScheduledInstancesNetworkInterface();
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
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline ScheduledInstancesNetworkInterface& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to delete the interface when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline ScheduledInstancesNetworkInterface& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
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
    inline ScheduledInstancesNetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline ScheduledInstancesNetworkInterface& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline ScheduledInstancesNetworkInterface& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline ScheduledInstancesNetworkInterface& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline ScheduledInstancesNetworkInterface& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv6 addresses to assign to the network interface. The IPv6
     * addresses are automatically selected from the subnet range.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline ScheduledInstancesNetworkInterface& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific IPv6 addresses from the subnet range.</p>
     */
    inline const Aws::Vector<ScheduledInstancesIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<ScheduledInstancesIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<ScheduledInstancesIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline ScheduledInstancesNetworkInterface& WithIpv6Addresses(const Aws::Vector<ScheduledInstancesIpv6Address>& value) { SetIpv6Addresses(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithIpv6Addresses(Aws::Vector<ScheduledInstancesIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& AddIpv6Addresses(const ScheduledInstancesIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline ScheduledInstancesNetworkInterface& AddIpv6Addresses(ScheduledInstancesIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
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
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
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
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses.</p>
     */
    inline const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& GetPrivateIpAddressConfigs() const{ return m_privateIpAddressConfigs; }
    inline bool PrivateIpAddressConfigsHasBeenSet() const { return m_privateIpAddressConfigsHasBeenSet; }
    inline void SetPrivateIpAddressConfigs(const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs = value; }
    inline void SetPrivateIpAddressConfigs(Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs = std::move(value); }
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddressConfigs(const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& value) { SetPrivateIpAddressConfigs(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddressConfigs(Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>&& value) { SetPrivateIpAddressConfigs(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& AddPrivateIpAddressConfigs(const ScheduledInstancesPrivateIpAddressConfig& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs.push_back(value); return *this; }
    inline ScheduledInstancesNetworkInterface& AddPrivateIpAddressConfigs(ScheduledInstancesPrivateIpAddressConfig&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of secondary private IPv4 addresses.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline ScheduledInstancesNetworkInterface& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
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
    inline ScheduledInstancesNetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline ScheduledInstancesNetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline ScheduledInstancesNetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}
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

    Aws::Vector<ScheduledInstancesIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<ScheduledInstancesPrivateIpAddressConfig> m_privateIpAddressConfigs;
    bool m_privateIpAddressConfigsHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
