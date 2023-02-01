/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/IpAddressFamily.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for the set of IP addresses for an accelerator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/IpSet">AWS
   * API Reference</a></p>
   */
  class IpSet
  {
  public:
    AWS_GLOBALACCELERATOR_API IpSet();
    AWS_GLOBALACCELERATOR_API IpSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API IpSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline IpSet& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline IpSet& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline IpSet& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline IpSet& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of IP addresses in the IP address set. An IP address set can have a
     * maximum of two IP addresses.</p>
     */
    inline IpSet& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }


    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline const IpAddressFamily& GetIpAddressFamily() const{ return m_ipAddressFamily; }

    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline bool IpAddressFamilyHasBeenSet() const { return m_ipAddressFamilyHasBeenSet; }

    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline void SetIpAddressFamily(const IpAddressFamily& value) { m_ipAddressFamilyHasBeenSet = true; m_ipAddressFamily = value; }

    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline void SetIpAddressFamily(IpAddressFamily&& value) { m_ipAddressFamilyHasBeenSet = true; m_ipAddressFamily = std::move(value); }

    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline IpSet& WithIpAddressFamily(const IpAddressFamily& value) { SetIpAddressFamily(value); return *this;}

    /**
     * <p>The types of IP addresses included in this IP set. </p>
     */
    inline IpSet& WithIpAddressFamily(IpAddressFamily&& value) { SetIpAddressFamily(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    IpAddressFamily m_ipAddressFamily;
    bool m_ipAddressFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
