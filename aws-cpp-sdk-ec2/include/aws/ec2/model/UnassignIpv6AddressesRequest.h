/*
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
  class AWS_EC2_API UnassignIpv6AddressesRequest : public EC2Request
  {
  public:
    UnassignIpv6AddressesRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
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
    inline UnassignIpv6AddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline UnassignIpv6AddressesRequest& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

  private:
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
