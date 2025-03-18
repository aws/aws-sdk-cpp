/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ReceiptIpFilter.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptFilter">AWS
   * API Reference</a></p>
   */
  class ReceiptFilter
  {
  public:
    AWS_SES_API ReceiptFilter() = default;
    AWS_SES_API ReceiptFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReceiptFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline const ReceiptIpFilter& GetIpFilter() const { return m_ipFilter; }
    inline bool IpFilterHasBeenSet() const { return m_ipFilterHasBeenSet; }
    template<typename IpFilterT = ReceiptIpFilter>
    void SetIpFilter(IpFilterT&& value) { m_ipFilterHasBeenSet = true; m_ipFilter = std::forward<IpFilterT>(value); }
    template<typename IpFilterT = ReceiptIpFilter>
    ReceiptFilter& WithIpFilter(IpFilterT&& value) { SetIpFilter(std::forward<IpFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReceiptIpFilter m_ipFilter;
    bool m_ipFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
