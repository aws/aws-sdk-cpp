/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/MetricDatum.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

MetricDatum::MetricDatum() : 
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

MetricDatum::MetricDatum(const XmlNode& xmlNode) : 
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = xmlNode;
}

MetricDatum& MetricDatum::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = StringUtils::Trim(metricNameNode.GetText().c_str());
      m_metricNameHasBeenSet = true;
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
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = StringUtils::ConvertToDouble(StringUtils::Trim(timestampNode.GetText().c_str()).c_str());
      m_timestampHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToDouble(StringUtils::Trim(valueNode.GetText().c_str()).c_str());
      m_valueHasBeenSet = true;
    }
    XmlNode statisticValuesNode = resultNode.FirstChild("StatisticValues");
    if(!statisticValuesNode.IsNull())
    {
      m_statisticValues = statisticValuesNode;
      m_statisticValuesHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = StandardUnitMapper::GetStandardUnitForName(StringUtils::Trim(unitNode.GetText().c_str()).c_str());
      m_unitHasBeenSet = true;
    }
  }

  return *this;
}

void MetricDatum::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
  if(m_dimensionsHasBeenSet)
  {
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << index << locationValue << ".Dimensions";
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << m_timestamp << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << m_value << "&";
  }
  if(m_statisticValuesHasBeenSet)
  {
      Aws::StringStream statisticValuesLocationAndMemberSs;
      statisticValuesLocationAndMemberSs << location << index << locationValue << ".StatisticValues";
      m_statisticValues.OutputToStream(oStream, statisticValuesLocationAndMemberSs.str().c_str());
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
}

void MetricDatum::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
  if(m_dimensionsHasBeenSet)
  {
      for(auto& item : m_dimensions)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Dimensions";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << m_timestamp << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << m_value << "&";
  }
  if(m_statisticValuesHasBeenSet)
  {
      Aws::String statisticValuesLocationAndMember(location);
      statisticValuesLocationAndMember += ".StatisticValues";
      m_statisticValues.OutputToStream(oStream, statisticValuesLocationAndMember.c_str());
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
}
