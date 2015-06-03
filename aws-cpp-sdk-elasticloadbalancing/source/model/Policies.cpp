/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancing/model/Policies.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Policies::Policies() : 
    m_appCookieStickinessPoliciesHasBeenSet(false),
    m_lBCookieStickinessPoliciesHasBeenSet(false),
    m_otherPoliciesHasBeenSet(false)
{
}

Policies::Policies(const XmlNode& xmlNode) : 
    m_appCookieStickinessPoliciesHasBeenSet(false),
    m_lBCookieStickinessPoliciesHasBeenSet(false),
    m_otherPoliciesHasBeenSet(false)
{
  *this = xmlNode;
}

Policies& Policies::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode appCookieStickinessPoliciesNode = resultNode.FirstChild("AppCookieStickinessPolicies");
    if(!appCookieStickinessPoliciesNode.IsNull())
    {
      while(!appCookieStickinessPoliciesNode.IsNull())
      {
        m_appCookieStickinessPolicies.push_back(appCookieStickinessPoliciesNode);
        appCookieStickinessPoliciesNode = appCookieStickinessPoliciesNode.NextNode("AppCookieStickinessPolicies");
      }

      m_appCookieStickinessPoliciesHasBeenSet = true;
    }
    XmlNode lBCookieStickinessPoliciesNode = resultNode.FirstChild("LBCookieStickinessPolicies");
    if(!lBCookieStickinessPoliciesNode.IsNull())
    {
      while(!lBCookieStickinessPoliciesNode.IsNull())
      {
        m_lBCookieStickinessPolicies.push_back(lBCookieStickinessPoliciesNode);
        lBCookieStickinessPoliciesNode = lBCookieStickinessPoliciesNode.NextNode("LBCookieStickinessPolicies");
      }

      m_lBCookieStickinessPoliciesHasBeenSet = true;
    }
    XmlNode otherPoliciesNode = resultNode.FirstChild("OtherPolicies");
    if(!otherPoliciesNode.IsNull())
    {
      while(!otherPoliciesNode.IsNull())
      {
        m_otherPolicies.push_back(StringUtils::Trim(otherPoliciesNode.GetText().c_str()));
        otherPoliciesNode = otherPoliciesNode.NextNode("OtherPolicies");
      }

      m_otherPoliciesHasBeenSet = true;
    }
  }

  return *this;
}

void Policies::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_appCookieStickinessPoliciesHasBeenSet)
  {
      for(auto& item : m_appCookieStickinessPolicies)
      {
        Aws::StringStream appCookieStickinessPoliciesSs;
        appCookieStickinessPoliciesSs << location << index << locationValue << ".AppCookieStickinessPolicies";
        item.OutputToStream(oStream, appCookieStickinessPoliciesSs.str().c_str());
      }
  }
  if(m_lBCookieStickinessPoliciesHasBeenSet)
  {
      for(auto& item : m_lBCookieStickinessPolicies)
      {
        Aws::StringStream lBCookieStickinessPoliciesSs;
        lBCookieStickinessPoliciesSs << location << index << locationValue << ".LBCookieStickinessPolicies";
        item.OutputToStream(oStream, lBCookieStickinessPoliciesSs.str().c_str());
      }
  }
  if(m_otherPoliciesHasBeenSet)
  {
      for(auto& item : m_otherPolicies)
      {
        oStream << location << index << locationValue << ".OtherPolicies=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

void Policies::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_appCookieStickinessPoliciesHasBeenSet)
  {
      for(auto& item : m_appCookieStickinessPolicies)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".AppCookieStickinessPolicies";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_lBCookieStickinessPoliciesHasBeenSet)
  {
      for(auto& item : m_lBCookieStickinessPolicies)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".LBCookieStickinessPolicies";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_otherPoliciesHasBeenSet)
  {
      for(auto& item : m_otherPolicies)
      {
        oStream << location << ".OtherPolicies=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}
