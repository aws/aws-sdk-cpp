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
    AWS_EC2_API ScheduledInstanceAvailability();
    AWS_EC2_API ScheduledInstanceAvailability(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstanceAvailability& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ScheduledInstanceAvailability& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ScheduledInstanceAvailability& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available instances.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline ScheduledInstanceAvailability& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSlotStartTime() const{ return m_firstSlotStartTime; }
    inline bool FirstSlotStartTimeHasBeenSet() const { return m_firstSlotStartTimeHasBeenSet; }
    inline void SetFirstSlotStartTime(const Aws::Utils::DateTime& value) { m_firstSlotStartTimeHasBeenSet = true; m_firstSlotStartTime = value; }
    inline void SetFirstSlotStartTime(Aws::Utils::DateTime&& value) { m_firstSlotStartTimeHasBeenSet = true; m_firstSlotStartTime = std::move(value); }
    inline ScheduledInstanceAvailability& WithFirstSlotStartTime(const Aws::Utils::DateTime& value) { SetFirstSlotStartTime(value); return *this;}
    inline ScheduledInstanceAvailability& WithFirstSlotStartTime(Aws::Utils::DateTime&& value) { SetFirstSlotStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }
    inline ScheduledInstanceAvailability& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}
    inline ScheduledInstanceAvailability& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline ScheduledInstanceAvailability& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline ScheduledInstanceAvailability& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum term. The only possible value is 365 days.</p>
     */
    inline int GetMaxTermDurationInDays() const{ return m_maxTermDurationInDays; }
    inline bool MaxTermDurationInDaysHasBeenSet() const { return m_maxTermDurationInDaysHasBeenSet; }
    inline void SetMaxTermDurationInDays(int value) { m_maxTermDurationInDaysHasBeenSet = true; m_maxTermDurationInDays = value; }
    inline ScheduledInstanceAvailability& WithMaxTermDurationInDays(int value) { SetMaxTermDurationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum term. The only possible value is 365 days.</p>
     */
    inline int GetMinTermDurationInDays() const{ return m_minTermDurationInDays; }
    inline bool MinTermDurationInDaysHasBeenSet() const { return m_minTermDurationInDaysHasBeenSet; }
    inline void SetMinTermDurationInDays(int value) { m_minTermDurationInDaysHasBeenSet = true; m_minTermDurationInDays = value; }
    inline ScheduledInstanceAvailability& WithMinTermDurationInDays(int value) { SetMinTermDurationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network platform.</p>
     */
    inline const Aws::String& GetNetworkPlatform() const{ return m_networkPlatform; }
    inline bool NetworkPlatformHasBeenSet() const { return m_networkPlatformHasBeenSet; }
    inline void SetNetworkPlatform(const Aws::String& value) { m_networkPlatformHasBeenSet = true; m_networkPlatform = value; }
    inline void SetNetworkPlatform(Aws::String&& value) { m_networkPlatformHasBeenSet = true; m_networkPlatform = std::move(value); }
    inline void SetNetworkPlatform(const char* value) { m_networkPlatformHasBeenSet = true; m_networkPlatform.assign(value); }
    inline ScheduledInstanceAvailability& WithNetworkPlatform(const Aws::String& value) { SetNetworkPlatform(value); return *this;}
    inline ScheduledInstanceAvailability& WithNetworkPlatform(Aws::String&& value) { SetNetworkPlatform(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithNetworkPlatform(const char* value) { SetNetworkPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline ScheduledInstanceAvailability& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline ScheduledInstanceAvailability& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline const Aws::String& GetPurchaseToken() const{ return m_purchaseToken; }
    inline bool PurchaseTokenHasBeenSet() const { return m_purchaseTokenHasBeenSet; }
    inline void SetPurchaseToken(const Aws::String& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = value; }
    inline void SetPurchaseToken(Aws::String&& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = std::move(value); }
    inline void SetPurchaseToken(const char* value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken.assign(value); }
    inline ScheduledInstanceAvailability& WithPurchaseToken(const Aws::String& value) { SetPurchaseToken(value); return *this;}
    inline ScheduledInstanceAvailability& WithPurchaseToken(Aws::String&& value) { SetPurchaseToken(std::move(value)); return *this;}
    inline ScheduledInstanceAvailability& WithPurchaseToken(const char* value) { SetPurchaseToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule recurrence.</p>
     */
    inline const ScheduledInstanceRecurrence& GetRecurrence() const{ return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    inline void SetRecurrence(const ScheduledInstanceRecurrence& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }
    inline void SetRecurrence(ScheduledInstanceRecurrence&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }
    inline ScheduledInstanceAvailability& WithRecurrence(const ScheduledInstanceRecurrence& value) { SetRecurrence(value); return *this;}
    inline ScheduledInstanceAvailability& WithRecurrence(ScheduledInstanceRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours in the schedule.</p>
     */
    inline int GetSlotDurationInHours() const{ return m_slotDurationInHours; }
    inline bool SlotDurationInHoursHasBeenSet() const { return m_slotDurationInHoursHasBeenSet; }
    inline void SetSlotDurationInHours(int value) { m_slotDurationInHoursHasBeenSet = true; m_slotDurationInHours = value; }
    inline ScheduledInstanceAvailability& WithSlotDurationInHours(int value) { SetSlotDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours for a single instance for the entire term.</p>
     */
    inline int GetTotalScheduledInstanceHours() const{ return m_totalScheduledInstanceHours; }
    inline bool TotalScheduledInstanceHoursHasBeenSet() const { return m_totalScheduledInstanceHoursHasBeenSet; }
    inline void SetTotalScheduledInstanceHours(int value) { m_totalScheduledInstanceHoursHasBeenSet = true; m_totalScheduledInstanceHours = value; }
    inline ScheduledInstanceAvailability& WithTotalScheduledInstanceHours(int value) { SetTotalScheduledInstanceHours(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_firstSlotStartTime;
    bool m_firstSlotStartTimeHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_maxTermDurationInDays;
    bool m_maxTermDurationInDaysHasBeenSet = false;

    int m_minTermDurationInDays;
    bool m_minTermDurationInDaysHasBeenSet = false;

    Aws::String m_networkPlatform;
    bool m_networkPlatformHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_purchaseToken;
    bool m_purchaseTokenHasBeenSet = false;

    ScheduledInstanceRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    int m_slotDurationInHours;
    bool m_slotDurationInHoursHasBeenSet = false;

    int m_totalScheduledInstanceHours;
    bool m_totalScheduledInstanceHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
