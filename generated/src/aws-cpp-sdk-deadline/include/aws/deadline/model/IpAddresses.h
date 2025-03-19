/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The IP addresses for a host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/IpAddresses">AWS
   * API Reference</a></p>
   */
  class IpAddresses
  {
  public:
    AWS_DEADLINE_API IpAddresses() = default;
    AWS_DEADLINE_API IpAddresses(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API IpAddresses& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const { return m_ipV4Addresses; }
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    void SetIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::forward<IpV4AddressesT>(value); }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    IpAddresses& WithIpV4Addresses(IpV4AddressesT&& value) { SetIpV4Addresses(std::forward<IpV4AddressesT>(value)); return *this;}
    template<typename IpV4AddressesT = Aws::String>
    IpAddresses& AddIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.emplace_back(std::forward<IpV4AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const { return m_ipV6Addresses; }
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    void SetIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::forward<IpV6AddressesT>(value); }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    IpAddresses& WithIpV6Addresses(IpV6AddressesT&& value) { SetIpV6Addresses(std::forward<IpV6AddressesT>(value)); return *this;}
    template<typename IpV6AddressesT = Aws::String>
    IpAddresses& AddIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.emplace_back(std::forward<IpV6AddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipV4Addresses;
    bool m_ipV4AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
