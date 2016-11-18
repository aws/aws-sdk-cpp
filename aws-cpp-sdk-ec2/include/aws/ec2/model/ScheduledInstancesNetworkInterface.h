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
#include <aws/ec2/model/ScheduledInstancesPrivateIpAddressConfig.h>

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
   * <p>Describes a network interface for a Scheduled Instance.</p>
   */
  class AWS_EC2_API ScheduledInstancesNetworkInterface
  {
  public:
    ScheduledInstancesNetworkInterface();
    ScheduledInstancesNetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesNetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}

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
    inline ScheduledInstancesNetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

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
    inline ScheduledInstancesNetworkInterface& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IP address of the network interface within the subnet.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP addresses.</p>
     */
    inline const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& GetPrivateIpAddressConfigs() const{ return m_privateIpAddressConfigs; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline void SetPrivateIpAddressConfigs(const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs = value; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline void SetPrivateIpAddressConfigs(Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs = value; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddressConfigs(const Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>& value) { SetPrivateIpAddressConfigs(value); return *this;}

    /**
     * <p>The private IP addresses.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithPrivateIpAddressConfigs(Aws::Vector<ScheduledInstancesPrivateIpAddressConfig>&& value) { SetPrivateIpAddressConfigs(value); return *this;}

    /**
     * <p>The private IP addresses.</p>
     */
    inline ScheduledInstancesNetworkInterface& AddPrivateIpAddressConfigs(const ScheduledInstancesPrivateIpAddressConfig& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs.push_back(value); return *this; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline ScheduledInstancesNetworkInterface& AddPrivateIpAddressConfigs(ScheduledInstancesPrivateIpAddressConfig&& value) { m_privateIpAddressConfigsHasBeenSet = true; m_privateIpAddressConfigs.push_back(value); return *this; }

    /**
     * <p>The number of secondary private IP addresses.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IP addresses.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IP addresses.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}

    /**
     * <p>Indicates whether to assign a public IP address to instances launched in a
     * VPC. The public IP address can only be assigned to a network interface for eth0,
     * and can only be assigned to a new network interface, not an existing one. You
     * cannot specify more than one network interface in the request. If launching into
     * a default subnet, the default value is <code>true</code>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Indicates whether to assign a public IP address to instances launched in a
     * VPC. The public IP address can only be assigned to a network interface for eth0,
     * and can only be assigned to a new network interface, not an existing one. You
     * cannot specify more than one network interface in the request. If launching into
     * a default subnet, the default value is <code>true</code>.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Indicates whether to assign a public IP address to instances launched in a
     * VPC. The public IP address can only be assigned to a network interface for eth0,
     * and can only be assigned to a new network interface, not an existing one. You
     * cannot specify more than one network interface in the request. If launching into
     * a default subnet, the default value is <code>true</code>.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}

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
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesNetworkInterface& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesNetworkInterface& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesNetworkInterface& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Indicates whether to delete the interface when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether to delete the interface when the instance is
     * terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether to delete the interface when the instance is
     * terminated.</p>
     */
    inline ScheduledInstancesNetworkInterface& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

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
    Aws::Vector<ScheduledInstancesPrivateIpAddressConfig> m_privateIpAddressConfigs;
    bool m_privateIpAddressConfigsHasBeenSet;
    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet;
    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;
    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;
    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
