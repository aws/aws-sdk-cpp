/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/Listener.h>
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

Listener::Listener() : 
    m_protocolHasBeenSet(false),
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_instanceProtocolHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_sSLCertificateIdHasBeenSet(false)
{
}

Listener::Listener(const XmlNode& xmlNode) : 
    m_protocolHasBeenSet(false),
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_instanceProtocolHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_sSLCertificateIdHasBeenSet(false)
{
  *this = xmlNode;
}

Listener& Listener::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode loadBalancerPortNode = resultNode.FirstChild("LoadBalancerPort");
    if(!loadBalancerPortNode.IsNull())
    {
      m_loadBalancerPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerPortNode.GetText()).c_str()).c_str());
      m_loadBalancerPortHasBeenSet = true;
    }
    XmlNode instanceProtocolNode = resultNode.FirstChild("InstanceProtocol");
    if(!instanceProtocolNode.IsNull())
    {
      m_instanceProtocol = Aws::Utils::Xml::DecodeEscapedXmlText(instanceProtocolNode.GetText());
      m_instanceProtocolHasBeenSet = true;
    }
    XmlNode instancePortNode = resultNode.FirstChild("InstancePort");
    if(!instancePortNode.IsNull())
    {
      m_instancePort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePortNode.GetText()).c_str()).c_str());
      m_instancePortHasBeenSet = true;
    }
    XmlNode sSLCertificateIdNode = resultNode.FirstChild("SSLCertificateId");
    if(!sSLCertificateIdNode.IsNull())
    {
      m_sSLCertificateId = Aws::Utils::Xml::DecodeEscapedXmlText(sSLCertificateIdNode.GetText());
      m_sSLCertificateIdHasBeenSet = true;
    }
  }

  return *this;
}

void Listener::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_loadBalancerPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerPort=" << m_loadBalancerPort << "&";
  }

  if(m_instanceProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceProtocol=" << StringUtils::URLEncode(m_instanceProtocol.c_str()) << "&";
  }

  if(m_instancePortHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePort=" << m_instancePort << "&";
  }

  if(m_sSLCertificateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SSLCertificateId=" << StringUtils::URLEncode(m_sSLCertificateId.c_str()) << "&";
  }

}

void Listener::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_loadBalancerPortHasBeenSet)
  {
      oStream << location << ".LoadBalancerPort=" << m_loadBalancerPort << "&";
  }
  if(m_instanceProtocolHasBeenSet)
  {
      oStream << location << ".InstanceProtocol=" << StringUtils::URLEncode(m_instanceProtocol.c_str()) << "&";
  }
  if(m_instancePortHasBeenSet)
  {
      oStream << location << ".InstancePort=" << m_instancePort << "&";
  }
  if(m_sSLCertificateIdHasBeenSet)
  {
      oStream << location << ".SSLCertificateId=" << StringUtils::URLEncode(m_sSLCertificateId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
