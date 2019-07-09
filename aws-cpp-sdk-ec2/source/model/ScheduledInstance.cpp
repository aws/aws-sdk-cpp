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

#include <aws/ec2/model/ScheduledInstance.h>
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

ScheduledInstance::ScheduledInstance() : 
    m_availabilityZoneHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkPlatformHasBeenSet(false),
    m_nextSlotStartTimeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_previousSlotEndTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_scheduledInstanceIdHasBeenSet(false),
    m_slotDurationInHours(0),
    m_slotDurationInHoursHasBeenSet(false),
    m_termEndDateHasBeenSet(false),
    m_termStartDateHasBeenSet(false),
    m_totalScheduledInstanceHours(0),
    m_totalScheduledInstanceHoursHasBeenSet(false)
{
}

ScheduledInstance::ScheduledInstance(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkPlatformHasBeenSet(false),
    m_nextSlotStartTimeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_previousSlotEndTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_scheduledInstanceIdHasBeenSet(false),
    m_slotDurationInHours(0),
    m_slotDurationInHoursHasBeenSet(false),
    m_termEndDateHasBeenSet(false),
    m_termStartDateHasBeenSet(false),
    m_totalScheduledInstanceHours(0),
    m_totalScheduledInstanceHoursHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstance& ScheduledInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = hourlyPriceNode.GetText();
      m_hourlyPriceHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(instanceCountNode.GetText().c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode networkPlatformNode = resultNode.FirstChild("networkPlatform");
    if(!networkPlatformNode.IsNull())
    {
      m_networkPlatform = networkPlatformNode.GetText();
      m_networkPlatformHasBeenSet = true;
    }
    XmlNode nextSlotStartTimeNode = resultNode.FirstChild("nextSlotStartTime");
    if(!nextSlotStartTimeNode.IsNull())
    {
      m_nextSlotStartTime = DateTime(StringUtils::Trim(nextSlotStartTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nextSlotStartTimeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = platformNode.GetText();
      m_platformHasBeenSet = true;
    }
    XmlNode previousSlotEndTimeNode = resultNode.FirstChild("previousSlotEndTime");
    if(!previousSlotEndTimeNode.IsNull())
    {
      m_previousSlotEndTime = DateTime(StringUtils::Trim(previousSlotEndTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_previousSlotEndTimeHasBeenSet = true;
    }
    XmlNode recurrenceNode = resultNode.FirstChild("recurrence");
    if(!recurrenceNode.IsNull())
    {
      m_recurrence = recurrenceNode;
      m_recurrenceHasBeenSet = true;
    }
    XmlNode scheduledInstanceIdNode = resultNode.FirstChild("scheduledInstanceId");
    if(!scheduledInstanceIdNode.IsNull())
    {
      m_scheduledInstanceId = scheduledInstanceIdNode.GetText();
      m_scheduledInstanceIdHasBeenSet = true;
    }
    XmlNode slotDurationInHoursNode = resultNode.FirstChild("slotDurationInHours");
    if(!slotDurationInHoursNode.IsNull())
    {
      m_slotDurationInHours = StringUtils::ConvertToInt32(StringUtils::Trim(slotDurationInHoursNode.GetText().c_str()).c_str());
      m_slotDurationInHoursHasBeenSet = true;
    }
    XmlNode termEndDateNode = resultNode.FirstChild("termEndDate");
    if(!termEndDateNode.IsNull())
    {
      m_termEndDate = DateTime(StringUtils::Trim(termEndDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_termEndDateHasBeenSet = true;
    }
    XmlNode termStartDateNode = resultNode.FirstChild("termStartDate");
    if(!termStartDateNode.IsNull())
    {
      m_termStartDate = DateTime(StringUtils::Trim(termStartDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_termStartDateHasBeenSet = true;
    }
    XmlNode totalScheduledInstanceHoursNode = resultNode.FirstChild("totalScheduledInstanceHours");
    if(!totalScheduledInstanceHoursNode.IsNull())
    {
      m_totalScheduledInstanceHours = StringUtils::ConvertToInt32(StringUtils::Trim(totalScheduledInstanceHoursNode.GetText().c_str()).c_str());
      m_totalScheduledInstanceHoursHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_networkPlatformHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkPlatform=" << StringUtils::URLEncode(m_networkPlatform.c_str()) << "&";
  }

  if(m_nextSlotStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NextSlotStartTime=" << StringUtils::URLEncode(m_nextSlotStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_previousSlotEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreviousSlotEndTime=" << StringUtils::URLEncode(m_previousSlotEndTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
      Aws::StringStream recurrenceLocationAndMemberSs;
      recurrenceLocationAndMemberSs << location << index << locationValue << ".Recurrence";
      m_recurrence.OutputToStream(oStream, recurrenceLocationAndMemberSs.str().c_str());
  }

  if(m_scheduledInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledInstanceId=" << StringUtils::URLEncode(m_scheduledInstanceId.c_str()) << "&";
  }

  if(m_slotDurationInHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".SlotDurationInHours=" << m_slotDurationInHours << "&";
  }

  if(m_termEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".TermEndDate=" << StringUtils::URLEncode(m_termEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_termStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".TermStartDate=" << StringUtils::URLEncode(m_termStartDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_totalScheduledInstanceHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalScheduledInstanceHours=" << m_totalScheduledInstanceHours << "&";
  }

}

void ScheduledInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_networkPlatformHasBeenSet)
  {
      oStream << location << ".NetworkPlatform=" << StringUtils::URLEncode(m_networkPlatform.c_str()) << "&";
  }
  if(m_nextSlotStartTimeHasBeenSet)
  {
      oStream << location << ".NextSlotStartTime=" << StringUtils::URLEncode(m_nextSlotStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_previousSlotEndTimeHasBeenSet)
  {
      oStream << location << ".PreviousSlotEndTime=" << StringUtils::URLEncode(m_previousSlotEndTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_recurrenceHasBeenSet)
  {
      Aws::String recurrenceLocationAndMember(location);
      recurrenceLocationAndMember += ".Recurrence";
      m_recurrence.OutputToStream(oStream, recurrenceLocationAndMember.c_str());
  }
  if(m_scheduledInstanceIdHasBeenSet)
  {
      oStream << location << ".ScheduledInstanceId=" << StringUtils::URLEncode(m_scheduledInstanceId.c_str()) << "&";
  }
  if(m_slotDurationInHoursHasBeenSet)
  {
      oStream << location << ".SlotDurationInHours=" << m_slotDurationInHours << "&";
  }
  if(m_termEndDateHasBeenSet)
  {
      oStream << location << ".TermEndDate=" << StringUtils::URLEncode(m_termEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_termStartDateHasBeenSet)
  {
      oStream << location << ".TermStartDate=" << StringUtils::URLEncode(m_termStartDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_totalScheduledInstanceHoursHasBeenSet)
  {
      oStream << location << ".TotalScheduledInstanceHours=" << m_totalScheduledInstanceHours << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
