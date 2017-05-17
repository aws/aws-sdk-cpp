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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/IPSetDescriptor.h>
#include <utility>

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
   * <p>Contains one or more IP addresses or blocks of IP addresses specified in
   * Classless Inter-Domain Routing (CIDR) notation. AWS WAF supports /8, /16, /24,
   * and /32 IP address ranges for IPv4, and /24, /32, /48, /56, /64 and /128 for
   * IPv6.</p> <p>To specify an individual IP address, you specify the four-part IP
   * address followed by a <code>/32</code>, for example, 192.0.2.0/31. To block a
   * range of IP addresses, you can specify a <code>/128</code>, <code>/64</code>,
   * <code>/56</code>, <code>/48</code>, <code>/32</code>, <code>/24</code>,
   * <code>/16</code>, or <code>/8</code> CIDR. For more information about CIDR
   * notation, see the Wikipedia entry <a
   * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
   * Inter-Domain Routing</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/IPSet">AWS API
   * Reference</a></p>
   */
  class AWS_WAF_API IPSet
  {
  public:
    IPSet();
    IPSet(const Aws::Utils::Json::JsonValue& jsonValue);
    IPSet& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::move(value); }

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline IPSet& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline IPSet& WithIPSetId(Aws::String&& value) { SetIPSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline IPSet& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline IPSet& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline const Aws::Vector<IPSetDescriptor>& GetIPSetDescriptors() const{ return m_iPSetDescriptors; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline void SetIPSetDescriptors(const Aws::Vector<IPSetDescriptor>& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors = value; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline void SetIPSetDescriptors(Aws::Vector<IPSetDescriptor>&& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors = std::move(value); }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline IPSet& WithIPSetDescriptors(const Aws::Vector<IPSetDescriptor>& value) { SetIPSetDescriptors(value); return *this;}

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline IPSet& WithIPSetDescriptors(Aws::Vector<IPSetDescriptor>&& value) { SetIPSetDescriptors(std::move(value)); return *this;}

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline IPSet& AddIPSetDescriptors(const IPSetDescriptor& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors.push_back(value); return *this; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution, this is the
     * value of one of the following fields in CloudFront access logs:</p> <ul> <li>
     * <p> <code>c-ip</code>, if the viewer did not use an HTTP proxy or a load
     * balancer to send the request</p> </li> <li> <p> <code>x-forwarded-for</code>, if
     * the viewer did use an HTTP proxy or a load balancer to send the request</p>
     * </li> </ul>
     */
    inline IPSet& AddIPSetDescriptors(IPSetDescriptor&& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<IPSetDescriptor> m_iPSetDescriptors;
    bool m_iPSetDescriptorsHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
