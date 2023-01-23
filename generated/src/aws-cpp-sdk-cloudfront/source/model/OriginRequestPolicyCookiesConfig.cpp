/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyCookiesConfig.h>
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

OriginRequestPolicyCookiesConfig::OriginRequestPolicyCookiesConfig() : 
    m_cookieBehavior(OriginRequestPolicyCookieBehavior::NOT_SET),
    m_cookieBehaviorHasBeenSet(false),
    m_cookiesHasBeenSet(false)
{
}

OriginRequestPolicyCookiesConfig::OriginRequestPolicyCookiesConfig(const XmlNode& xmlNode) : 
    m_cookieBehavior(OriginRequestPolicyCookieBehavior::NOT_SET),
    m_cookieBehaviorHasBeenSet(false),
    m_cookiesHasBeenSet(false)
{
  *this = xmlNode;
}

OriginRequestPolicyCookiesConfig& OriginRequestPolicyCookiesConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cookieBehaviorNode = resultNode.FirstChild("CookieBehavior");
    if(!cookieBehaviorNode.IsNull())
    {
      m_cookieBehavior = OriginRequestPolicyCookieBehaviorMapper::GetOriginRequestPolicyCookieBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cookieBehaviorNode.GetText()).c_str()).c_str());
      m_cookieBehaviorHasBeenSet = true;
    }
    XmlNode cookiesNode = resultNode.FirstChild("Cookies");
    if(!cookiesNode.IsNull())
    {
      m_cookies = cookiesNode;
      m_cookiesHasBeenSet = true;
    }
  }

  return *this;
}

void OriginRequestPolicyCookiesConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_cookieBehaviorHasBeenSet)
  {
   XmlNode cookieBehaviorNode = parentNode.CreateChildElement("CookieBehavior");
   cookieBehaviorNode.SetText(OriginRequestPolicyCookieBehaviorMapper::GetNameForOriginRequestPolicyCookieBehavior(m_cookieBehavior));
  }

  if(m_cookiesHasBeenSet)
  {
   XmlNode cookiesNode = parentNode.CreateChildElement("Cookies");
   m_cookies.AddToNode(cookiesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
