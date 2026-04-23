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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLOBALACCELERATOR_API IpSet
  {
  public:
    IpSet();
    IpSet(Aws::Utils::Json::JsonView jsonValue);
    IpSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline const Aws::String& GetIpFamily() const{ return m_ipFamily; }

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline bool IpFamilyHasBeenSet() const { return m_ipFamilyHasBeenSet; }

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline void SetIpFamily(const Aws::String& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = value; }

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline void SetIpFamily(Aws::String&& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = std::move(value); }

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline void SetIpFamily(const char* value) { m_ipFamilyHasBeenSet = true; m_ipFamily.assign(value); }

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline IpSet& WithIpFamily(const Aws::String& value) { SetIpFamily(value); return *this;}

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline IpSet& WithIpFamily(Aws::String&& value) { SetIpFamily(std::move(value)); return *this;}

    /**
     * <p>The types of IP addresses included in this IP set.</p>
     */
    inline IpSet& WithIpFamily(const char* value) { SetIpFamily(value); return *this;}


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

  private:

    Aws::String m_ipFamily;
    bool m_ipFamilyHasBeenSet;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
