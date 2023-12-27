﻿/**
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
    AWS_SES_API ReceiptFilter();
    AWS_SES_API ReceiptFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline ReceiptFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline ReceiptFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP address filter. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline ReceiptFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline const ReceiptIpFilter& GetIpFilter() const{ return m_ipFilter; }

    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline bool IpFilterHasBeenSet() const { return m_ipFilterHasBeenSet; }

    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline void SetIpFilter(const ReceiptIpFilter& value) { m_ipFilterHasBeenSet = true; m_ipFilter = value; }

    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline void SetIpFilter(ReceiptIpFilter&& value) { m_ipFilterHasBeenSet = true; m_ipFilter = std::move(value); }

    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline ReceiptFilter& WithIpFilter(const ReceiptIpFilter& value) { SetIpFilter(value); return *this;}

    /**
     * <p>A structure that provides the IP addresses to block or allow, and whether to
     * block or allow incoming mail from them.</p>
     */
    inline ReceiptFilter& WithIpFilter(ReceiptIpFilter&& value) { SetIpFilter(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReceiptIpFilter m_ipFilter;
    bool m_ipFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
