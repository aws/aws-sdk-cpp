/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-ip-filtering-console-walkthrough.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptIpFilter">AWS
   * API Reference</a></p>
   */
  class ReceiptIpFilter
  {
  public:
    AWS_SES_API ReceiptIpFilter() = default;
    AWS_SES_API ReceiptIpFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptIpFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether to block or allow incoming mail from the specified IP
     * addresses.</p>
     */
    inline ReceiptFilterPolicy GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(ReceiptFilterPolicy value) { m_policyHasBeenSet = true; m_policy = value; }
    inline ReceiptIpFilter& WithPolicy(ReceiptFilterPolicy value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single IP address or a range of IP addresses to block or allow, specified
     * in Classless Inter-Domain Routing (CIDR) notation. An example of a single email
     * address is 10.0.0.1. An example of a range of IP addresses is 10.0.0.1/24. For
     * more information about CIDR notation, see <a
     * href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    ReceiptIpFilter& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}
  private:

    ReceiptFilterPolicy m_policy{ReceiptFilterPolicy::NOT_SET};
    bool m_policyHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
