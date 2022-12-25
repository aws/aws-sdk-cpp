/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for UnassignPrivateIpAddresses.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddressesRequest">AWS
   * API Reference</a></p>
   */
  class UnassignPrivateIpAddressesRequest : public EC2Request
  {
  public:
    AWS_EC2_API UnassignPrivateIpAddressesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnassignPrivateIpAddresses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }


    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline void SetIpv4Prefixes(const Aws::Vector<Aws::String>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline void SetIpv4Prefixes(Aws::Vector<Aws::String>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithIpv4Prefixes(const Aws::Vector<Aws::String>& value) { SetIpv4Prefixes(value); return *this;}

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithIpv4Prefixes(Aws::Vector<Aws::String>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddIpv4Prefixes(const Aws::String& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddIpv4Prefixes(Aws::String&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv4 prefixes to unassign from the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddIpv4Prefixes(const char* value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
