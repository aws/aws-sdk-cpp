﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyCustomHeader.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ResponseHeadersPolicyCustomHeader::ResponseHeadersPolicyCustomHeader(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResponseHeadersPolicyCustomHeader& ResponseHeadersPolicyCustomHeader::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNode = resultNode.FirstChild("Header");
    if(!headerNode.IsNull())
    {
      m_header = Aws::Utils::Xml::DecodeEscapedXmlText(headerNode.GetText());
      m_headerHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
    XmlNode overrideNode = resultNode.FirstChild("Override");
    if(!overrideNode.IsNull())
    {
      m_override = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(overrideNode.GetText()).c_str()).c_str());
      m_overrideHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyCustomHeader::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerHasBeenSet)
  {
   XmlNode headerNode = parentNode.CreateChildElement("Header");
   headerNode.SetText(m_header);
  }

  if(m_valueHasBeenSet)
  {
   XmlNode valueNode = parentNode.CreateChildElement("Value");
   valueNode.SetText(m_value);
  }

  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
