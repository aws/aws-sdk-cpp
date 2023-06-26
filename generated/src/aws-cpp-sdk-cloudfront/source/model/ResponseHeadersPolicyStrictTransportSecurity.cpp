/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyStrictTransportSecurity.h>
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

ResponseHeadersPolicyStrictTransportSecurity::ResponseHeadersPolicyStrictTransportSecurity() : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_includeSubdomains(false),
    m_includeSubdomainsHasBeenSet(false),
    m_preload(false),
    m_preloadHasBeenSet(false),
    m_accessControlMaxAgeSec(0),
    m_accessControlMaxAgeSecHasBeenSet(false)
{
}

ResponseHeadersPolicyStrictTransportSecurity::ResponseHeadersPolicyStrictTransportSecurity(const XmlNode& xmlNode) : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_includeSubdomains(false),
    m_includeSubdomainsHasBeenSet(false),
    m_preload(false),
    m_preloadHasBeenSet(false),
    m_accessControlMaxAgeSec(0),
    m_accessControlMaxAgeSecHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyStrictTransportSecurity& ResponseHeadersPolicyStrictTransportSecurity::operator =(const XmlNode& xmlNode)
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
    XmlNode includeSubdomainsNode = resultNode.FirstChild("IncludeSubdomains");
    if(!includeSubdomainsNode.IsNull())
    {
      m_includeSubdomains = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeSubdomainsNode.GetText()).c_str()).c_str());
      m_includeSubdomainsHasBeenSet = true;
    }
    XmlNode preloadNode = resultNode.FirstChild("Preload");
    if(!preloadNode.IsNull())
    {
      m_preload = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(preloadNode.GetText()).c_str()).c_str());
      m_preloadHasBeenSet = true;
    }
    XmlNode accessControlMaxAgeSecNode = resultNode.FirstChild("AccessControlMaxAgeSec");
    if(!accessControlMaxAgeSecNode.IsNull())
    {
      m_accessControlMaxAgeSec = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accessControlMaxAgeSecNode.GetText()).c_str()).c_str());
      m_accessControlMaxAgeSecHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyStrictTransportSecurity::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

  if(m_includeSubdomainsHasBeenSet)
  {
   XmlNode includeSubdomainsNode = parentNode.CreateChildElement("IncludeSubdomains");
   ss << std::boolalpha << m_includeSubdomains;
   includeSubdomainsNode.SetText(ss.str());
   ss.str("");
  }

  if(m_preloadHasBeenSet)
  {
   XmlNode preloadNode = parentNode.CreateChildElement("Preload");
   ss << std::boolalpha << m_preload;
   preloadNode.SetText(ss.str());
   ss.str("");
  }

  if(m_accessControlMaxAgeSecHasBeenSet)
  {
   XmlNode accessControlMaxAgeSecNode = parentNode.CreateChildElement("AccessControlMaxAgeSec");
   ss << m_accessControlMaxAgeSec;
   accessControlMaxAgeSecNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
