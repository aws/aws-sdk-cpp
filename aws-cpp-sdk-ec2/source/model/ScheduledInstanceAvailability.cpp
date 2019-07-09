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

#include <aws/ec2/model/ScheduledInstanceAvailability.h>
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

ScheduledInstanceAvailability::ScheduledInstanceAvailability() : 
    m_availabilityZoneHasBeenSet(false),
    m_availableInstanceCount(0),
    m_availableInstanceCountHasBeenSet(false),
    m_firstSlotStartTimeHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_maxTermDurationInDays(0),
    m_maxTermDurationInDaysHasBeenSet(false),
    m_minTermDurationInDays(0),
    m_minTermDurationInDaysHasBeenSet(false),
    m_networkPlatformHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_purchaseTokenHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_slotDurationInHours(0),
    m_slotDurationInHoursHasBeenSet(false),
    m_totalScheduledInstanceHours(0),
    m_totalScheduledInstanceHoursHasBeenSet(false)
{
}

ScheduledInstanceAvailability::ScheduledInstanceAvailability(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_availableInstanceCount(0),
    m_availableInstanceCountHasBeenSet(false),
    m_firstSlotStartTimeHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_maxTermDurationInDays(0),
    m_maxTermDurationInDaysHasBeenSet(false),
    m_minTermDurationInDays(0),
    m_minTermDurationInDaysHasBeenSet(false),
    m_networkPlatformHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_purchaseTokenHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_slotDurationInHours(0),
    m_slotDurationInHoursHasBeenSet(false),
    m_totalScheduledInstanceHours(0),
    m_totalScheduledInstanceHoursHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstanceAvailability& ScheduledInstanceAvailability::operator =(const XmlNode& xmlNode)
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
    XmlNode availableInstanceCountNode = resultNode.FirstChild("availableInstanceCount");
    if(!availableInstanceCountNode.IsNull())
    {
      m_availableInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(availableInstanceCountNode.GetText().c_str()).c_str());
      m_availableInstanceCountHasBeenSet = true;
    }
    XmlNode firstSlotStartTimeNode = resultNode.FirstChild("firstSlotStartTime");
    if(!firstSlotStartTimeNode.IsNull())
    {
      m_firstSlotStartTime = DateTime(StringUtils::Trim(firstSlotStartTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_firstSlotStartTimeHasBeenSet = true;
    }
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = hourlyPriceNode.GetText();
      m_hourlyPriceHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode maxTermDurationInDaysNode = resultNode.FirstChild("maxTermDurationInDays");
    if(!maxTermDurationInDaysNode.IsNull())
    {
      m_maxTermDurationInDays = StringUtils::ConvertToInt32(StringUtils::Trim(maxTermDurationInDaysNode.GetText().c_str()).c_str());
      m_maxTermDurationInDaysHasBeenSet = true;
    }
    XmlNode minTermDurationInDaysNode = resultNode.FirstChild("minTermDurationInDays");
    if(!minTermDurationInDaysNode.IsNull())
    {
      m_minTermDurationInDays = StringUtils::ConvertToInt32(StringUtils::Trim(minTermDurationInDaysNode.GetText().c_str()).c_str());
      m_minTermDurationInDaysHasBeenSet = true;
    }
    XmlNode networkPlatformNode = resultNode.FirstChild("networkPlatform");
    if(!networkPlatformNode.IsNull())
    {
      m_networkPlatform = networkPlatformNode.GetText();
      m_networkPlatformHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = platformNode.GetText();
      m_platformHasBeenSet = true;
    }
    XmlNode purchaseTokenNode = resultNode.FirstChild("purchaseToken");
    if(!purchaseTokenNode.IsNull())
    {
      m_purchaseToken = purchaseTokenNode.GetText();
      m_purchaseTokenHasBeenSet = true;
    }
    XmlNode recurrenceNode = resultNode.FirstChild("recurrence");
    if(!recurrenceNode.IsNull())
    {
      m_recurrence = recurrenceNode;
      m_recurrenceHasBeenSet = true;
    }
    XmlNode slotDurationInHoursNode = resultNode.FirstChild("slotDurationInHours");
    if(!slotDurationInHoursNode.IsNull())
    {
      m_slotDurationInHours = StringUtils::ConvertToInt32(StringUtils::Trim(slotDurationInHoursNode.GetText().c_str()).c_str());
      m_slotDurationInHoursHasBeenSet = true;
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

void ScheduledInstanceAvailability::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availableInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableInstanceCount=" << m_availableInstanceCount << "&";
  }

  if(m_firstSlotStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FirstSlotStartTime=" << StringUtils::URLEncode(m_firstSlotStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_maxTermDurationInDaysHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxTermDurationInDays=" << m_maxTermDurationInDays << "&";
  }

  if(m_minTermDurationInDaysHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinTermDurationInDays=" << m_minTermDurationInDays << "&";
  }

  if(m_networkPlatformHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkPlatform=" << StringUtils::URLEncode(m_networkPlatform.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_purchaseTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".PurchaseToken=" << StringUtils::URLEncode(m_purchaseToken.c_str()) << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
      Aws::StringStream recurrenceLocationAndMemberSs;
      recurrenceLocationAndMemberSs << location << index << locationValue << ".Recurrence";
      m_recurrence.OutputToStream(oStream, recurrenceLocationAndMemberSs.str().c_str());
  }

  if(m_slotDurationInHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".SlotDurationInHours=" << m_slotDurationInHours << "&";
  }

  if(m_totalScheduledInstanceHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalScheduledInstanceHours=" << m_totalScheduledInstanceHours << "&";
  }

}

void ScheduledInstanceAvailability::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availableInstanceCountHasBeenSet)
  {
      oStream << location << ".AvailableInstanceCount=" << m_availableInstanceCount << "&";
  }
  if(m_firstSlotStartTimeHasBeenSet)
  {
      oStream << location << ".FirstSlotStartTime=" << StringUtils::URLEncode(m_firstSlotStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_maxTermDurationInDaysHasBeenSet)
  {
      oStream << location << ".MaxTermDurationInDays=" << m_maxTermDurationInDays << "&";
  }
  if(m_minTermDurationInDaysHasBeenSet)
  {
      oStream << location << ".MinTermDurationInDays=" << m_minTermDurationInDays << "&";
  }
  if(m_networkPlatformHasBeenSet)
  {
      oStream << location << ".NetworkPlatform=" << StringUtils::URLEncode(m_networkPlatform.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_purchaseTokenHasBeenSet)
  {
      oStream << location << ".PurchaseToken=" << StringUtils::URLEncode(m_purchaseToken.c_str()) << "&";
  }
  if(m_recurrenceHasBeenSet)
  {
      Aws::String recurrenceLocationAndMember(location);
      recurrenceLocationAndMember += ".Recurrence";
      m_recurrence.OutputToStream(oStream, recurrenceLocationAndMember.c_str());
  }
  if(m_slotDurationInHoursHasBeenSet)
  {
      oStream << location << ".SlotDurationInHours=" << m_slotDurationInHours << "&";
  }
  if(m_totalScheduledInstanceHoursHasBeenSet)
  {
      oStream << location << ".TotalScheduledInstanceHours=" << m_totalScheduledInstanceHours << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
