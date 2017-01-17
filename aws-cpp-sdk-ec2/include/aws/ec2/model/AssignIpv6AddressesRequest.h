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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AssignIpv6AddressesRequest : public EC2Request
  {
  public:
    AssignIpv6AddressesRequest();
    Aws::String SerializePayload() const override;

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
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>One or more specific IPv6 addresses to be assigned to the network interface.
     * You can't use this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The number of IPv6 addresses to assign to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>The number of IPv6 addresses to assign to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>The number of IPv6 addresses to assign to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}

  private:
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;
    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
