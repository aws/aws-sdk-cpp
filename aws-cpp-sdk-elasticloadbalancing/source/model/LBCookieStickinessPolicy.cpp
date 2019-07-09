/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_policyName = policyNameNode.GetText();
      m_policyNameHasBeenSet = true;
    }
    XmlNode cookieExpirationPeriodNode = resultNode.FirstChild("CookieExpirationPeriod");
    if(!cookieExpirationPeriodNode.IsNull())
    {
      m_cookieExpirationPeriod = StringUtils::ConvertToInt64(StringUtils::Trim(cookieExpirationPeriodNode.GetText().c_str()).c_str());
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
