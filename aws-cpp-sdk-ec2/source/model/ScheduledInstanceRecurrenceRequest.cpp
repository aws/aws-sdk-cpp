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

#include <aws/ec2/model/ScheduledInstanceRecurrenceRequest.h>
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

ScheduledInstanceRecurrenceRequest::ScheduledInstanceRecurrenceRequest() : 
    m_frequencyHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_occurrenceDaysHasBeenSet(false),
    m_occurrenceRelativeToEnd(false),
    m_occurrenceRelativeToEndHasBeenSet(false),
    m_occurrenceUnitHasBeenSet(false)
{
}

ScheduledInstanceRecurrenceRequest::ScheduledInstanceRecurrenceRequest(const XmlNode& xmlNode) : 
    m_frequencyHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_occurrenceDaysHasBeenSet(false),
    m_occurrenceRelativeToEnd(false),
    m_occurrenceRelativeToEndHasBeenSet(false),
    m_occurrenceUnitHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstanceRecurrenceRequest& ScheduledInstanceRecurrenceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode frequencyNode = resultNode.FirstChild("Frequency");
    if(!frequencyNode.IsNull())
    {
      m_frequency = frequencyNode.GetText();
      m_frequencyHasBeenSet = true;
    }
    XmlNode intervalNode = resultNode.FirstChild("Interval");
    if(!intervalNode.IsNull())
    {
      m_interval = StringUtils::ConvertToInt32(StringUtils::Trim(intervalNode.GetText().c_str()).c_str());
      m_intervalHasBeenSet = true;
    }
    XmlNode occurrenceDaysNode = resultNode.FirstChild("OccurrenceDay");
    if(!occurrenceDaysNode.IsNull())
    {
      XmlNode occurrenceDaysMember = occurrenceDaysNode.FirstChild("OccurenceDay");
      while(!occurrenceDaysMember.IsNull())
      {
         m_occurrenceDays.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(occurrenceDaysMember.GetText().c_str()).c_str()));
        occurrenceDaysMember = occurrenceDaysMember.NextNode("OccurenceDay");
      }

      m_occurrenceDaysHasBeenSet = true;
    }
    XmlNode occurrenceRelativeToEndNode = resultNode.FirstChild("OccurrenceRelativeToEnd");
    if(!occurrenceRelativeToEndNode.IsNull())
    {
      m_occurrenceRelativeToEnd = StringUtils::ConvertToBool(StringUtils::Trim(occurrenceRelativeToEndNode.GetText().c_str()).c_str());
      m_occurrenceRelativeToEndHasBeenSet = true;
    }
    XmlNode occurrenceUnitNode = resultNode.FirstChild("OccurrenceUnit");
    if(!occurrenceUnitNode.IsNull())
    {
      m_occurrenceUnit = occurrenceUnitNode.GetText();
      m_occurrenceUnitHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstanceRecurrenceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_frequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Frequency=" << StringUtils::URLEncode(m_frequency.c_str()) << "&";
  }

  if(m_intervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Interval=" << m_interval << "&";
  }

  if(m_occurrenceDaysHasBeenSet)
  {
      unsigned occurrenceDaysIdx = 1;
      for(auto& item : m_occurrenceDays)
      {
        oStream << location << index << locationValue << ".OccurrenceDay." << occurrenceDaysIdx++ << "=" << item << "&";
      }
  }

  if(m_occurrenceRelativeToEndHasBeenSet)
  {
      oStream << location << index << locationValue << ".OccurrenceRelativeToEnd=" << std::boolalpha << m_occurrenceRelativeToEnd << "&";
  }

  if(m_occurrenceUnitHasBeenSet)
  {
      oStream << location << index << locationValue << ".OccurrenceUnit=" << StringUtils::URLEncode(m_occurrenceUnit.c_str()) << "&";
  }

}

void ScheduledInstanceRecurrenceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_frequencyHasBeenSet)
  {
      oStream << location << ".Frequency=" << StringUtils::URLEncode(m_frequency.c_str()) << "&";
  }
  if(m_intervalHasBeenSet)
  {
      oStream << location << ".Interval=" << m_interval << "&";
  }
  if(m_occurrenceDaysHasBeenSet)
  {
      unsigned occurrenceDaysIdx = 1;
      for(auto& item : m_occurrenceDays)
      {
        oStream << location << ".OccurrenceDay." << occurrenceDaysIdx++ << "=" << item << "&";
      }
  }
  if(m_occurrenceRelativeToEndHasBeenSet)
  {
      oStream << location << ".OccurrenceRelativeToEnd=" << std::boolalpha << m_occurrenceRelativeToEnd << "&";
  }
  if(m_occurrenceUnitHasBeenSet)
  {
      oStream << location << ".OccurrenceUnit=" << StringUtils::URLEncode(m_occurrenceUnit.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
