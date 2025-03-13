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
  class UnassignIpv6AddressesRequest : public EC2Request
  {
  public:
    AWS_EC2_API UnassignIpv6AddressesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnassignIpv6Addresses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IPv6 prefixes to unassign from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<Aws::String>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<Aws::String>>
    UnassignIpv6AddressesRequest& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = Aws::String>
    UnassignIpv6AddressesRequest& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    UnassignIpv6AddressesRequest& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses to unassign from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<Aws::String>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<Aws::String>>
    UnassignIpv6AddressesRequest& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = Aws::String>
    UnassignIpv6AddressesRequest& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
