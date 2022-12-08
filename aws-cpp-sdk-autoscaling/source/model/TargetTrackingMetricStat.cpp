/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TargetTrackingMetricStat.h>
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

TargetTrackingMetricStat::TargetTrackingMetricStat() : 
    m_metricHasBeenSet(false),
    m_statHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

TargetTrackingMetricStat::TargetTrackingMetricStat(const XmlNode& xmlNode) : 
    m_metricHasBeenSet(false),
    m_statHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = xmlNode;
}

TargetTrackingMetricStat& TargetTrackingMetricStat::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNode = resultNode.FirstChild("Metric");
    if(!metricNode.IsNull())
    {
      m_metric = metricNode;
      m_metricHasBeenSet = true;
    }
    XmlNode statNode = resultNode.FirstChild("Stat");
    if(!statNode.IsNull())
    {
      m_stat = Aws::Utils::Xml::DecodeEscapedXmlText(statNode.GetText());
      m_statHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = Aws::Utils::Xml::DecodeEscapedXmlText(unitNode.GetText());
      m_unitHasBeenSet = true;
    }
  }

  return *this;
}

void TargetTrackingMetricStat::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricHasBeenSet)
  {
      Aws::StringStream metricLocationAndMemberSs;
      metricLocationAndMemberSs << location << index << locationValue << ".Metric";
      m_metric.OutputToStream(oStream, metricLocationAndMemberSs.str().c_str());
  }

  if(m_statHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StringUtils::URLEncode(m_unit.c_str()) << "&";
  }

}

void TargetTrackingMetricStat::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricHasBeenSet)
  {
      Aws::String metricLocationAndMember(location);
      metricLocationAndMember += ".Metric";
      m_metric.OutputToStream(oStream, metricLocationAndMember.c_str());
  }
  if(m_statHasBeenSet)
  {
      oStream << location << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StringUtils::URLEncode(m_unit.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
