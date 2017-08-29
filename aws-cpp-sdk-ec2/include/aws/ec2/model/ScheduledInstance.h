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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ScheduledInstanceRecurrence.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Scheduled Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstance">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstance
  {
  public:
    ScheduledInstance();
    ScheduledInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline ScheduledInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline ScheduledInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline ScheduledInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline ScheduledInstance& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline ScheduledInstance& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline ScheduledInstance& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline ScheduledInstance& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline ScheduledInstance& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}


    /**
     * <p>The number of instances.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances.</p>
     */
    inline ScheduledInstance& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline const Aws::String& GetNetworkPlatform() const{ return m_networkPlatform; }

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline void SetNetworkPlatform(const Aws::String& value) { m_networkPlatformHasBeenSet = true; m_networkPlatform = value; }

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline void SetNetworkPlatform(Aws::String&& value) { m_networkPlatformHasBeenSet = true; m_networkPlatform = std::move(value); }

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline void SetNetworkPlatform(const char* value) { m_networkPlatformHasBeenSet = true; m_networkPlatform.assign(value); }

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline ScheduledInstance& WithNetworkPlatform(const Aws::String& value) { SetNetworkPlatform(value); return *this;}

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline ScheduledInstance& WithNetworkPlatform(Aws::String&& value) { SetNetworkPlatform(std::move(value)); return *this;}

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline ScheduledInstance& WithNetworkPlatform(const char* value) { SetNetworkPlatform(value); return *this;}


    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline const Aws::Utils::DateTime& GetNextSlotStartTime() const{ return m_nextSlotStartTime; }

    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline void SetNextSlotStartTime(const Aws::Utils::DateTime& value) { m_nextSlotStartTimeHasBeenSet = true; m_nextSlotStartTime = value; }

    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline void SetNextSlotStartTime(Aws::Utils::DateTime&& value) { m_nextSlotStartTimeHasBeenSet = true; m_nextSlotStartTime = std::move(value); }

    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline ScheduledInstance& WithNextSlotStartTime(const Aws::Utils::DateTime& value) { SetNextSlotStartTime(value); return *this;}

    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline ScheduledInstance& WithNextSlotStartTime(Aws::Utils::DateTime&& value) { SetNextSlotStartTime(std::move(value)); return *this;}


    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline ScheduledInstance& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline ScheduledInstance& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline ScheduledInstance& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousSlotEndTime() const{ return m_previousSlotEndTime; }

    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline void SetPreviousSlotEndTime(const Aws::Utils::DateTime& value) { m_previousSlotEndTimeHasBeenSet = true; m_previousSlotEndTime = value; }

    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline void SetPreviousSlotEndTime(Aws::Utils::DateTime&& value) { m_previousSlotEndTimeHasBeenSet = true; m_previousSlotEndTime = std::move(value); }

    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline ScheduledInstance& WithPreviousSlotEndTime(const Aws::Utils::DateTime& value) { SetPreviousSlotEndTime(value); return *this;}

    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline ScheduledInstance& WithPreviousSlotEndTime(Aws::Utils::DateTime&& value) { SetPreviousSlotEndTime(std::move(value)); return *this;}


    /**
     * <p>The schedule recurrence.</p>
     */
    inline const ScheduledInstanceRecurrence& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The schedule recurrence.</p>
     */
    inline void SetRecurrence(const ScheduledInstanceRecurrence& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The schedule recurrence.</p>
     */
    inline void SetRecurrence(ScheduledInstanceRecurrence&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The schedule recurrence.</p>
     */
    inline ScheduledInstance& WithRecurrence(const ScheduledInstanceRecurrence& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The schedule recurrence.</p>
     */
    inline ScheduledInstance& WithRecurrence(ScheduledInstanceRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}


    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline const Aws::String& GetScheduledInstanceId() const{ return m_scheduledInstanceId; }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(const Aws::String& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = value; }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(Aws::String&& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = std::move(value); }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(const char* value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId.assign(value); }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline ScheduledInstance& WithScheduledInstanceId(const Aws::String& value) { SetScheduledInstanceId(value); return *this;}

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline ScheduledInstance& WithScheduledInstanceId(Aws::String&& value) { SetScheduledInstanceId(std::move(value)); return *this;}

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline ScheduledInstance& WithScheduledInstanceId(const char* value) { SetScheduledInstanceId(value); return *this;}


    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline int GetSlotDurationInHours() const{ return m_slotDurationInHours; }

    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline void SetSlotDurationInHours(int value) { m_slotDurationInHoursHasBeenSet = true; m_slotDurationInHours = value; }

    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline ScheduledInstance& WithSlotDurationInHours(int value) { SetSlotDurationInHours(value); return *this;}


    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline const Aws::Utils::DateTime& GetTermEndDate() const{ return m_termEndDate; }

    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline void SetTermEndDate(const Aws::Utils::DateTime& value) { m_termEndDateHasBeenSet = true; m_termEndDate = value; }

    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline void SetTermEndDate(Aws::Utils::DateTime&& value) { m_termEndDateHasBeenSet = true; m_termEndDate = std::move(value); }

    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline ScheduledInstance& WithTermEndDate(const Aws::Utils::DateTime& value) { SetTermEndDate(value); return *this;}

    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline ScheduledInstance& WithTermEndDate(Aws::Utils::DateTime&& value) { SetTermEndDate(std::move(value)); return *this;}


    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline const Aws::Utils::DateTime& GetTermStartDate() const{ return m_termStartDate; }

    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline void SetTermStartDate(const Aws::Utils::DateTime& value) { m_termStartDateHasBeenSet = true; m_termStartDate = value; }

    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline void SetTermStartDate(Aws::Utils::DateTime&& value) { m_termStartDateHasBeenSet = true; m_termStartDate = std::move(value); }

    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline ScheduledInstance& WithTermStartDate(const Aws::Utils::DateTime& value) { SetTermStartDate(value); return *this;}

    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline ScheduledInstance& WithTermStartDate(Aws::Utils::DateTime&& value) { SetTermStartDate(std::move(value)); return *this;}


    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline int GetTotalScheduledInstanceHours() const{ return m_totalScheduledInstanceHours; }

    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline void SetTotalScheduledInstanceHours(int value) { m_totalScheduledInstanceHoursHasBeenSet = true; m_totalScheduledInstanceHours = value; }

    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline ScheduledInstance& WithTotalScheduledInstanceHours(int value) { SetTotalScheduledInstanceHours(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_networkPlatform;
    bool m_networkPlatformHasBeenSet;

    Aws::Utils::DateTime m_nextSlotStartTime;
    bool m_nextSlotStartTimeHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::Utils::DateTime m_previousSlotEndTime;
    bool m_previousSlotEndTimeHasBeenSet;

    ScheduledInstanceRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet;

    Aws::String m_scheduledInstanceId;
    bool m_scheduledInstanceIdHasBeenSet;

    int m_slotDurationInHours;
    bool m_slotDurationInHoursHasBeenSet;

    Aws::Utils::DateTime m_termEndDate;
    bool m_termEndDateHasBeenSet;

    Aws::Utils::DateTime m_termStartDate;
    bool m_termStartDateHasBeenSet;

    int m_totalScheduledInstanceHours;
    bool m_totalScheduledInstanceHoursHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
