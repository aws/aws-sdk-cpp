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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/IPSetDescriptorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies the IP address type (<code>IPV4</code>) and the IP address range
   * (in CIDR format) that web requests originate from.</p>
   */
  class AWS_WAF_API IPSetDescriptor
  {
  public:
    IPSetDescriptor();
    IPSetDescriptor(const Aws::Utils::Json::JsonValue& jsonValue);
    IPSetDescriptor& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specify <code>IPV4</code>.</p>
     */
    inline const IPSetDescriptorType& GetType() const{ return m_type; }

    /**
     * <p>Specify <code>IPV4</code>.</p>
     */
    inline void SetType(const IPSetDescriptorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify <code>IPV4</code>.</p>
     */
    inline void SetType(IPSetDescriptorType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify <code>IPV4</code>.</p>
     */
    inline IPSetDescriptor& WithType(const IPSetDescriptorType& value) { SetType(value); return *this;}

    /**
     * <p>Specify <code>IPV4</code>.</p>
     */
    inline IPSetDescriptor& WithType(IPSetDescriptorType&& value) { SetType(value); return *this;}

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSetDescriptor& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSetDescriptor& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>AWS WAF supports only /8, /16,
     * /24, and /32 IP addresses.</p> <p>For more information about CIDR notation, see
     * the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSetDescriptor& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    IPSetDescriptorType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
