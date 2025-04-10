﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ReceiptFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

ReceiptFilter::ReceiptFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReceiptFilter& ReceiptFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode ipFilterNode = resultNode.FirstChild("IpFilter");
    if(!ipFilterNode.IsNull())
    {
      m_ipFilter = ipFilterNode;
      m_ipFilterHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_ipFilterHasBeenSet)
  {
      Aws::StringStream ipFilterLocationAndMemberSs;
      ipFilterLocationAndMemberSs << location << index << locationValue << ".IpFilter";
      m_ipFilter.OutputToStream(oStream, ipFilterLocationAndMemberSs.str().c_str());
  }

}

void ReceiptFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_ipFilterHasBeenSet)
  {
      Aws::String ipFilterLocationAndMember(location);
      ipFilterLocationAndMember += ".IpFilter";
      m_ipFilter.OutputToStream(oStream, ipFilterLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
