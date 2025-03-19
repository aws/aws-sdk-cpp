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
   * <p>Describes a schedule that is available for your Scheduled
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstanceAvailability">AWS
   * API Reference</a></p>
   */
  class ScheduledInstanceAvailability
  {
  public:
    AWS_EC2_API ScheduledInstanceAvailability() = default;
    AWS_EC2_API ScheduledInstanceAvailability(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstanceAvailability& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    ScheduledInstanceAvailability& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available instances.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline ScheduledInstanceAvailability& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSlotStartTime() const { return m_firstSlotStartTime; }
    inline bool FirstSlotStartTimeHasBeenSet() const { return m_firstSlotStartTimeHasBeenSet; }
    template<typename FirstSlotStartTimeT = Aws::Utils::DateTime>
    void SetFirstSlotStartTime(FirstSlotStartTimeT&& value) { m_firstSlotStartTimeHasBeenSet = true; m_firstSlotStartTime = std::forward<FirstSlotStartTimeT>(value); }
    template<typename FirstSlotStartTimeT = Aws::Utils::DateTime>
    ScheduledInstanceAvailability& WithFirstSlotStartTime(FirstSlotStartTimeT&& value) { SetFirstSlotStartTime(std::forward<FirstSlotStartTimeT>(value)); return *this;}
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
    ScheduledInstanceAvailability& WithHourlyPrice(HourlyPriceT&& value) { SetHourlyPrice(std::forward<HourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ScheduledInstanceAvailability& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum term. The only possible value is 365 days.</p>
     */
    inline int GetMaxTermDurationInDays() const { return m_maxTermDurationInDays; }
    inline bool MaxTermDurationInDaysHasBeenSet() const { return m_maxTermDurationInDaysHasBeenSet; }
    inline void SetMaxTermDurationInDays(int value) { m_maxTermDurationInDaysHasBeenSet = true; m_maxTermDurationInDays = value; }
    inline ScheduledInstanceAvailability& WithMaxTermDurationInDays(int value) { SetMaxTermDurationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum term. The only possible value is 365 days.</p>
     */
    inline int GetMinTermDurationInDays() const { return m_minTermDurationInDays; }
    inline bool MinTermDurationInDaysHasBeenSet() const { return m_minTermDurationInDaysHasBeenSet; }
    inline void SetMinTermDurationInDays(int value) { m_minTermDurationInDaysHasBeenSet = true; m_minTermDurationInDays = value; }
    inline ScheduledInstanceAvailability& WithMinTermDurationInDays(int value) { SetMinTermDurationInDays(value); return *this;}
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
    ScheduledInstanceAvailability& WithNetworkPlatform(NetworkPlatformT&& value) { SetNetworkPlatform(std::forward<NetworkPlatformT>(value)); return *this;}
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
    ScheduledInstanceAvailability& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline const Aws::String& GetPurchaseToken() const { return m_purchaseToken; }
    inline bool PurchaseTokenHasBeenSet() const { return m_purchaseTokenHasBeenSet; }
    template<typename PurchaseTokenT = Aws::String>
    void SetPurchaseToken(PurchaseTokenT&& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = std::forward<PurchaseTokenT>(value); }
    template<typename PurchaseTokenT = Aws::String>
    ScheduledInstanceAvailability& WithPurchaseToken(PurchaseTokenT&& value) { SetPurchaseToken(std::forward<PurchaseTokenT>(value)); return *this;}
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
    ScheduledInstanceAvailability& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline int GetSlotDurationInHours() const { return m_slotDurationInHours; }
    inline bool SlotDurationInHoursHasBeenSet() const { return m_slotDurationInHoursHasBeenSet; }
    inline void SetSlotDurationInHours(int value) { m_slotDurationInHoursHasBeenSet = true; m_slotDurationInHours = value; }
    inline ScheduledInstanceAvailability& WithSlotDurationInHours(int value) { SetSlotDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline int GetTotalScheduledInstanceHours() const { return m_totalScheduledInstanceHours; }
    inline bool TotalScheduledInstanceHoursHasBeenSet() const { return m_totalScheduledInstanceHoursHasBeenSet; }
    inline void SetTotalScheduledInstanceHours(int value) { m_totalScheduledInstanceHoursHasBeenSet = true; m_totalScheduledInstanceHours = value; }
    inline ScheduledInstanceAvailability& WithTotalScheduledInstanceHours(int value) { SetTotalScheduledInstanceHours(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_firstSlotStartTime{};
    bool m_firstSlotStartTimeHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_maxTermDurationInDays{0};
    bool m_maxTermDurationInDaysHasBeenSet = false;

    int m_minTermDurationInDays{0};
    bool m_minTermDurationInDaysHasBeenSet = false;

    Aws::String m_networkPlatform;
    bool m_networkPlatformHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_purchaseToken;
    bool m_purchaseTokenHasBeenSet = false;

    ScheduledInstanceRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    int m_slotDurationInHours{0};
    bool m_slotDurationInHoursHasBeenSet = false;

    int m_totalScheduledInstanceHours{0};
    bool m_totalScheduledInstanceHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
