/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains information about the elastic network interface of the Amazon EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Ec2NetworkInterface">AWS
   * API Reference</a></p>
   */
  class Ec2NetworkInterface
  {
  public:
    AWS_GUARDDUTY_API Ec2NetworkInterface();
    AWS_GUARDDUTY_API Ec2NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Ec2NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of IPv6 addresses for the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline Ec2NetworkInterface& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}
    inline Ec2NetworkInterface& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline Ec2NetworkInterface& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline Ec2NetworkInterface& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
    inline Ec2NetworkInterface& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Other private IP address information of the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<PrivateIpAddressDetails>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    inline void SetPrivateIpAddresses(const Aws::Vector<PrivateIpAddressDetails>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }
    inline void SetPrivateIpAddresses(Aws::Vector<PrivateIpAddressDetails>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }
    inline Ec2NetworkInterface& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressDetails>& value) { SetPrivateIpAddresses(value); return *this;}
    inline Ec2NetworkInterface& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressDetails>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}
    inline Ec2NetworkInterface& AddPrivateIpAddresses(const PrivateIpAddressDetails& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    inline Ec2NetworkInterface& AddPrivateIpAddresses(PrivateIpAddressDetails&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The public IP address of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline Ec2NetworkInterface& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline Ec2NetworkInterface& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline Ec2NetworkInterface& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<SecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<SecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Ec2NetworkInterface& WithSecurityGroups(const Aws::Vector<SecurityGroup>& value) { SetSecurityGroups(value); return *this;}
    inline Ec2NetworkInterface& WithSecurityGroups(Aws::Vector<SecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Ec2NetworkInterface& AddSecurityGroups(const SecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Ec2NetworkInterface& AddSecurityGroups(SecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetSubNetId() const{ return m_subNetId; }
    inline bool SubNetIdHasBeenSet() const { return m_subNetIdHasBeenSet; }
    inline void SetSubNetId(const Aws::String& value) { m_subNetIdHasBeenSet = true; m_subNetId = value; }
    inline void SetSubNetId(Aws::String&& value) { m_subNetIdHasBeenSet = true; m_subNetId = std::move(value); }
    inline void SetSubNetId(const char* value) { m_subNetIdHasBeenSet = true; m_subNetId.assign(value); }
    inline Ec2NetworkInterface& WithSubNetId(const Aws::String& value) { SetSubNetId(value); return *this;}
    inline Ec2NetworkInterface& WithSubNetId(Aws::String&& value) { SetSubNetId(std::move(value)); return *this;}
    inline Ec2NetworkInterface& WithSubNetId(const char* value) { SetSubNetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Ec2NetworkInterface& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Ec2NetworkInterface& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Ec2NetworkInterface& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::Vector<PrivateIpAddressDetails> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::Vector<SecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subNetId;
    bool m_subNetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
