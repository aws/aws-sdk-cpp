/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyXSSProtection.h>
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

ResponseHeadersPolicyXSSProtection::ResponseHeadersPolicyXSSProtection() : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_protection(false),
    m_protectionHasBeenSet(false),
    m_modeBlock(false),
    m_modeBlockHasBeenSet(false),
    m_reportUriHasBeenSet(false)
{
}

ResponseHeadersPolicyXSSProtection::ResponseHeadersPolicyXSSProtection(const XmlNode& xmlNode) : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_protection(false),
    m_protectionHasBeenSet(false),
    m_modeBlock(false),
    m_modeBlockHasBeenSet(false),
    m_reportUriHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyXSSProtection& ResponseHeadersPolicyXSSProtection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode overrideNode = resultNode.FirstChild("Override");
    if(!overrideNode.IsNull())
    {
      m_override = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(overrideNode.GetText()).c_str()).c_str());
      m_overrideHasBeenSet = true;
    }
    XmlNode protectionNode = resultNode.FirstChild("Protection");
    if(!protectionNode.IsNull())
    {
      m_protection = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protectionNode.GetText()).c_str()).c_str());
      m_protectionHasBeenSet = true;
    }
    XmlNode modeBlockNode = resultNode.FirstChild("ModeBlock");
    if(!modeBlockNode.IsNull())
    {
      m_modeBlock = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeBlockNode.GetText()).c_str()).c_str());
      m_modeBlockHasBeenSet = true;
    }
    XmlNode reportUriNode = resultNode.FirstChild("ReportUri");
    if(!reportUriNode.IsNull())
    {
      m_reportUri = Aws::Utils::Xml::DecodeEscapedXmlText(reportUriNode.GetText());
      m_reportUriHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyXSSProtection::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

  if(m_protectionHasBeenSet)
  {
   XmlNode protectionNode = parentNode.CreateChildElement("Protection");
   ss << std::boolalpha << m_protection;
   protectionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_modeBlockHasBeenSet)
  {
   XmlNode modeBlockNode = parentNode.CreateChildElement("ModeBlock");
   ss << std::boolalpha << m_modeBlock;
   modeBlockNode.SetText(ss.str());
   ss.str("");
  }

  if(m_reportUriHasBeenSet)
  {
   XmlNode reportUriNode = parentNode.CreateChildElement("ReportUri");
   reportUriNode.SetText(m_reportUri);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
