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

#include <aws/monitoring/model/MetricDatum.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricDatum::MetricDatum() : 
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_countsHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_storageResolution(0),
    m_storageResolutionHasBeenSet(false)
{
}

MetricDatum::MetricDatum(const XmlNode& xmlNode) : 
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_countsHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_storageResolution(0),
    m_storageResolutionHasBeenSet(false)
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
      m_metricName = metricNameNode.GetText();
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
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
         m_values.push_back(StringUtils::ConvertToDouble(StringUtils::Trim(valuesMember.GetText().c_str()).c_str()));
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
    XmlNode countsNode = resultNode.FirstChild("Counts");
    if(!countsNode.IsNull())
    {
      XmlNode countsMember = countsNode.FirstChild("member");
      while(!countsMember.IsNull())
      {
         m_counts.push_back(StringUtils::ConvertToDouble(StringUtils::Trim(countsMember.GetText().c_str()).c_str()));
        countsMember = countsMember.NextNode("member");
      }

      m_countsHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = StandardUnitMapper::GetStandardUnitForName(StringUtils::Trim(unitNode.GetText().c_str()).c_str());
      m_unitHasBeenSet = true;
    }
    XmlNode storageResolutionNode = resultNode.FirstChild("StorageResolution");
    if(!storageResolutionNode.IsNull())
    {
      m_storageResolution = StringUtils::ConvertToInt32(StringUtils::Trim(storageResolutionNode.GetText().c_str()).c_str());
      m_storageResolutionHasBeenSet = true;
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
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << index << locationValue << ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
        oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }

  if(m_statisticValuesHasBeenSet)
  {
      Aws::StringStream statisticValuesLocationAndMemberSs;
      statisticValuesLocationAndMemberSs << location << index << locationValue << ".StatisticValues";
      m_statisticValues.OutputToStream(oStream, statisticValuesLocationAndMemberSs.str().c_str());
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }

  if(m_countsHasBeenSet)
  {
      unsigned countsIdx = 1;
      for(auto& item : m_counts)
      {
        oStream << location << index << locationValue << ".Counts.member." << countsIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  if(m_storageResolutionHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageResolution=" << m_storageResolution << "&";
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
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location <<  ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
        oStream << location << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }
  if(m_statisticValuesHasBeenSet)
  {
      Aws::String statisticValuesLocationAndMember(location);
      statisticValuesLocationAndMember += ".StatisticValues";
      m_statisticValues.OutputToStream(oStream, statisticValuesLocationAndMember.c_str());
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
          oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }
  if(m_countsHasBeenSet)
  {
      unsigned countsIdx = 1;
      for(auto& item : m_counts)
      {
          oStream << location << ".Counts.member." << countsIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
  if(m_storageResolutionHasBeenSet)
  {
      oStream << location << ".StorageResolution=" << m_storageResolution << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
