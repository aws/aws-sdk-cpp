/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/LBCookieStickinessPolicy.h>
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

LBCookieStickinessPolicy::LBCookieStickinessPolicy() : 
    m_policyNameHasBeenSet(false),
    m_cookieExpirationPeriod(0),
    m_cookieExpirationPeriodHasBeenSet(false)
{
}

LBCookieStickinessPolicy::LBCookieStickinessPolicy(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_cookieExpirationPeriod(0),
    m_cookieExpirationPeriodHasBeenSet(false)
{
  *this = xmlNode;
}

LBCookieStickinessPolicy& LBCookieStickinessPolicy::operator =(const XmlNode& xmlNode)
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
    XmlNode cookieExpirationPeriodNode = resultNode.FirstChild("CookieExpirationPeriod");
    if(!cookieExpirationPeriodNode.IsNull())
    {
      m_cookieExpirationPeriod = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cookieExpirationPeriodNode.GetText()).c_str()).c_str());
      m_cookieExpirationPeriodHasBeenSet = true;
    }
  }

  return *this;
}

void LBCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_cookieExpirationPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".CookieExpirationPeriod=" << m_cookieExpirationPeriod << "&";
  }

}

void LBCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_cookieExpirationPeriodHasBeenSet)
  {
      oStream << location << ".CookieExpirationPeriod=" << m_cookieExpirationPeriod << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
