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

#include <aws/monitoring/model/Datapoint.h>
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

Datapoint::Datapoint() : 
    m_timestampHasBeenSet(false),
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_extendedStatisticsHasBeenSet(false)
{
}

Datapoint::Datapoint(const XmlNode& xmlNode) : 
    m_timestampHasBeenSet(false),
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_extendedStatisticsHasBeenSet(false)
{
  *this = xmlNode;
}

Datapoint& Datapoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode sampleCountNode = resultNode.FirstChild("SampleCount");
    if(!sampleCountNode.IsNull())
    {
      m_sampleCount = StringUtils::ConvertToDouble(StringUtils::Trim(sampleCountNode.GetText().c_str()).c_str());
      m_sampleCountHasBeenSet = true;
    }
    XmlNode averageNode = resultNode.FirstChild("Average");
    if(!averageNode.IsNull())
    {
      m_average = StringUtils::ConvertToDouble(StringUtils::Trim(averageNode.GetText().c_str()).c_str());
      m_averageHasBeenSet = true;
    }
    XmlNode sumNode = resultNode.FirstChild("Sum");
    if(!sumNode.IsNull())
    {
      m_sum = StringUtils::ConvertToDouble(StringUtils::Trim(sumNode.GetText().c_str()).c_str());
      m_sumHasBeenSet = true;
    }
    XmlNode minimumNode = resultNode.FirstChild("Minimum");
    if(!minimumNode.IsNull())
    {
      m_minimum = StringUtils::ConvertToDouble(StringUtils::Trim(minimumNode.GetText().c_str()).c_str());
      m_minimumHasBeenSet = true;
    }
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    if(!maximumNode.IsNull())
    {
      m_maximum = StringUtils::ConvertToDouble(StringUtils::Trim(maximumNode.GetText().c_str()).c_str());
      m_maximumHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = StandardUnitMapper::GetStandardUnitForName(StringUtils::Trim(unitNode.GetText().c_str()).c_str());
      m_unitHasBeenSet = true;
    }
    XmlNode extendedStatisticsNode = resultNode.FirstChild("ExtendedStatistics");

    if(!extendedStatisticsNode.IsNull())
    {
      XmlNode extendedStatisticsEntry = extendedStatisticsNode.FirstChild("entry");
      while(!extendedStatisticsEntry.IsNull())
      {
        XmlNode keyNode = extendedStatisticsEntry.FirstChild("key");
        XmlNode valueNode = extendedStatisticsEntry.FirstChild("value");
        m_extendedStatistics[keyNode.GetText()] =
           StringUtils::ConvertToDouble(StringUtils::Trim(valueNode.GetText().c_str()).c_str());
        extendedStatisticsEntry = extendedStatisticsEntry.NextNode("entry");
      }

      m_extendedStatisticsHasBeenSet = true;
    }
  }

  return *this;
}

void Datapoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sampleCountHasBeenSet)
  {
        oStream << location << index << locationValue << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }

  if(m_averageHasBeenSet)
  {
        oStream << location << index << locationValue << ".Average=" << StringUtils::URLEncode(m_average) << "&";
  }

  if(m_sumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }

  if(m_minimumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }

  if(m_maximumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  if(m_extendedStatisticsHasBeenSet)
  {
      unsigned extendedStatisticsIdx = 1;
      for(auto& item : m_extendedStatistics)
      {
        oStream << location << index << locationValue << ".ExtendedStatistics.entry." << extendedStatisticsIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".ExtendedStatistics.entry." << extendedStatisticsIdx << ".value="
            << StringUtils::URLEncode(item.second) << "&";
        extendedStatisticsIdx++;
      }
  }

}

void Datapoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sampleCountHasBeenSet)
  {
        oStream << location << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }
  if(m_averageHasBeenSet)
  {
        oStream << location << ".Average=" << StringUtils::URLEncode(m_average) << "&";
  }
  if(m_sumHasBeenSet)
  {
        oStream << location << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }
  if(m_minimumHasBeenSet)
  {
        oStream << location << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }
  if(m_maximumHasBeenSet)
  {
        oStream << location << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
  if(m_extendedStatisticsHasBeenSet)
  {
      unsigned extendedStatisticsIdx = 1;
      for(auto& item : m_extendedStatistics)
      {
        oStream << location << ".ExtendedStatistics.entry."  << extendedStatisticsIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location <<  ".ExtendedStatistics.entry." << extendedStatisticsIdx << ".value="
            << StringUtils::URLEncode(item.second) << "&";
        extendedStatisticsIdx++;
      }

  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
