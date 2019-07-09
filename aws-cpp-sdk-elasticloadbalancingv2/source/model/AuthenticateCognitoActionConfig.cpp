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

#include <aws/elasticloadbalancingv2/model/AuthenticateCognitoActionConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

AuthenticateCognitoActionConfig::AuthenticateCognitoActionConfig() : 
    m_userPoolArnHasBeenSet(false),
    m_userPoolClientIdHasBeenSet(false),
    m_userPoolDomainHasBeenSet(false),
    m_sessionCookieNameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_authenticationRequestExtraParamsHasBeenSet(false),
    m_onUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum::NOT_SET),
    m_onUnauthenticatedRequestHasBeenSet(false)
{
}

AuthenticateCognitoActionConfig::AuthenticateCognitoActionConfig(const XmlNode& xmlNode) : 
    m_userPoolArnHasBeenSet(false),
    m_userPoolClientIdHasBeenSet(false),
    m_userPoolDomainHasBeenSet(false),
    m_sessionCookieNameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_authenticationRequestExtraParamsHasBeenSet(false),
    m_onUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum::NOT_SET),
    m_onUnauthenticatedRequestHasBeenSet(false)
{
  *this = xmlNode;
}

AuthenticateCognitoActionConfig& AuthenticateCognitoActionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userPoolArnNode = resultNode.FirstChild("UserPoolArn");
    if(!userPoolArnNode.IsNull())
    {
      m_userPoolArn = userPoolArnNode.GetText();
      m_userPoolArnHasBeenSet = true;
    }
    XmlNode userPoolClientIdNode = resultNode.FirstChild("UserPoolClientId");
    if(!userPoolClientIdNode.IsNull())
    {
      m_userPoolClientId = userPoolClientIdNode.GetText();
      m_userPoolClientIdHasBeenSet = true;
    }
    XmlNode userPoolDomainNode = resultNode.FirstChild("UserPoolDomain");
    if(!userPoolDomainNode.IsNull())
    {
      m_userPoolDomain = userPoolDomainNode.GetText();
      m_userPoolDomainHasBeenSet = true;
    }
    XmlNode sessionCookieNameNode = resultNode.FirstChild("SessionCookieName");
    if(!sessionCookieNameNode.IsNull())
    {
      m_sessionCookieName = sessionCookieNameNode.GetText();
      m_sessionCookieNameHasBeenSet = true;
    }
    XmlNode scopeNode = resultNode.FirstChild("Scope");
    if(!scopeNode.IsNull())
    {
      m_scope = scopeNode.GetText();
      m_scopeHasBeenSet = true;
    }
    XmlNode sessionTimeoutNode = resultNode.FirstChild("SessionTimeout");
    if(!sessionTimeoutNode.IsNull())
    {
      m_sessionTimeout = StringUtils::ConvertToInt64(StringUtils::Trim(sessionTimeoutNode.GetText().c_str()).c_str());
      m_sessionTimeoutHasBeenSet = true;
    }
    XmlNode authenticationRequestExtraParamsNode = resultNode.FirstChild("AuthenticationRequestExtraParams");

    if(!authenticationRequestExtraParamsNode.IsNull())
    {
      XmlNode authenticationRequestExtraParamsEntry = authenticationRequestExtraParamsNode.FirstChild("entry");
      while(!authenticationRequestExtraParamsEntry.IsNull())
      {
        XmlNode keyNode = authenticationRequestExtraParamsEntry.FirstChild("key");
        XmlNode valueNode = authenticationRequestExtraParamsEntry.FirstChild("value");
        m_authenticationRequestExtraParams[keyNode.GetText()] =
            valueNode.GetText();
        authenticationRequestExtraParamsEntry = authenticationRequestExtraParamsEntry.NextNode("entry");
      }

      m_authenticationRequestExtraParamsHasBeenSet = true;
    }
    XmlNode onUnauthenticatedRequestNode = resultNode.FirstChild("OnUnauthenticatedRequest");
    if(!onUnauthenticatedRequestNode.IsNull())
    {
      m_onUnauthenticatedRequest = AuthenticateCognitoActionConditionalBehaviorEnumMapper::GetAuthenticateCognitoActionConditionalBehaviorEnumForName(StringUtils::Trim(onUnauthenticatedRequestNode.GetText().c_str()).c_str());
      m_onUnauthenticatedRequestHasBeenSet = true;
    }
  }

  return *this;
}

void AuthenticateCognitoActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userPoolArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserPoolArn=" << StringUtils::URLEncode(m_userPoolArn.c_str()) << "&";
  }

  if(m_userPoolClientIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserPoolClientId=" << StringUtils::URLEncode(m_userPoolClientId.c_str()) << "&";
  }

  if(m_userPoolDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserPoolDomain=" << StringUtils::URLEncode(m_userPoolDomain.c_str()) << "&";
  }

  if(m_sessionCookieNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SessionCookieName=" << StringUtils::URLEncode(m_sessionCookieName.c_str()) << "&";
  }

  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }

  if(m_sessionTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".SessionTimeout=" << m_sessionTimeout << "&";
  }

  if(m_authenticationRequestExtraParamsHasBeenSet)
  {
      unsigned authenticationRequestExtraParamsIdx = 1;
      for(auto& item : m_authenticationRequestExtraParams)
      {
        oStream << location << index << locationValue << ".AuthenticationRequestExtraParams.entry." << authenticationRequestExtraParamsIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".AuthenticationRequestExtraParams.entry." << authenticationRequestExtraParamsIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        authenticationRequestExtraParamsIdx++;
      }
  }

  if(m_onUnauthenticatedRequestHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnUnauthenticatedRequest=" << AuthenticateCognitoActionConditionalBehaviorEnumMapper::GetNameForAuthenticateCognitoActionConditionalBehaviorEnum(m_onUnauthenticatedRequest) << "&";
  }

}

void AuthenticateCognitoActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userPoolArnHasBeenSet)
  {
      oStream << location << ".UserPoolArn=" << StringUtils::URLEncode(m_userPoolArn.c_str()) << "&";
  }
  if(m_userPoolClientIdHasBeenSet)
  {
      oStream << location << ".UserPoolClientId=" << StringUtils::URLEncode(m_userPoolClientId.c_str()) << "&";
  }
  if(m_userPoolDomainHasBeenSet)
  {
      oStream << location << ".UserPoolDomain=" << StringUtils::URLEncode(m_userPoolDomain.c_str()) << "&";
  }
  if(m_sessionCookieNameHasBeenSet)
  {
      oStream << location << ".SessionCookieName=" << StringUtils::URLEncode(m_sessionCookieName.c_str()) << "&";
  }
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }
  if(m_sessionTimeoutHasBeenSet)
  {
      oStream << location << ".SessionTimeout=" << m_sessionTimeout << "&";
  }
  if(m_authenticationRequestExtraParamsHasBeenSet)
  {
      unsigned authenticationRequestExtraParamsIdx = 1;
      for(auto& item : m_authenticationRequestExtraParams)
      {
        oStream << location << ".AuthenticationRequestExtraParams.entry."  << authenticationRequestExtraParamsIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location <<  ".AuthenticationRequestExtraParams.entry." << authenticationRequestExtraParamsIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        authenticationRequestExtraParamsIdx++;
      }

  }
  if(m_onUnauthenticatedRequestHasBeenSet)
  {
      oStream << location << ".OnUnauthenticatedRequest=" << AuthenticateCognitoActionConditionalBehaviorEnumMapper::GetNameForAuthenticateCognitoActionConditionalBehaviorEnum(m_onUnauthenticatedRequest) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
