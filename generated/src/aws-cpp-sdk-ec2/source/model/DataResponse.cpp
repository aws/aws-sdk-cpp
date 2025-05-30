﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DataResponse.h>
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

DataResponse::DataResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DataResponse& DataResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
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
      m_metric = MetricTypeMapper::GetMetricTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(metricNode.GetText()).c_str()));
      m_metricHasBeenSet = true;
    }
    XmlNode statisticNode = resultNode.FirstChild("statistic");
    if(!statisticNode.IsNull())
    {
      m_statistic = StatisticTypeMapper::GetStatisticTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statisticNode.GetText()).c_str()));
      m_statisticHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("period");
    if(!periodNode.IsNull())
    {
      m_period = PeriodTypeMapper::GetPeriodTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()));
      m_periodHasBeenSet = true;
    }
    XmlNode metricPointsNode = resultNode.FirstChild("metricPointSet");
    if(!metricPointsNode.IsNull())
    {
      XmlNode metricPointsMember = metricPointsNode.FirstChild("item");
      m_metricPointsHasBeenSet = !metricPointsMember.IsNull();
      while(!metricPointsMember.IsNull())
      {
        m_metricPoints.push_back(metricPointsMember);
        metricPointsMember = metricPointsMember.NextNode("item");
      }

      m_metricPointsHasBeenSet = true;
    }
  }

  return *this;
}

void DataResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

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
      oStream << location << index << locationValue << ".Metric=" << StringUtils::URLEncode(MetricTypeMapper::GetNameForMetricType(m_metric)) << "&";
  }

  if(m_statisticHasBeenSet)
  {
      oStream << location << index << locationValue << ".Statistic=" << StringUtils::URLEncode(StatisticTypeMapper::GetNameForStatisticType(m_statistic)) << "&";
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << StringUtils::URLEncode(PeriodTypeMapper::GetNameForPeriodType(m_period)) << "&";
  }

  if(m_metricPointsHasBeenSet)
  {
      unsigned metricPointsIdx = 1;
      for(auto& item : m_metricPoints)
      {
        Aws::StringStream metricPointsSs;
        metricPointsSs << location << index << locationValue << ".MetricPointSet." << metricPointsIdx++;
        item.OutputToStream(oStream, metricPointsSs.str().c_str());
      }
  }

}

void DataResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
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
      oStream << location << ".Metric=" << StringUtils::URLEncode(MetricTypeMapper::GetNameForMetricType(m_metric)) << "&";
  }
  if(m_statisticHasBeenSet)
  {
      oStream << location << ".Statistic=" << StringUtils::URLEncode(StatisticTypeMapper::GetNameForStatisticType(m_statistic)) << "&";
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << StringUtils::URLEncode(PeriodTypeMapper::GetNameForPeriodType(m_period)) << "&";
  }
  if(m_metricPointsHasBeenSet)
  {
      unsigned metricPointsIdx = 1;
      for(auto& item : m_metricPoints)
      {
        Aws::StringStream metricPointsSs;
        metricPointsSs << location << ".MetricPointSet." << metricPointsIdx++;
        item.OutputToStream(oStream, metricPointsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
