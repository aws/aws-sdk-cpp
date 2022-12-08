/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AssignIpv6AddressesRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssignIpv6AddressesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignIpv6Addresses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The number of additional IPv6 addresses to assign to the network interface.
     * The specified number of IPv6 addresses are assigned in addition to the existing
     * IPv6 addresses that are already assigned to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>The number of additional IPv6 addresses to assign to the network interface.
     * The specified number of IPv6 addresses are assigned in addition to the existing
     * IPv6 addresses that are already assigned to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }

    /**
     * <p>The number of additional IPv6 addresses to assign to the network interface.
     * The specified number of IPv6 addresses are assigned in addition to the existing
     * IPv6 addresses that are already assigned to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>The number of additional IPv6 addresses to assign to the network interface.
     * The specified number of IPv6 addresses are assigned in addition to the existing
     * IPv6 addresses that are already assigned to the network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if specifying specific IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}


    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv6 addresses to be assigned to the network interface. You can't use
     * this option if you're specifying a number of IPv6 addresses.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }


    /**
     * <p>The number of IPv6 prefixes that Amazon Web Services automatically assigns to
     * the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline int GetIpv6PrefixCount() const{ return m_ipv6PrefixCount; }

    /**
     * <p>The number of IPv6 prefixes that Amazon Web Services automatically assigns to
     * the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }

    /**
     * <p>The number of IPv6 prefixes that Amazon Web Services automatically assigns to
     * the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }

    /**
     * <p>The number of IPv6 prefixes that Amazon Web Services automatically assigns to
     * the network interface. You cannot use this option if you use the
     * <code>Ipv6Prefixes</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}


    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Prefixes() const{ return m_ipv6Prefixes; }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(const Aws::Vector<Aws::String>& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = value; }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline void SetIpv6Prefixes(Aws::Vector<Aws::String>&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::move(value); }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Prefixes(const Aws::Vector<Aws::String>& value) { SetIpv6Prefixes(value); return *this;}

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& WithIpv6Prefixes(Aws::Vector<Aws::String>&& value) { SetIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Prefixes(const Aws::String& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Prefixes(Aws::String&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more IPv6 prefixes assigned to the network interface. You cannot use
     * this option if you use the <code>Ipv6PrefixCount</code> option.</p>
     */
    inline AssignIpv6AddressesRequest& AddIpv6Prefixes(const char* value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.push_back(value); return *this; }


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
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

  private:

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    int m_ipv6PrefixCount;
    bool m_ipv6PrefixCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
