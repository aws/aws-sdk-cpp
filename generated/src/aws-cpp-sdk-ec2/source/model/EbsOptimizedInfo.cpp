/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EbsOptimizedInfo.h>
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

EbsOptimizedInfo::EbsOptimizedInfo() : 
    m_baselineBandwidthInMbps(0),
    m_baselineBandwidthInMbpsHasBeenSet(false),
    m_baselineThroughputInMBps(0.0),
    m_baselineThroughputInMBpsHasBeenSet(false),
    m_baselineIops(0),
    m_baselineIopsHasBeenSet(false),
    m_maximumBandwidthInMbps(0),
    m_maximumBandwidthInMbpsHasBeenSet(false),
    m_maximumThroughputInMBps(0.0),
    m_maximumThroughputInMBpsHasBeenSet(false),
    m_maximumIops(0),
    m_maximumIopsHasBeenSet(false)
{
}

EbsOptimizedInfo::EbsOptimizedInfo(const XmlNode& xmlNode) : 
    m_baselineBandwidthInMbps(0),
    m_baselineBandwidthInMbpsHasBeenSet(false),
    m_baselineThroughputInMBps(0.0),
    m_baselineThroughputInMBpsHasBeenSet(false),
    m_baselineIops(0),
    m_baselineIopsHasBeenSet(false),
    m_maximumBandwidthInMbps(0),
    m_maximumBandwidthInMbpsHasBeenSet(false),
    m_maximumThroughputInMBps(0.0),
    m_maximumThroughputInMBpsHasBeenSet(false),
    m_maximumIops(0),
    m_maximumIopsHasBeenSet(false)
{
  *this = xmlNode;
}

EbsOptimizedInfo& EbsOptimizedInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode baselineBandwidthInMbpsNode = resultNode.FirstChild("baselineBandwidthInMbps");
    if(!baselineBandwidthInMbpsNode.IsNull())
    {
      m_baselineBandwidthInMbps = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(baselineBandwidthInMbpsNode.GetText()).c_str()).c_str());
      m_baselineBandwidthInMbpsHasBeenSet = true;
    }
    XmlNode baselineThroughputInMBpsNode = resultNode.FirstChild("baselineThroughputInMBps");
    if(!baselineThroughputInMBpsNode.IsNull())
    {
      m_baselineThroughputInMBps = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(baselineThroughputInMBpsNode.GetText()).c_str()).c_str());
      m_baselineThroughputInMBpsHasBeenSet = true;
    }
    XmlNode baselineIopsNode = resultNode.FirstChild("baselineIops");
    if(!baselineIopsNode.IsNull())
    {
      m_baselineIops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(baselineIopsNode.GetText()).c_str()).c_str());
      m_baselineIopsHasBeenSet = true;
    }
    XmlNode maximumBandwidthInMbpsNode = resultNode.FirstChild("maximumBandwidthInMbps");
    if(!maximumBandwidthInMbpsNode.IsNull())
    {
      m_maximumBandwidthInMbps = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumBandwidthInMbpsNode.GetText()).c_str()).c_str());
      m_maximumBandwidthInMbpsHasBeenSet = true;
    }
    XmlNode maximumThroughputInMBpsNode = resultNode.FirstChild("maximumThroughputInMBps");
    if(!maximumThroughputInMBpsNode.IsNull())
    {
      m_maximumThroughputInMBps = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumThroughputInMBpsNode.GetText()).c_str()).c_str());
      m_maximumThroughputInMBpsHasBeenSet = true;
    }
    XmlNode maximumIopsNode = resultNode.FirstChild("maximumIops");
    if(!maximumIopsNode.IsNull())
    {
      m_maximumIops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumIopsNode.GetText()).c_str()).c_str());
      m_maximumIopsHasBeenSet = true;
    }
  }

  return *this;
}

void EbsOptimizedInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_baselineBandwidthInMbpsHasBeenSet)
  {
      oStream << location << index << locationValue << ".BaselineBandwidthInMbps=" << m_baselineBandwidthInMbps << "&";
  }

  if(m_baselineThroughputInMBpsHasBeenSet)
  {
        oStream << location << index << locationValue << ".BaselineThroughputInMBps=" << StringUtils::URLEncode(m_baselineThroughputInMBps) << "&";
  }

  if(m_baselineIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".BaselineIops=" << m_baselineIops << "&";
  }

  if(m_maximumBandwidthInMbpsHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumBandwidthInMbps=" << m_maximumBandwidthInMbps << "&";
  }

  if(m_maximumThroughputInMBpsHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaximumThroughputInMBps=" << StringUtils::URLEncode(m_maximumThroughputInMBps) << "&";
  }

  if(m_maximumIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumIops=" << m_maximumIops << "&";
  }

}

void EbsOptimizedInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_baselineBandwidthInMbpsHasBeenSet)
  {
      oStream << location << ".BaselineBandwidthInMbps=" << m_baselineBandwidthInMbps << "&";
  }
  if(m_baselineThroughputInMBpsHasBeenSet)
  {
        oStream << location << ".BaselineThroughputInMBps=" << StringUtils::URLEncode(m_baselineThroughputInMBps) << "&";
  }
  if(m_baselineIopsHasBeenSet)
  {
      oStream << location << ".BaselineIops=" << m_baselineIops << "&";
  }
  if(m_maximumBandwidthInMbpsHasBeenSet)
  {
      oStream << location << ".MaximumBandwidthInMbps=" << m_maximumBandwidthInMbps << "&";
  }
  if(m_maximumThroughputInMBpsHasBeenSet)
  {
        oStream << location << ".MaximumThroughputInMBps=" << StringUtils::URLEncode(m_maximumThroughputInMBps) << "&";
  }
  if(m_maximumIopsHasBeenSet)
  {
      oStream << location << ".MaximumIops=" << m_maximumIops << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
