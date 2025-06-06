﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/Listener.h>
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

Listener::Listener(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Listener& Listener::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode listenerArnNode = resultNode.FirstChild("ListenerArn");
    if(!listenerArnNode.IsNull())
    {
      m_listenerArn = Aws::Utils::Xml::DecodeEscapedXmlText(listenerArnNode.GetText());
      m_listenerArnHasBeenSet = true;
    }
    XmlNode loadBalancerArnNode = resultNode.FirstChild("LoadBalancerArn");
    if(!loadBalancerArnNode.IsNull())
    {
      m_loadBalancerArn = Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerArnNode.GetText());
      m_loadBalancerArnHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolEnumMapper::GetProtocolEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()));
      m_protocolHasBeenSet = true;
    }
    XmlNode certificatesNode = resultNode.FirstChild("Certificates");
    if(!certificatesNode.IsNull())
    {
      XmlNode certificatesMember = certificatesNode.FirstChild("member");
      m_certificatesHasBeenSet = !certificatesMember.IsNull();
      while(!certificatesMember.IsNull())
      {
        m_certificates.push_back(certificatesMember);
        certificatesMember = certificatesMember.NextNode("member");
      }

      m_certificatesHasBeenSet = true;
    }
    XmlNode sslPolicyNode = resultNode.FirstChild("SslPolicy");
    if(!sslPolicyNode.IsNull())
    {
      m_sslPolicy = Aws::Utils::Xml::DecodeEscapedXmlText(sslPolicyNode.GetText());
      m_sslPolicyHasBeenSet = true;
    }
    XmlNode defaultActionsNode = resultNode.FirstChild("DefaultActions");
    if(!defaultActionsNode.IsNull())
    {
      XmlNode defaultActionsMember = defaultActionsNode.FirstChild("member");
      m_defaultActionsHasBeenSet = !defaultActionsMember.IsNull();
      while(!defaultActionsMember.IsNull())
      {
        m_defaultActions.push_back(defaultActionsMember);
        defaultActionsMember = defaultActionsMember.NextNode("member");
      }

      m_defaultActionsHasBeenSet = true;
    }
    XmlNode alpnPolicyNode = resultNode.FirstChild("AlpnPolicy");
    if(!alpnPolicyNode.IsNull())
    {
      XmlNode alpnPolicyMember = alpnPolicyNode.FirstChild("member");
      m_alpnPolicyHasBeenSet = !alpnPolicyMember.IsNull();
      while(!alpnPolicyMember.IsNull())
      {
        m_alpnPolicy.push_back(alpnPolicyMember.GetText());
        alpnPolicyMember = alpnPolicyMember.NextNode("member");
      }

      m_alpnPolicyHasBeenSet = true;
    }
    XmlNode mutualAuthenticationNode = resultNode.FirstChild("MutualAuthentication");
    if(!mutualAuthenticationNode.IsNull())
    {
      m_mutualAuthentication = mutualAuthenticationNode;
      m_mutualAuthenticationHasBeenSet = true;
    }
  }

  return *this;
}

void Listener::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_listenerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol)) << "&";
  }

  if(m_certificatesHasBeenSet)
  {
      unsigned certificatesIdx = 1;
      for(auto& item : m_certificates)
      {
        Aws::StringStream certificatesSs;
        certificatesSs << location << index << locationValue << ".Certificates.member." << certificatesIdx++;
        item.OutputToStream(oStream, certificatesSs.str().c_str());
      }
  }

  if(m_sslPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".SslPolicy=" << StringUtils::URLEncode(m_sslPolicy.c_str()) << "&";
  }

  if(m_defaultActionsHasBeenSet)
  {
      unsigned defaultActionsIdx = 1;
      for(auto& item : m_defaultActions)
      {
        Aws::StringStream defaultActionsSs;
        defaultActionsSs << location << index << locationValue << ".DefaultActions.member." << defaultActionsIdx++;
        item.OutputToStream(oStream, defaultActionsSs.str().c_str());
      }
  }

  if(m_alpnPolicyHasBeenSet)
  {
      unsigned alpnPolicyIdx = 1;
      for(auto& item : m_alpnPolicy)
      {
        oStream << location << index << locationValue << ".AlpnPolicy.member." << alpnPolicyIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_mutualAuthenticationHasBeenSet)
  {
      Aws::StringStream mutualAuthenticationLocationAndMemberSs;
      mutualAuthenticationLocationAndMemberSs << location << index << locationValue << ".MutualAuthentication";
      m_mutualAuthentication.OutputToStream(oStream, mutualAuthenticationLocationAndMemberSs.str().c_str());
  }

}

void Listener::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_listenerArnHasBeenSet)
  {
      oStream << location << ".ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }
  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol)) << "&";
  }
  if(m_certificatesHasBeenSet)
  {
      unsigned certificatesIdx = 1;
      for(auto& item : m_certificates)
      {
        Aws::StringStream certificatesSs;
        certificatesSs << location << ".Certificates.member." << certificatesIdx++;
        item.OutputToStream(oStream, certificatesSs.str().c_str());
      }
  }
  if(m_sslPolicyHasBeenSet)
  {
      oStream << location << ".SslPolicy=" << StringUtils::URLEncode(m_sslPolicy.c_str()) << "&";
  }
  if(m_defaultActionsHasBeenSet)
  {
      unsigned defaultActionsIdx = 1;
      for(auto& item : m_defaultActions)
      {
        Aws::StringStream defaultActionsSs;
        defaultActionsSs << location << ".DefaultActions.member." << defaultActionsIdx++;
        item.OutputToStream(oStream, defaultActionsSs.str().c_str());
      }
  }
  if(m_alpnPolicyHasBeenSet)
  {
      unsigned alpnPolicyIdx = 1;
      for(auto& item : m_alpnPolicy)
      {
        oStream << location << ".AlpnPolicy.member." << alpnPolicyIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_mutualAuthenticationHasBeenSet)
  {
      Aws::String mutualAuthenticationLocationAndMember(location);
      mutualAuthenticationLocationAndMember += ".MutualAuthentication";
      m_mutualAuthentication.OutputToStream(oStream, mutualAuthenticationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
