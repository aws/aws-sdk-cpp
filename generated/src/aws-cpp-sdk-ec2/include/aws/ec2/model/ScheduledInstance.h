/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScheduledInstance
  {
  public:
    AWS_EC2_API ScheduledInstance() = default;
    AWS_EC2_API ScheduledInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ScheduledInstance& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Scheduled Instance was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ScheduledInstance& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline const Aws::String& GetHourlyPrice() const { return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    template<typename HourlyPriceT = Aws::String>
    void SetHourlyPrice(HourlyPriceT&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::forward<HourlyPriceT>(value); }
    template<typename HourlyPriceT = Aws::String>
    ScheduledInstance& WithHourlyPrice(HourlyPriceT&& value) { SetHourlyPrice(std::forward<HourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ScheduledInstance& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ScheduledInstance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network platform.</p>
     */
    inline const Aws::String& GetNetworkPlatform() const { return m_networkPlatform; }
    inline bool NetworkPlatformHasBeenSet() const { return m_networkPlatformHasBeenSet; }
    template<typename NetworkPlatformT = Aws::String>
    void SetNetworkPlatform(NetworkPlatformT&& value) { m_networkPlatformHasBeenSet = true; m_networkPlatform = std::forward<NetworkPlatformT>(value); }
    template<typename NetworkPlatformT = Aws::String>
    ScheduledInstance& WithNetworkPlatform(NetworkPlatformT&& value) { SetNetworkPlatform(std::forward<NetworkPlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time for the next schedule to start.</p>
     */
    inline const Aws::Utils::DateTime& GetNextSlotStartTime() const { return m_nextSlotStartTime; }
    inline bool NextSlotStartTimeHasBeenSet() const { return m_nextSlotStartTimeHasBeenSet; }
    template<typename NextSlotStartTimeT = Aws::Utils::DateTime>
    void SetNextSlotStartTime(NextSlotStartTimeT&& value) { m_nextSlotStartTimeHasBeenSet = true; m_nextSlotStartTime = std::forward<NextSlotStartTimeT>(value); }
    template<typename NextSlotStartTimeT = Aws::Utils::DateTime>
    ScheduledInstance& WithNextSlotStartTime(NextSlotStartTimeT&& value) { SetNextSlotStartTime(std::forward<NextSlotStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    ScheduledInstance& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the previous schedule ended or will end.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousSlotEndTime() const { return m_previousSlotEndTime; }
    inline bool PreviousSlotEndTimeHasBeenSet() const { return m_previousSlotEndTimeHasBeenSet; }
    template<typename PreviousSlotEndTimeT = Aws::Utils::DateTime>
    void SetPreviousSlotEndTime(PreviousSlotEndTimeT&& value) { m_previousSlotEndTimeHasBeenSet = true; m_previousSlotEndTime = std::forward<PreviousSlotEndTimeT>(value); }
    template<typename PreviousSlotEndTimeT = Aws::Utils::DateTime>
    ScheduledInstance& WithPreviousSlotEndTime(PreviousSlotEndTimeT&& value) { SetPreviousSlotEndTime(std::forward<PreviousSlotEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule recurrence.</p>
     */
    inline const ScheduledInstanceRecurrence& GetRecurrence() const { return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    template<typename RecurrenceT = ScheduledInstanceRecurrence>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = ScheduledInstanceRecurrence>
    ScheduledInstance& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline const Aws::String& GetScheduledInstanceId() const { return m_scheduledInstanceId; }
    inline bool ScheduledInstanceIdHasBeenSet() const { return m_scheduledInstanceIdHasBeenSet; }
    template<typename ScheduledInstanceIdT = Aws::String>
    void SetScheduledInstanceId(ScheduledInstanceIdT&& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = std::forward<ScheduledInstanceIdT>(value); }
    template<typename ScheduledInstanceIdT = Aws::String>
    ScheduledInstance& WithScheduledInstanceId(ScheduledInstanceIdT&& value) { SetScheduledInstanceId(std::forward<ScheduledInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline int GetSlotDurationInHours() const { return m_slotDurationInHours; }
    inline bool SlotDurationInHoursHasBeenSet() const { return m_slotDurationInHoursHasBeenSet; }
    inline void SetSlotDurationInHours(int value) { m_slotDurationInHoursHasBeenSet = true; m_slotDurationInHours = value; }
    inline ScheduledInstance& WithSlotDurationInHours(int value) { SetSlotDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the Scheduled Instance.</p>
     */
    inline const Aws::Utils::DateTime& GetTermEndDate() const { return m_termEndDate; }
    inline bool TermEndDateHasBeenSet() const { return m_termEndDateHasBeenSet; }
    template<typename TermEndDateT = Aws::Utils::DateTime>
    void SetTermEndDate(TermEndDateT&& value) { m_termEndDateHasBeenSet = true; m_termEndDate = std::forward<TermEndDateT>(value); }
    template<typename TermEndDateT = Aws::Utils::DateTime>
    ScheduledInstance& WithTermEndDate(TermEndDateT&& value) { SetTermEndDate(std::forward<TermEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the Scheduled Instance.</p>
     */
    inline const Aws::Utils::DateTime& GetTermStartDate() const { return m_termStartDate; }
    inline bool TermStartDateHasBeenSet() const { return m_termStartDateHasBeenSet; }
    template<typename TermStartDateT = Aws::Utils::DateTime>
    void SetTermStartDate(TermStartDateT&& value) { m_termStartDateHasBeenSet = true; m_termStartDate = std::forward<TermStartDateT>(value); }
    template<typename TermStartDateT = Aws::Utils::DateTime>
    ScheduledInstance& WithTermStartDate(TermStartDateT&& value) { SetTermStartDate(std::forward<TermStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline int GetTotalScheduledInstanceHours() const { return m_totalScheduledInstanceHours; }
    inline bool TotalScheduledInstanceHoursHasBeenSet() const { return m_totalScheduledInstanceHoursHasBeenSet; }
    inline void SetTotalScheduledInstanceHours(int value) { m_totalScheduledInstanceHoursHasBeenSet = true; m_totalScheduledInstanceHours = value; }
    inline ScheduledInstance& WithTotalScheduledInstanceHours(int value) { SetTotalScheduledInstanceHours(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_networkPlatform;
    bool m_networkPlatformHasBeenSet = false;

    Aws::Utils::DateTime m_nextSlotStartTime{};
    bool m_nextSlotStartTimeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_previousSlotEndTime{};
    bool m_previousSlotEndTimeHasBeenSet = false;

    ScheduledInstanceRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    Aws::String m_scheduledInstanceId;
    bool m_scheduledInstanceIdHasBeenSet = false;

    int m_slotDurationInHours{0};
    bool m_slotDurationInHoursHasBeenSet = false;

    Aws::Utils::DateTime m_termEndDate{};
    bool m_termEndDateHasBeenSet = false;

    Aws::Utils::DateTime m_termStartDate{};
    bool m_termStartDateHasBeenSet = false;

    int m_totalScheduledInstanceHours{0};
    bool m_totalScheduledInstanceHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
