/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkCardInfo.h>
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

NetworkCardInfo::NetworkCardInfo() : 
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_networkPerformanceHasBeenSet(false),
    m_maximumNetworkInterfaces(0),
    m_maximumNetworkInterfacesHasBeenSet(false)
{
}

NetworkCardInfo::NetworkCardInfo(const XmlNode& xmlNode) : 
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_networkPerformanceHasBeenSet(false),
    m_maximumNetworkInterfaces(0),
    m_maximumNetworkInterfacesHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkCardInfo& NetworkCardInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkCardIndexNode = resultNode.FirstChild("networkCardIndex");
    if(!networkCardIndexNode.IsNull())
    {
      m_networkCardIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkCardIndexNode.GetText()).c_str()).c_str());
      m_networkCardIndexHasBeenSet = true;
    }
    XmlNode networkPerformanceNode = resultNode.FirstChild("networkPerformance");
    if(!networkPerformanceNode.IsNull())
    {
      m_networkPerformance = Aws::Utils::Xml::DecodeEscapedXmlText(networkPerformanceNode.GetText());
      m_networkPerformanceHasBeenSet = true;
    }
    XmlNode maximumNetworkInterfacesNode = resultNode.FirstChild("maximumNetworkInterfaces");
    if(!maximumNetworkInterfacesNode.IsNull())
    {
      m_maximumNetworkInterfaces = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNetworkInterfacesNode.GetText()).c_str()).c_str());
      m_maximumNetworkInterfacesHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkCardInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }

  if(m_networkPerformanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkPerformance=" << StringUtils::URLEncode(m_networkPerformance.c_str()) << "&";
  }

  if(m_maximumNetworkInterfacesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumNetworkInterfaces=" << m_maximumNetworkInterfaces << "&";
  }

}

void NetworkCardInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }
  if(m_networkPerformanceHasBeenSet)
  {
      oStream << location << ".NetworkPerformance=" << StringUtils::URLEncode(m_networkPerformance.c_str()) << "&";
  }
  if(m_maximumNetworkInterfacesHasBeenSet)
  {
      oStream << location << ".MaximumNetworkInterfaces=" << m_maximumNetworkInterfaces << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
