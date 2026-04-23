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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/PrivateIpAddressDetails.h>
#include <aws/guardduty/model/SecurityGroup.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * The network interface information of the EC2 instance.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API NetworkInterface
  {
  public:
    NetworkInterface();
    NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline NetworkInterface& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline NetworkInterface& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline NetworkInterface& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline NetworkInterface& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * A list of EC2 instance IPv6 address information.
     */
    inline NetworkInterface& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }


    /**
     * The ID of the network interface
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * The ID of the network interface
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * The ID of the network interface
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * The ID of the network interface
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * The ID of the network interface
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * The ID of the network interface
     */
    inline NetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * The ID of the network interface
     */
    inline NetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * The ID of the network interface
     */
    inline NetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * Private DNS name of the EC2 instance.
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * Private DNS name of the EC2 instance.
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * Private DNS name of the EC2 instance.
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * Private DNS name of the EC2 instance.
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * Private DNS name of the EC2 instance.
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * Private DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * Private DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * Private DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * Private IP address of the EC2 instance.
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * Private IP address of the EC2 instance.
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * Private IP address of the EC2 instance.
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * Private IP address of the EC2 instance.
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * Private IP address of the EC2 instance.
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * Private IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * Private IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * Private IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * Other private IP address information of the EC2 instance.
     */
    inline const Aws::Vector<PrivateIpAddressDetails>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressDetails>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressDetails>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressDetails>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline NetworkInterface& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressDetails>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline NetworkInterface& AddPrivateIpAddresses(const PrivateIpAddressDetails& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * Other private IP address information of the EC2 instance.
     */
    inline NetworkInterface& AddPrivateIpAddresses(PrivateIpAddressDetails&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * Public DNS name of the EC2 instance.
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * Public DNS name of the EC2 instance.
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * Public DNS name of the EC2 instance.
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * Public DNS name of the EC2 instance.
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * Public DNS name of the EC2 instance.
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * Public DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * Public DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * Public DNS name of the EC2 instance.
     */
    inline NetworkInterface& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * Public IP address of the EC2 instance.
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * Public IP address of the EC2 instance.
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * Public IP address of the EC2 instance.
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * Public IP address of the EC2 instance.
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * Public IP address of the EC2 instance.
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * Public IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * Public IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * Public IP address of the EC2 instance.
     */
    inline NetworkInterface& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * Security groups associated with the EC2 instance.
     */
    inline const Aws::Vector<SecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * Security groups associated with the EC2 instance.
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * Security groups associated with the EC2 instance.
     */
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * Security groups associated with the EC2 instance.
     */
    inline void SetSecurityGroups(Aws::Vector<SecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * Security groups associated with the EC2 instance.
     */
    inline NetworkInterface& WithSecurityGroups(const Aws::Vector<SecurityGroup>& value) { SetSecurityGroups(value); return *this;}

    /**
     * Security groups associated with the EC2 instance.
     */
    inline NetworkInterface& WithSecurityGroups(Aws::Vector<SecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * Security groups associated with the EC2 instance.
     */
    inline NetworkInterface& AddSecurityGroups(const SecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * Security groups associated with the EC2 instance.
     */
    inline NetworkInterface& AddSecurityGroups(SecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * The subnet ID of the EC2 instance.
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * The subnet ID of the EC2 instance.
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * The subnet ID of the EC2 instance.
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * The subnet ID of the EC2 instance.
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * The subnet ID of the EC2 instance.
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * The subnet ID of the EC2 instance.
     */
    inline NetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * The subnet ID of the EC2 instance.
     */
    inline NetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * The subnet ID of the EC2 instance.
     */
    inline NetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * The VPC ID of the EC2 instance.
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * The VPC ID of the EC2 instance.
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * The VPC ID of the EC2 instance.
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * The VPC ID of the EC2 instance.
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * The VPC ID of the EC2 instance.
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * The VPC ID of the EC2 instance.
     */
    inline NetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * The VPC ID of the EC2 instance.
     */
    inline NetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * The VPC ID of the EC2 instance.
     */
    inline NetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<PrivateIpAddressDetails> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    Aws::Vector<SecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
