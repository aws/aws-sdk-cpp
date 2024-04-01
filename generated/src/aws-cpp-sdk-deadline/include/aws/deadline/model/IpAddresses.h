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
    AWS_DEADLINE_API IpAddresses();
    AWS_DEADLINE_API IpAddresses(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API IpAddresses& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const{ return m_ipV4Addresses; }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline void SetIpV4Addresses(const Aws::Vector<Aws::String>& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = value; }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline void SetIpV4Addresses(Aws::Vector<Aws::String>&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::move(value); }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline IpAddresses& WithIpV4Addresses(const Aws::Vector<Aws::String>& value) { SetIpV4Addresses(value); return *this;}

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline IpAddresses& WithIpV4Addresses(Aws::Vector<Aws::String>&& value) { SetIpV4Addresses(std::move(value)); return *this;}

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline IpAddresses& AddIpV4Addresses(const Aws::String& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline IpAddresses& AddIpV4Addresses(Aws::String&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IpV4 address of the network.</p>
     */
    inline IpAddresses& AddIpV4Addresses(const char* value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }


    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const{ return m_ipV6Addresses; }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline void SetIpV6Addresses(const Aws::Vector<Aws::String>& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = value; }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline void SetIpV6Addresses(Aws::Vector<Aws::String>&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::move(value); }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline IpAddresses& WithIpV6Addresses(const Aws::Vector<Aws::String>& value) { SetIpV6Addresses(value); return *this;}

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline IpAddresses& WithIpV6Addresses(Aws::Vector<Aws::String>&& value) { SetIpV6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline IpAddresses& AddIpV6Addresses(const Aws::String& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline IpAddresses& AddIpV6Addresses(Aws::String&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IpV6 address for the network and node component.</p>
     */
    inline IpAddresses& AddIpV6Addresses(const char* value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ipV4Addresses;
    bool m_ipV4AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
