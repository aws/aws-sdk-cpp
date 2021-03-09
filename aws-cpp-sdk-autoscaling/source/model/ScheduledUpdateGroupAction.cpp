/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ScheduledUpdateGroupAction.h>
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

ScheduledUpdateGroupAction::ScheduledUpdateGroupAction() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionARNHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

ScheduledUpdateGroupAction::ScheduledUpdateGroupAction(const XmlNode& xmlNode) : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionARNHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledUpdateGroupAction& ScheduledUpdateGroupAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode scheduledActionNameNode = resultNode.FirstChild("ScheduledActionName");
    if(!scheduledActionNameNode.IsNull())
    {
      m_scheduledActionName = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionNameNode.GetText());
      m_scheduledActionNameHasBeenSet = true;
    }
    XmlNode scheduledActionARNNode = resultNode.FirstChild("ScheduledActionARN");
    if(!scheduledActionARNNode.IsNull())
    {
      m_scheduledActionARN = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionARNNode.GetText());
      m_scheduledActionARNHasBeenSet = true;
    }
    XmlNode timeNode = resultNode.FirstChild("Time");
    if(!timeNode.IsNull())
    {
      m_time = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_timeHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode recurrenceNode = resultNode.FirstChild("Recurrence");
    if(!recurrenceNode.IsNull())
    {
      m_recurrence = Aws::Utils::Xml::DecodeEscapedXmlText(recurrenceNode.GetText());
      m_recurrenceHasBeenSet = true;
    }
    XmlNode minSizeNode = resultNode.FirstChild("MinSize");
    if(!minSizeNode.IsNull())
    {
      m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minSizeNode.GetText()).c_str()).c_str());
      m_minSizeHasBeenSet = true;
    }
    XmlNode maxSizeNode = resultNode.FirstChild("MaxSize");
    if(!maxSizeNode.IsNull())
    {
      m_maxSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxSizeNode.GetText()).c_str()).c_str());
      m_maxSizeHasBeenSet = true;
    }
    XmlNode desiredCapacityNode = resultNode.FirstChild("DesiredCapacity");
    if(!desiredCapacityNode.IsNull())
    {
      m_desiredCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredCapacityNode.GetText()).c_str()).c_str());
      m_desiredCapacityHasBeenSet = true;
    }
    XmlNode timeZoneNode = resultNode.FirstChild("TimeZone");
    if(!timeZoneNode.IsNull())
    {
      m_timeZone = Aws::Utils::Xml::DecodeEscapedXmlText(timeZoneNode.GetText());
      m_timeZoneHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledUpdateGroupAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  if(m_scheduledActionARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledActionARN=" << StringUtils::URLEncode(m_scheduledActionARN.c_str()) << "&";
  }

  if(m_timeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Time=" << StringUtils::URLEncode(m_time.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Recurrence=" << StringUtils::URLEncode(m_recurrence.c_str()) << "&";
  }

  if(m_minSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinSize=" << m_minSize << "&";
  }

  if(m_maxSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxSize=" << m_maxSize << "&";
  }

  if(m_desiredCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredCapacity=" << m_desiredCapacity << "&";
  }

  if(m_timeZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimeZone=" << StringUtils::URLEncode(m_timeZone.c_str()) << "&";
  }

}

void ScheduledUpdateGroupAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }
  if(m_scheduledActionARNHasBeenSet)
  {
      oStream << location << ".ScheduledActionARN=" << StringUtils::URLEncode(m_scheduledActionARN.c_str()) << "&";
  }
  if(m_timeHasBeenSet)
  {
      oStream << location << ".Time=" << StringUtils::URLEncode(m_time.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_recurrenceHasBeenSet)
  {
      oStream << location << ".Recurrence=" << StringUtils::URLEncode(m_recurrence.c_str()) << "&";
  }
  if(m_minSizeHasBeenSet)
  {
      oStream << location << ".MinSize=" << m_minSize << "&";
  }
  if(m_maxSizeHasBeenSet)
  {
      oStream << location << ".MaxSize=" << m_maxSize << "&";
  }
  if(m_desiredCapacityHasBeenSet)
  {
      oStream << location << ".DesiredCapacity=" << m_desiredCapacity << "&";
  }
  if(m_timeZoneHasBeenSet)
  {
      oStream << location << ".TimeZone=" << StringUtils::URLEncode(m_timeZone.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
