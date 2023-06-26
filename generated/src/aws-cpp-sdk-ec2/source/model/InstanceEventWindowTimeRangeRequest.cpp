/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindowTimeRangeRequest.h>
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

InstanceEventWindowTimeRangeRequest::InstanceEventWindowTimeRangeRequest() : 
    m_startWeekDay(WeekDay::NOT_SET),
    m_startWeekDayHasBeenSet(false),
    m_startHour(0),
    m_startHourHasBeenSet(false),
    m_endWeekDay(WeekDay::NOT_SET),
    m_endWeekDayHasBeenSet(false),
    m_endHour(0),
    m_endHourHasBeenSet(false)
{
}

InstanceEventWindowTimeRangeRequest::InstanceEventWindowTimeRangeRequest(const XmlNode& xmlNode) : 
    m_startWeekDay(WeekDay::NOT_SET),
    m_startWeekDayHasBeenSet(false),
    m_startHour(0),
    m_startHourHasBeenSet(false),
    m_endWeekDay(WeekDay::NOT_SET),
    m_endWeekDayHasBeenSet(false),
    m_endHour(0),
    m_endHourHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceEventWindowTimeRangeRequest& InstanceEventWindowTimeRangeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode startWeekDayNode = resultNode.FirstChild("StartWeekDay");
    if(!startWeekDayNode.IsNull())
    {
      m_startWeekDay = WeekDayMapper::GetWeekDayForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startWeekDayNode.GetText()).c_str()).c_str());
      m_startWeekDayHasBeenSet = true;
    }
    XmlNode startHourNode = resultNode.FirstChild("StartHour");
    if(!startHourNode.IsNull())
    {
      m_startHour = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startHourNode.GetText()).c_str()).c_str());
      m_startHourHasBeenSet = true;
    }
    XmlNode endWeekDayNode = resultNode.FirstChild("EndWeekDay");
    if(!endWeekDayNode.IsNull())
    {
      m_endWeekDay = WeekDayMapper::GetWeekDayForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endWeekDayNode.GetText()).c_str()).c_str());
      m_endWeekDayHasBeenSet = true;
    }
    XmlNode endHourNode = resultNode.FirstChild("EndHour");
    if(!endHourNode.IsNull())
    {
      m_endHour = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endHourNode.GetText()).c_str()).c_str());
      m_endHourHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceEventWindowTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_startWeekDayHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartWeekDay=" << WeekDayMapper::GetNameForWeekDay(m_startWeekDay) << "&";
  }

  if(m_startHourHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartHour=" << m_startHour << "&";
  }

  if(m_endWeekDayHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndWeekDay=" << WeekDayMapper::GetNameForWeekDay(m_endWeekDay) << "&";
  }

  if(m_endHourHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndHour=" << m_endHour << "&";
  }

}

void InstanceEventWindowTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_startWeekDayHasBeenSet)
  {
      oStream << location << ".StartWeekDay=" << WeekDayMapper::GetNameForWeekDay(m_startWeekDay) << "&";
  }
  if(m_startHourHasBeenSet)
  {
      oStream << location << ".StartHour=" << m_startHour << "&";
  }
  if(m_endWeekDayHasBeenSet)
  {
      oStream << location << ".EndWeekDay=" << WeekDayMapper::GetNameForWeekDay(m_endWeekDay) << "&";
  }
  if(m_endHourHasBeenSet)
  {
      oStream << location << ".EndHour=" << m_endHour << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
