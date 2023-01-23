/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/MetricGranularityType.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

MetricGranularityType::MetricGranularityType() : 
    m_granularityHasBeenSet(false)
{
}

MetricGranularityType::MetricGranularityType(const XmlNode& xmlNode) : 
    m_granularityHasBeenSet(false)
{
  *this = xmlNode;
}

MetricGranularityType& MetricGranularityType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode granularityNode = resultNode.FirstChild("Granularity");
    if(!granularityNode.IsNull())
    {
      m_granularity = Aws::Utils::Xml::DecodeEscapedXmlText(granularityNode.GetText());
      m_granularityHasBeenSet = true;
    }
  }

  return *this;
}

void MetricGranularityType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_granularityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }

}

void MetricGranularityType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_granularityHasBeenSet)
  {
      oStream << location << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
