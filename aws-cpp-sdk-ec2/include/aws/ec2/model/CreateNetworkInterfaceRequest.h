﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceCreationType.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/PrivateIpAddressSpecification.h>
#include <aws/ec2/model/Ipv4PrefixSpecificationRequest.h>
#include <aws/ec2/model/Ipv6PrefixSpecificationRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }

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
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

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
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
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
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
     * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }

    /**
     * <p>The number of secondary private IPv4 addresses to assign to a network
     * interface. When you specify a number of secondary IPv4 addresses, Amazon EC2
     * selects these IP addresses within the subnet's IPv4 CIDR range. You can't
     * specify this option and specify more than one private IP address using
     * <code>privateIpAddresses</code>.</p> <p>The number of IP addresses you can
     * assign to a network interface varies by instance type. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
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
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
     * Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}


    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationRequest>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecificationRequest>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecificationRequest>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv4Prefixes(const Ipv4PrefixSpecificationRequest& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>One or moreIPv4 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv4PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv4Prefixes(Ipv4PrefixSpecificationRequest&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv4 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the <code>Ipv4
     * Prefixes</code> option.</p>
     */
    inline int GetIpv4PrefixCount() const{ return m_ipv4PrefixCount; }

    /**
     * <p>The number of IPv4 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the <code>Ipv4
     * Prefixes</code> option.</p>
     */
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv4 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the <code>Ipv4
     * Prefixes</code> option.</p>
     */
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }

    /**
     * <p>The number of IPv4 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the <code>Ipv4
     * Prefixes</code> option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}


    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationRequest>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6Prefixes(const Aws::Vector<Ipv6PrefixSpecificationRequest>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6Prefixes(Aws::Vector<Ipv6PrefixSpecificationRequest>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv6Prefixes(const Ipv6PrefixSpecificationRequest& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>One or moreIPv6 Prefix Delegation prefixes assigned to the network interface.
     * You cannot use this option if you use the <code>Ipv6PrefixCount</code>
     * option.</p>
     */
    inline CreateNetworkInterfaceRequest& AddIpv6Prefixes(Ipv6PrefixSpecificationRequest&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of IPv6 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline int GetIpv6PrefixCount() const{ return m_ipv6PrefixCount; }

    /**
     * <p>The number of IPv6 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv6 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }

    /**
     * <p>The number of IPv6 Prefix Delegation prefixes that AWS automatically assigns
     * to the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline CreateNetworkInterfaceRequest& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}


    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline const NetworkInterfaceCreationType& GetInterfaceType() const{ return m_interfaceType; }

    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }

    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetInterfaceType(const NetworkInterfaceCreationType& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }

    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetInterfaceType(NetworkInterfaceCreationType&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::move(value); }

    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithInterfaceType(const NetworkInterfaceCreationType& value) { SetInterfaceType(value); return *this;}

    /**
     * <p>Indicates the type of network interface. To create an Elastic Fabric Adapter
     * (EFA), specify <code>efa</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html"> Elastic
     * Fabric Adapter</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. To
     * create a trunk network interface, specify <code>efa</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/eni-trunking.html">
     * Network interface trunking</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithInterfaceType(NetworkInterfaceCreationType&& value) { SetInterfaceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet to associate with the network interface.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

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


    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the new network interface.</p>
     */
    inline CreateNetworkInterfaceRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateNetworkInterfaceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

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

    Aws::Vector<Ipv4PrefixSpecificationRequest> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet;

    int m_ipv4PrefixCount;
    bool m_ipv4PrefixCountHasBeenSet;

    Aws::Vector<Ipv6PrefixSpecificationRequest> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet;

    int m_ipv6PrefixCount;
    bool m_ipv6PrefixCountHasBeenSet;

    NetworkInterfaceCreationType m_interfaceType;
    bool m_interfaceTypeHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
