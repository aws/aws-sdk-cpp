/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectionTrackingSpecification.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ConnectionTrackingSpecification::ConnectionTrackingSpecification() : 
    m_tcpEstablishedTimeout(0),
    m_tcpEstablishedTimeoutHasBeenSet(false),
    m_udpTimeout(0),
    m_udpTimeoutHasBeenSet(false),
    m_udpStreamTimeout(0),
    m_udpStreamTimeoutHasBeenSet(false)
{
}

ConnectionTrackingSpecification::ConnectionTrackingSpecification(const XmlNode& xmlNode) : 
    m_tcpEstablishedTimeout(0),
    m_tcpEstablishedTimeoutHasBeenSet(false),
    m_udpTimeout(0),
    m_udpTimeoutHasBeenSet(false),
    m_udpStreamTimeout(0),
    m_udpStreamTimeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionTrackingSpecification& ConnectionTrackingSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tcpEstablishedTimeoutNode = resultNode.FirstChild("tcpEstablishedTimeout");
    if(!tcpEstablishedTimeoutNode.IsNull())
    {
      m_tcpEstablishedTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tcpEstablishedTimeoutNode.GetText()).c_str()).c_str());
      m_tcpEstablishedTimeoutHasBeenSet = true;
    }
    XmlNode udpTimeoutNode = resultNode.FirstChild("udpTimeout");
    if(!udpTimeoutNode.IsNull())
    {
      m_udpTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(udpTimeoutNode.GetText()).c_str()).c_str());
      m_udpTimeoutHasBeenSet = true;
    }
    XmlNode udpStreamTimeoutNode = resultNode.FirstChild("udpStreamTimeout");
    if(!udpStreamTimeoutNode.IsNull())
    {
      m_udpStreamTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(udpStreamTimeoutNode.GetText()).c_str()).c_str());
      m_udpStreamTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionTrackingSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tcpEstablishedTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".TcpEstablishedTimeout=" << m_tcpEstablishedTimeout << "&";
  }

  if(m_udpTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".UdpTimeout=" << m_udpTimeout << "&";
  }

  if(m_udpStreamTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".UdpStreamTimeout=" << m_udpStreamTimeout << "&";
  }

}

void ConnectionTrackingSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tcpEstablishedTimeoutHasBeenSet)
  {
      oStream << location << ".TcpEstablishedTimeout=" << m_tcpEstablishedTimeout << "&";
  }
  if(m_udpTimeoutHasBeenSet)
  {
      oStream << location << ".UdpTimeout=" << m_udpTimeout << "&";
  }
  if(m_udpStreamTimeoutHasBeenSet)
  {
      oStream << location << ".UdpStreamTimeout=" << m_udpStreamTimeout << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
