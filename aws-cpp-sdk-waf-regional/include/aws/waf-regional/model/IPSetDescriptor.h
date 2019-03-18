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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/IPSetDescriptorType.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>Specifies the IP address type (<code>IPV4</code> or <code>IPV6</code>) and
   * the IP address range (in CIDR format) that web requests originate
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/IPSetDescriptor">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API IPSetDescriptor
  {
  public:
    IPSetDescriptor();
    IPSetDescriptor(Aws::Utils::Json::JsonView jsonValue);
    IPSetDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline const IPSetDescriptorType& GetType() const{ return m_type; }

    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline void SetType(const IPSetDescriptorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline void SetType(IPSetDescriptorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline IPSetDescriptor& WithType(const IPSetDescriptorType& value) { SetType(value); return *this;}

    /**
     * <p>Specify <code>IPV4</code> or <code>IPV6</code>.</p>
     */
    inline IPSetDescriptor& WithType(IPSetDescriptorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline IPSetDescriptor& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline IPSetDescriptor& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specify an IPv4 address by using CIDR notation. For example:</p> <ul> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li>
     * <p>To configure AWS WAF to allow, block, or count requests that originated from
     * IP addresses from 192.0.2.0 to 192.0.2.255, specify
     * <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about CIDR
     * notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Specify an IPv6 address by using CIDR notation.
     * For example:</p> <ul> <li> <p>To configure AWS WAF to allow, block, or count
     * requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul>
     */
    inline IPSetDescriptor& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    IPSetDescriptorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
