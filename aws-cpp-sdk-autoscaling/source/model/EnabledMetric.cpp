/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/EnabledMetric.h>
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

EnabledMetric::EnabledMetric() : 
    m_metricHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

EnabledMetric::EnabledMetric(const XmlNode& xmlNode) : 
    m_metricHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
  *this = xmlNode;
}

EnabledMetric& EnabledMetric::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNode = resultNode.FirstChild("Metric");
    if(!metricNode.IsNull())
    {
      m_metric = Aws::Utils::Xml::DecodeEscapedXmlText(metricNode.GetText());
      m_metricHasBeenSet = true;
    }
    XmlNode granularityNode = resultNode.FirstChild("Granularity");
    if(!granularityNode.IsNull())
    {
      m_granularity = Aws::Utils::Xml::DecodeEscapedXmlText(granularityNode.GetText());
      m_granularityHasBeenSet = true;
    }
  }

  return *this;
}

void EnabledMetric::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }

  if(m_granularityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }

}

void EnabledMetric::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }
  if(m_granularityHasBeenSet)
  {
      oStream << location << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
