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

#include <aws/monitoring/model/AnomalyDetectorConfiguration.h>
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

AnomalyDetectorConfiguration::AnomalyDetectorConfiguration() : 
    m_excludedTimeRangesHasBeenSet(false),
    m_metricTimezoneHasBeenSet(false)
{
}

AnomalyDetectorConfiguration::AnomalyDetectorConfiguration(const XmlNode& xmlNode) : 
    m_excludedTimeRangesHasBeenSet(false),
    m_metricTimezoneHasBeenSet(false)
{
  *this = xmlNode;
}

AnomalyDetectorConfiguration& AnomalyDetectorConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode excludedTimeRangesNode = resultNode.FirstChild("ExcludedTimeRanges");
    if(!excludedTimeRangesNode.IsNull())
    {
      XmlNode excludedTimeRangesMember = excludedTimeRangesNode.FirstChild("member");
      while(!excludedTimeRangesMember.IsNull())
      {
        m_excludedTimeRanges.push_back(excludedTimeRangesMember);
        excludedTimeRangesMember = excludedTimeRangesMember.NextNode("member");
      }

      m_excludedTimeRangesHasBeenSet = true;
    }
    XmlNode metricTimezoneNode = resultNode.FirstChild("MetricTimezone");
    if(!metricTimezoneNode.IsNull())
    {
      m_metricTimezone = metricTimezoneNode.GetText();
      m_metricTimezoneHasBeenSet = true;
    }
  }

  return *this;
}

void AnomalyDetectorConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_excludedTimeRangesHasBeenSet)
  {
      unsigned excludedTimeRangesIdx = 1;
      for(auto& item : m_excludedTimeRanges)
      {
        Aws::StringStream excludedTimeRangesSs;
        excludedTimeRangesSs << location << index << locationValue << ".ExcludedTimeRanges.member." << excludedTimeRangesIdx++;
        item.OutputToStream(oStream, excludedTimeRangesSs.str().c_str());
      }
  }

  if(m_metricTimezoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricTimezone=" << StringUtils::URLEncode(m_metricTimezone.c_str()) << "&";
  }

}

void AnomalyDetectorConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_excludedTimeRangesHasBeenSet)
  {
      unsigned excludedTimeRangesIdx = 1;
      for(auto& item : m_excludedTimeRanges)
      {
        Aws::StringStream excludedTimeRangesSs;
        excludedTimeRangesSs << location <<  ".ExcludedTimeRanges.member." << excludedTimeRangesIdx++;
        item.OutputToStream(oStream, excludedTimeRangesSs.str().c_str());
      }
  }
  if(m_metricTimezoneHasBeenSet)
  {
      oStream << location << ".MetricTimezone=" << StringUtils::URLEncode(m_metricTimezone.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
