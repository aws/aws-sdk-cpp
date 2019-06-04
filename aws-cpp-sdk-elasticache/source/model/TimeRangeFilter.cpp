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

#include <aws/elasticache/model/TimeRangeFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

TimeRangeFilter::TimeRangeFilter() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

TimeRangeFilter::TimeRangeFilter(const XmlNode& xmlNode) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = xmlNode;
}

TimeRangeFilter& TimeRangeFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(endTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
  }

  return *this;
}

void TimeRangeFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void TimeRangeFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
