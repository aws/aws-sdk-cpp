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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateNetworkInterface.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfaceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateNetworkInterfaceRequest : public EC2Request
  {
  public:
    CreateNetworkInterfaceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInterface"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A description for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
    inline CreateNetworkInterfaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline CreateNetworkInterfaceRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline CreateNetworkInterfaceRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline CreateNetworkInterfaceRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline CreateNetworkInterfaceRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline CreateNetworkInterfaceRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses. If your subnet has the
     * <code>AssignIpv6AddressOnCreation</code> attribute set to <code>true</code>, you
     * can specify <code>0</code> to override this setting.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses. If your subnet has the
     * <code>AssignIpv6AddressOnCreation</code> attribute set to <code>true</code>, you
     * can specify <code>0</code> to override this setting.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses. If your subnet has the
     * <code>AssignIpv6AddressOnCreation</code> attribute set to <code>true</code>, you
     * can specify <code>0</code> to override this setting.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}


    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you're specifying a number of IPv6
     * addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline CreateNetworkInterfaceRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline CreateNetworkInterfaceRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The primary private IPv4 address of the network interface. If you don't
     * specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4
     * CIDR range. If you specify an IP address, you cannot indicate any IP addresses
     * specified in <code>privateIpAddresses</code> as primary (only one IP address can
     * be designated as primary).</p>
     */
    inline CreateNetworkInterfaceRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

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
    inline CreateNetworkInterfaceRequest& WithPrivateIpAddresses(const Aws::Vector<PrivateIpAddressSpecification>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& WithPrivateIpAddresses(Aws::Vector<PrivateIpAddressSpecification>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& AddPrivateIpAddresses(const PrivateIpAddressSpecification& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>One or more private IPv4 addresses.</p>
     */
    inline CreateNetworkInterfaceRequest& AddPrivateIpAddresses(PrivateIpAddressSpecification&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface. When you specify a number of secondary IPv4 addresses, Amazon EC2
     * selects these IP addresses within the subnet's IPv4 CIDR range. You can't
     * specify this option and specify more than one private IP address using
     * <code>privateIpAddresses</code>.</p> <p>The number of IP addresses you can
     * assign to a network interface varies by instance type. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
     * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface. When you specify a number of secondary IPv4 addresses, Amazon EC2
     * selects these IP addresses within the subnet's IPv4 CIDR range. You can't
     * specify this option and specify more than one private IP address using
     * <code>privateIpAddresses</code>.</p> <p>The number of IP addresses you can
     * assign to a network interface varies by instance type. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
     * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface. When you specify a number of secondary IPv4 addresses, Amazon EC2
     * selects these IP addresses within the subnet's IPv4 CIDR range. You can't
     * specify this option and specify more than one private IP address using
     * <code>privateIpAddresses</code>.</p> <p>The number of IP addresses you can
     * assign to a network interface varies by instance type. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
     * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}


    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
