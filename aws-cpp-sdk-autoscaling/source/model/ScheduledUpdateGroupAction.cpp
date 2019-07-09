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
    m_desiredCapacityHasBeenSet(false)
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
    m_desiredCapacityHasBeenSet(false)
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
      m_autoScalingGroupName = autoScalingGroupNameNode.GetText();
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode scheduledActionNameNode = resultNode.FirstChild("ScheduledActionName");
    if(!scheduledActionNameNode.IsNull())
    {
      m_scheduledActionName = scheduledActionNameNode.GetText();
      m_scheduledActionNameHasBeenSet = true;
    }
    XmlNode scheduledActionARNNode = resultNode.FirstChild("ScheduledActionARN");
    if(!scheduledActionARNNode.IsNull())
    {
      m_scheduledActionARN = scheduledActionARNNode.GetText();
      m_scheduledActionARNHasBeenSet = true;
    }
    XmlNode timeNode = resultNode.FirstChild("Time");
    if(!timeNode.IsNull())
    {
      m_time = DateTime(StringUtils::Trim(timeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_timeHasBeenSet = true;
    }
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
    XmlNode recurrenceNode = resultNode.FirstChild("Recurrence");
    if(!recurrenceNode.IsNull())
    {
      m_recurrence = recurrenceNode.GetText();
      m_recurrenceHasBeenSet = true;
    }
    XmlNode minSizeNode = resultNode.FirstChild("MinSize");
    if(!minSizeNode.IsNull())
    {
      m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(minSizeNode.GetText().c_str()).c_str());
      m_minSizeHasBeenSet = true;
    }
    XmlNode maxSizeNode = resultNode.FirstChild("MaxSize");
    if(!maxSizeNode.IsNull())
    {
      m_maxSize = StringUtils::ConvertToInt32(StringUtils::Trim(maxSizeNode.GetText().c_str()).c_str());
      m_maxSizeHasBeenSet = true;
    }
    XmlNode desiredCapacityNode = resultNode.FirstChild("DesiredCapacity");
    if(!desiredCapacityNode.IsNull())
    {
      m_desiredCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(desiredCapacityNode.GetText().c_str()).c_str());
      m_desiredCapacityHasBeenSet = true;
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
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
