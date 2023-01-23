/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CustomizedMetricSpecification.h>
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

CustomizedMetricSpecification::CustomizedMetricSpecification() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CustomizedMetricSpecification::CustomizedMetricSpecification(const XmlNode& xmlNode) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = xmlNode;
}

CustomizedMetricSpecification& CustomizedMetricSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = Aws::Utils::Xml::DecodeEscapedXmlText(metricNameNode.GetText());
      m_metricNameHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if(!dimensionsNode.IsNull())
    {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("member");
      while(!dimensionsMember.IsNull())
      {
        m_dimensions.push_back(dimensionsMember);
        dimensionsMember = dimensionsMember.NextNode("member");
      }

      m_dimensionsHasBeenSet = true;
    }
    XmlNode statisticNode = resultNode.FirstChild("Statistic");
    if(!statisticNode.IsNull())
    {
      m_statistic = MetricStatisticMapper::GetMetricStatisticForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statisticNode.GetText()).c_str()).c_str());
      m_statisticHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = Aws::Utils::Xml::DecodeEscapedXmlText(unitNode.GetText());
      m_unitHasBeenSet = true;
    }
    XmlNode metricsNode = resultNode.FirstChild("Metrics");
    if(!metricsNode.IsNull())
    {
      XmlNode metricsMember = metricsNode.FirstChild("member");
      while(!metricsMember.IsNull())
      {
        m_metrics.push_back(metricsMember);
        metricsMember = metricsMember.NextNode("member");
      }

      m_metricsHasBeenSet = true;
    }
  }

  return *this;
}

void CustomizedMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << index << locationValue << ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }

  if(m_statisticHasBeenSet)
  {
      oStream << location << index << locationValue << ".Statistic=" << MetricStatisticMapper::GetNameForMetricStatistic(m_statistic) << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StringUtils::URLEncode(m_unit.c_str()) << "&";
  }

  if(m_metricsHasBeenSet)
  {
      unsigned metricsIdx = 1;
      for(auto& item : m_metrics)
      {
        Aws::StringStream metricsSs;
        metricsSs << location << index << locationValue << ".Metrics.member." << metricsIdx++;
        item.OutputToStream(oStream, metricsSs.str().c_str());
      }
  }

}

void CustomizedMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location <<  ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }
  if(m_statisticHasBeenSet)
  {
      oStream << location << ".Statistic=" << MetricStatisticMapper::GetNameForMetricStatistic(m_statistic) << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StringUtils::URLEncode(m_unit.c_str()) << "&";
  }
  if(m_metricsHasBeenSet)
  {
      unsigned metricsIdx = 1;
      for(auto& item : m_metrics)
      {
        Aws::StringStream metricsSs;
        metricsSs << location <<  ".Metrics.member." << metricsIdx++;
        item.OutputToStream(oStream, metricsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
