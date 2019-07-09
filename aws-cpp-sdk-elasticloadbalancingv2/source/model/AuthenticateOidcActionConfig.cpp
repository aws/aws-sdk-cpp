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

#include <aws/elasticloadbalancingv2/model/AuthenticateOidcActionConfig.h>
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

AuthenticateOidcActionConfig::AuthenticateOidcActionConfig() : 
    m_issuerHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_tokenEndpointHasBeenSet(false),
    m_userInfoEndpointHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_sessionCookieNameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_authenticationRequestExtraParamsHasBeenSet(false),
    m_onUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum::NOT_SET),
    m_onUnauthenticatedRequestHasBeenSet(false),
    m_useExistingClientSecret(false),
    m_useExistingClientSecretHasBeenSet(false)
{
}

AuthenticateOidcActionConfig::AuthenticateOidcActionConfig(const XmlNode& xmlNode) : 
    m_issuerHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_tokenEndpointHasBeenSet(false),
    m_userInfoEndpointHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_sessionCookieNameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_authenticationRequestExtraParamsHasBeenSet(false),
    m_onUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum::NOT_SET),
    m_onUnauthenticatedRequestHasBeenSet(false),
    m_useExistingClientSecret(false),
    m_useExistingClientSecretHasBeenSet(false)
{
  *this = xmlNode;
}

AuthenticateOidcActionConfig& AuthenticateOidcActionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode issuerNode = resultNode.FirstChild("Issuer");
    if(!issuerNode.IsNull())
    {
      m_issuer = issuerNode.GetText();
      m_issuerHasBeenSet = true;
    }
    XmlNode authorizationEndpointNode = resultNode.FirstChild("AuthorizationEndpoint");
    if(!authorizationEndpointNode.IsNull())
    {
      m_authorizationEndpoint = authorizationEndpointNode.GetText();
      m_authorizationEndpointHasBeenSet = true;
    }
    XmlNode tokenEndpointNode = resultNode.FirstChild("TokenEndpoint");
    if(!tokenEndpointNode.IsNull())
    {
      m_tokenEndpoint = tokenEndpointNode.GetText();
      m_tokenEndpointHasBeenSet = true;
    }
    XmlNode userInfoEndpointNode = resultNode.FirstChild("UserInfoEndpoint");
    if(!userInfoEndpointNode.IsNull())
    {
      m_userInfoEndpoint = userInfoEndpointNode.GetText();
      m_userInfoEndpointHasBeenSet = true;
    }
    XmlNode clientIdNode = resultNode.FirstChild("ClientId");
    if(!clientIdNode.IsNull())
    {
      m_clientId = clientIdNode.GetText();
      m_clientIdHasBeenSet = true;
    }
    XmlNode clientSecretNode = resultNode.FirstChild("ClientSecret");
    if(!clientSecretNode.IsNull())
    {
      m_clientSecret = clientSecretNode.GetText();
      m_clientSecretHasBeenSet = true;
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
      m_onUnauthenticatedRequest = AuthenticateOidcActionConditionalBehaviorEnumMapper::GetAuthenticateOidcActionConditionalBehaviorEnumForName(StringUtils::Trim(onUnauthenticatedRequestNode.GetText().c_str()).c_str());
      m_onUnauthenticatedRequestHasBeenSet = true;
    }
    XmlNode useExistingClientSecretNode = resultNode.FirstChild("UseExistingClientSecret");
    if(!useExistingClientSecretNode.IsNull())
    {
      m_useExistingClientSecret = StringUtils::ConvertToBool(StringUtils::Trim(useExistingClientSecretNode.GetText().c_str()).c_str());
      m_useExistingClientSecretHasBeenSet = true;
    }
  }

  return *this;
}

void AuthenticateOidcActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_issuerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }

  if(m_authorizationEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthorizationEndpoint=" << StringUtils::URLEncode(m_authorizationEndpoint.c_str()) << "&";
  }

  if(m_tokenEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".TokenEndpoint=" << StringUtils::URLEncode(m_tokenEndpoint.c_str()) << "&";
  }

  if(m_userInfoEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserInfoEndpoint=" << StringUtils::URLEncode(m_userInfoEndpoint.c_str()) << "&";
  }

  if(m_clientIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientId=" << StringUtils::URLEncode(m_clientId.c_str()) << "&";
  }

  if(m_clientSecretHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientSecret=" << StringUtils::URLEncode(m_clientSecret.c_str()) << "&";
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
      oStream << location << index << locationValue << ".OnUnauthenticatedRequest=" << AuthenticateOidcActionConditionalBehaviorEnumMapper::GetNameForAuthenticateOidcActionConditionalBehaviorEnum(m_onUnauthenticatedRequest) << "&";
  }

  if(m_useExistingClientSecretHasBeenSet)
  {
      oStream << location << index << locationValue << ".UseExistingClientSecret=" << std::boolalpha << m_useExistingClientSecret << "&";
  }

}

void AuthenticateOidcActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_issuerHasBeenSet)
  {
      oStream << location << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }
  if(m_authorizationEndpointHasBeenSet)
  {
      oStream << location << ".AuthorizationEndpoint=" << StringUtils::URLEncode(m_authorizationEndpoint.c_str()) << "&";
  }
  if(m_tokenEndpointHasBeenSet)
  {
      oStream << location << ".TokenEndpoint=" << StringUtils::URLEncode(m_tokenEndpoint.c_str()) << "&";
  }
  if(m_userInfoEndpointHasBeenSet)
  {
      oStream << location << ".UserInfoEndpoint=" << StringUtils::URLEncode(m_userInfoEndpoint.c_str()) << "&";
  }
  if(m_clientIdHasBeenSet)
  {
      oStream << location << ".ClientId=" << StringUtils::URLEncode(m_clientId.c_str()) << "&";
  }
  if(m_clientSecretHasBeenSet)
  {
      oStream << location << ".ClientSecret=" << StringUtils::URLEncode(m_clientSecret.c_str()) << "&";
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
      oStream << location << ".OnUnauthenticatedRequest=" << AuthenticateOidcActionConditionalBehaviorEnumMapper::GetNameForAuthenticateOidcActionConditionalBehaviorEnum(m_onUnauthenticatedRequest) << "&";
  }
  if(m_useExistingClientSecretHasBeenSet)
  {
      oStream << location << ".UseExistingClientSecret=" << std::boolalpha << m_useExistingClientSecret << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
