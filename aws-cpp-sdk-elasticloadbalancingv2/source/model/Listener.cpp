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

Listener::Listener() : 
    m_listenerArnHasBeenSet(false),
    m_loadBalancerArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_sslPolicyHasBeenSet(false),
    m_defaultActionsHasBeenSet(false)
{
}

Listener::Listener(const XmlNode& xmlNode) : 
    m_listenerArnHasBeenSet(false),
    m_loadBalancerArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_sslPolicyHasBeenSet(false),
    m_defaultActionsHasBeenSet(false)
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
      m_listenerArn = listenerArnNode.GetText();
      m_listenerArnHasBeenSet = true;
    }
    XmlNode loadBalancerArnNode = resultNode.FirstChild("LoadBalancerArn");
    if(!loadBalancerArnNode.IsNull())
    {
      m_loadBalancerArn = loadBalancerArnNode.GetText();
      m_loadBalancerArnHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolEnumMapper::GetProtocolEnumForName(StringUtils::Trim(protocolNode.GetText().c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode certificatesNode = resultNode.FirstChild("Certificates");
    if(!certificatesNode.IsNull())
    {
      XmlNode certificatesMember = certificatesNode.FirstChild("member");
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
      m_sslPolicy = sslPolicyNode.GetText();
      m_sslPolicyHasBeenSet = true;
    }
    XmlNode defaultActionsNode = resultNode.FirstChild("DefaultActions");
    if(!defaultActionsNode.IsNull())
    {
      XmlNode defaultActionsMember = defaultActionsNode.FirstChild("member");
      while(!defaultActionsMember.IsNull())
      {
        m_defaultActions.push_back(defaultActionsMember);
        defaultActionsMember = defaultActionsMember.NextNode("member");
      }

      m_defaultActionsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
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
      oStream << location << ".Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
  }
  if(m_certificatesHasBeenSet)
  {
      unsigned certificatesIdx = 1;
      for(auto& item : m_certificates)
      {
        Aws::StringStream certificatesSs;
        certificatesSs << location <<  ".Certificates.member." << certificatesIdx++;
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
        defaultActionsSs << location <<  ".DefaultActions.member." << defaultActionsIdx++;
        item.OutputToStream(oStream, defaultActionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
