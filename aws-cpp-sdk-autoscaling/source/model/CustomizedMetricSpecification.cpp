/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_unitHasBeenSet(false)
{
}

CustomizedMetricSpecification::CustomizedMetricSpecification(const XmlNode& xmlNode) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unitHasBeenSet(false)
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
      m_metricName = metricNameNode.GetText();
      m_metricNameHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = namespaceNode.GetText();
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
      m_statistic = MetricStatisticMapper::GetMetricStatisticForName(StringUtils::Trim(statisticNode.GetText().c_str()).c_str());
      m_statisticHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = unitNode.GetText();
      m_unitHasBeenSet = true;
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
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
