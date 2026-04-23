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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/PrivateIp.h>
#include <aws/inspector/model/SecurityGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about the network interfaces interacting with an EC2
   * instance. This data type is used as one of the elements of the
   * <a>AssetAttributes</a> data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API NetworkInterface
  {
  public:
    NetworkInterface();
    NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline NetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline NetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline NetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a subnet associated with the network interface.</p>
     */
    inline NetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline NetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline NetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC associated with the network interface.</p>
     */
    inline NetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The name of a private DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address associated with the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline const Aws::Vector<PrivateIp>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIp>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIp>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline NetworkInterface& WithPrivateIpAddresses(const Aws::Vector<PrivateIp>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline NetworkInterface& WithPrivateIpAddresses(Aws::Vector<PrivateIp>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline NetworkInterface& AddPrivateIpAddresses(const PrivateIp& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>A list of the private IP addresses associated with the network interface.
     * Includes the privateDnsName and privateIpAddress.</p>
     */
    inline NetworkInterface& AddPrivateIpAddresses(PrivateIp&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The name of a public DNS associated with the network interface.</p>
     */
    inline NetworkInterface& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline NetworkInterface& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline NetworkInterface& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The public IP address from which the network interface is reachable.</p>
     */
    inline NetworkInterface& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses associated with the network interface.</p>
     */
    inline NetworkInterface& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }


    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline const Aws::Vector<SecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<SecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline NetworkInterface& WithSecurityGroups(const Aws::Vector<SecurityGroup>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline NetworkInterface& WithSecurityGroups(Aws::Vector<SecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline NetworkInterface& AddSecurityGroups(const SecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of the security groups associated with the network interface. Includes
     * the groupId and groupName.</p>
     */
    inline NetworkInterface& AddSecurityGroups(SecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<PrivateIp> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::Vector<SecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
