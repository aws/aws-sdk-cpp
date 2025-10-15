/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MetricValue.h>
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

MetricValue::MetricValue(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetricValue& MetricValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNode = resultNode.FirstChild("metric");
    if(!metricNode.IsNull())
    {
      m_metric = MetricMapper::GetMetricForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(metricNode.GetText()).c_str()));
      m_metricHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()).c_str()).c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void MetricValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metric=" << StringUtils::URLEncode(MetricMapper::GetNameForMetric(m_metric)) << "&";
  }

  if(m_valueHasBeenSet)
  {
        oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }

}

void MetricValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricHasBeenSet)
  {
      oStream << location << ".Metric=" << StringUtils::URLEncode(MetricMapper::GetNameForMetric(m_metric)) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
