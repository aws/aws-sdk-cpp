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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/ReceiptFilterPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>A receipt IP address filter enables you to specify whether to accept or
   * reject mail originating from an IP address or range of IP addresses.</p> <p>For
   * information about setting up IP address filters, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptIpFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ReceiptIpFilter
  {
  public:
    ReceiptIpFilter();
    ReceiptIpFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptIpFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline const ReceiptFilterPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline void SetPolicy(const ReceiptFilterPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline void SetPolicy(ReceiptFilterPolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline ReceiptIpFilter& WithPolicy(const ReceiptFilterPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline ReceiptIpFilter& WithPolicy(ReceiptFilterPolicy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline ReceiptIpFilter& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline ReceiptIpFilter& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>A single IP address or a range of IP addresses that you want to block or
     * allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example
     * of a single email address is 10.0.0.1. An example of a range of IP addresses is
     * 10.0.0.1/24. For more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline ReceiptIpFilter& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    ReceiptFilterPolicy m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
