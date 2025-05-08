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

NetworkCardInfo::NetworkCardInfo(const XmlNode& xmlNode)
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
    XmlNode baselineBandwidthInGbpsNode = resultNode.FirstChild("baselineBandwidthInGbps");
    if(!baselineBandwidthInGbpsNode.IsNull())
    {
      m_baselineBandwidthInGbps = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(baselineBandwidthInGbpsNode.GetText()).c_str()).c_str());
      m_baselineBandwidthInGbpsHasBeenSet = true;
    }
    XmlNode peakBandwidthInGbpsNode = resultNode.FirstChild("peakBandwidthInGbps");
    if(!peakBandwidthInGbpsNode.IsNull())
    {
      m_peakBandwidthInGbps = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peakBandwidthInGbpsNode.GetText()).c_str()).c_str());
      m_peakBandwidthInGbpsHasBeenSet = true;
    }
    XmlNode defaultEnaQueueCountPerInterfaceNode = resultNode.FirstChild("defaultEnaQueueCountPerInterface");
    if(!defaultEnaQueueCountPerInterfaceNode.IsNull())
    {
      m_defaultEnaQueueCountPerInterface = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultEnaQueueCountPerInterfaceNode.GetText()).c_str()).c_str());
      m_defaultEnaQueueCountPerInterfaceHasBeenSet = true;
    }
    XmlNode maximumEnaQueueCountNode = resultNode.FirstChild("maximumEnaQueueCount");
    if(!maximumEnaQueueCountNode.IsNull())
    {
      m_maximumEnaQueueCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumEnaQueueCountNode.GetText()).c_str()).c_str());
      m_maximumEnaQueueCountHasBeenSet = true;
    }
    XmlNode maximumEnaQueueCountPerInterfaceNode = resultNode.FirstChild("maximumEnaQueueCountPerInterface");
    if(!maximumEnaQueueCountPerInterfaceNode.IsNull())
    {
      m_maximumEnaQueueCountPerInterface = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumEnaQueueCountPerInterfaceNode.GetText()).c_str()).c_str());
      m_maximumEnaQueueCountPerInterfaceHasBeenSet = true;
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

  if(m_baselineBandwidthInGbpsHasBeenSet)
  {
        oStream << location << index << locationValue << ".BaselineBandwidthInGbps=" << StringUtils::URLEncode(m_baselineBandwidthInGbps) << "&";
  }

  if(m_peakBandwidthInGbpsHasBeenSet)
  {
        oStream << location << index << locationValue << ".PeakBandwidthInGbps=" << StringUtils::URLEncode(m_peakBandwidthInGbps) << "&";
  }

  if(m_defaultEnaQueueCountPerInterfaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultEnaQueueCountPerInterface=" << m_defaultEnaQueueCountPerInterface << "&";
  }

  if(m_maximumEnaQueueCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumEnaQueueCount=" << m_maximumEnaQueueCount << "&";
  }

  if(m_maximumEnaQueueCountPerInterfaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumEnaQueueCountPerInterface=" << m_maximumEnaQueueCountPerInterface << "&";
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
  if(m_baselineBandwidthInGbpsHasBeenSet)
  {
      oStream << location << ".BaselineBandwidthInGbps=" << StringUtils::URLEncode(m_baselineBandwidthInGbps) << "&";
  }
  if(m_peakBandwidthInGbpsHasBeenSet)
  {
      oStream << location << ".PeakBandwidthInGbps=" << StringUtils::URLEncode(m_peakBandwidthInGbps) << "&";
  }
  if(m_defaultEnaQueueCountPerInterfaceHasBeenSet)
  {
      oStream << location << ".DefaultEnaQueueCountPerInterface=" << m_defaultEnaQueueCountPerInterface << "&";
  }
  if(m_maximumEnaQueueCountHasBeenSet)
  {
      oStream << location << ".MaximumEnaQueueCount=" << m_maximumEnaQueueCount << "&";
  }
  if(m_maximumEnaQueueCountPerInterfaceHasBeenSet)
  {
      oStream << location << ".MaximumEnaQueueCountPerInterface=" << m_maximumEnaQueueCountPerInterface << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
