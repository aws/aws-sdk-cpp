/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Subscription.h>
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

Subscription::Subscription() : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_metric(MetricType::NOT_SET),
    m_metricHasBeenSet(false),
    m_statistic(StatisticType::NOT_SET),
    m_statisticHasBeenSet(false),
    m_period(PeriodType::NOT_SET),
    m_periodHasBeenSet(false)
{
}

Subscription::Subscription(const XmlNode& xmlNode) : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_metric(MetricType::NOT_SET),
    m_metricHasBeenSet(false),
    m_statistic(StatisticType::NOT_SET),
    m_statisticHasBeenSet(false),
    m_period(PeriodType::NOT_SET),
    m_periodHasBeenSet(false)
{
  *this = xmlNode;
}

Subscription& Subscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceNode = resultNode.FirstChild("source");
    if(!sourceNode.IsNull())
    {
      m_source = Aws::Utils::Xml::DecodeEscapedXmlText(sourceNode.GetText());
      m_sourceHasBeenSet = true;
    }
    XmlNode destinationNode = resultNode.FirstChild("destination");
    if(!destinationNode.IsNull())
    {
      m_destination = Aws::Utils::Xml::DecodeEscapedXmlText(destinationNode.GetText());
      m_destinationHasBeenSet = true;
    }
    XmlNode metricNode = resultNode.FirstChild("metric");
    if(!metricNode.IsNull())
    {
      m_metric = MetricTypeMapper::GetMetricTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(metricNode.GetText()).c_str()).c_str());
      m_metricHasBeenSet = true;
    }
    XmlNode statisticNode = resultNode.FirstChild("statistic");
    if(!statisticNode.IsNull())
    {
      m_statistic = StatisticTypeMapper::GetStatisticTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statisticNode.GetText()).c_str()).c_str());
      m_statisticHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("period");
    if(!periodNode.IsNull())
    {
      m_period = PeriodTypeMapper::GetPeriodTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
      m_periodHasBeenSet = true;
    }
  }

  return *this;
}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }

  if(m_metricHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metric=" << MetricTypeMapper::GetNameForMetricType(m_metric) << "&";
  }

  if(m_statisticHasBeenSet)
  {
      oStream << location << index << locationValue << ".Statistic=" << StatisticTypeMapper::GetNameForStatisticType(m_statistic) << "&";
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << PeriodTypeMapper::GetNameForPeriodType(m_period) << "&";
  }

}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }
  if(m_destinationHasBeenSet)
  {
      oStream << location << ".Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }
  if(m_metricHasBeenSet)
  {
      oStream << location << ".Metric=" << MetricTypeMapper::GetNameForMetricType(m_metric) << "&";
  }
  if(m_statisticHasBeenSet)
  {
      oStream << location << ".Statistic=" << StatisticTypeMapper::GetNameForStatisticType(m_statistic) << "&";
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << PeriodTypeMapper::GetNameForPeriodType(m_period) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
