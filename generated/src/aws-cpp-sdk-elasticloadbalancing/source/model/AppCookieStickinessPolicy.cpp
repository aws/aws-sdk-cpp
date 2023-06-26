/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/AppCookieStickinessPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

AppCookieStickinessPolicy::AppCookieStickinessPolicy() : 
    m_policyNameHasBeenSet(false),
    m_cookieNameHasBeenSet(false)
{
}

AppCookieStickinessPolicy::AppCookieStickinessPolicy(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_cookieNameHasBeenSet(false)
{
  *this = xmlNode;
}

AppCookieStickinessPolicy& AppCookieStickinessPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = Aws::Utils::Xml::DecodeEscapedXmlText(policyNameNode.GetText());
      m_policyNameHasBeenSet = true;
    }
    XmlNode cookieNameNode = resultNode.FirstChild("CookieName");
    if(!cookieNameNode.IsNull())
    {
      m_cookieName = Aws::Utils::Xml::DecodeEscapedXmlText(cookieNameNode.GetText());
      m_cookieNameHasBeenSet = true;
    }
  }

  return *this;
}

void AppCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_cookieNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CookieName=" << StringUtils::URLEncode(m_cookieName.c_str()) << "&";
  }

}

void AppCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_cookieNameHasBeenSet)
  {
      oStream << location << ".CookieName=" << StringUtils::URLEncode(m_cookieName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
