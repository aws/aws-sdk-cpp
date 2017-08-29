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
   * <p>Describes a schedule that is available for your Scheduled
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstanceAvailability">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstanceAvailability
  {
  public:
    ScheduledInstanceAvailability();
    ScheduledInstanceAvailability(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstanceAvailability& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ScheduledInstanceAvailability& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline ScheduledInstanceAvailability& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline ScheduledInstanceAvailability& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The number of available instances.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }

    /**
     * <p>The number of available instances.</p>
     */
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }

    /**
     * <p>The number of available instances.</p>
     */
    inline ScheduledInstanceAvailability& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}


    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSlotStartTime() const{ return m_firstSlotStartTime; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetFirstSlotStartTime(const Aws::Utils::DateTime& value) { m_firstSlotStartTimeHasBeenSet = true; m_firstSlotStartTime = value; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetFirstSlotStartTime(Aws::Utils::DateTime&& value) { m_firstSlotStartTimeHasBeenSet = true; m_firstSlotStartTime = std::move(value); }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline ScheduledInstanceAvailability& WithFirstSlotStartTime(const Aws::Utils::DateTime& value) { SetFirstSlotStartTime(value); return *this;}

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline ScheduledInstanceAvailability& WithFirstSlotStartTime(Aws::Utils::DateTime&& value) { SetFirstSlotStartTime(std::move(value)); return *this;}


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
    inline ScheduledInstanceAvailability& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline ScheduledInstanceAvailability& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}

    /**
     * <p>The hourly price for a single instance.</p>
     */
    inline ScheduledInstanceAvailability& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}


    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline ScheduledInstanceAvailability& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline ScheduledInstanceAvailability& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance
     * types.</p>
     */
    inline ScheduledInstanceAvailability& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The maximum term. The only possible value is 365 days.</p>
     */
    inline int GetMaxTermDurationInDays() const{ return m_maxTermDurationInDays; }

    /**
     * <p>The maximum term. The only possible value is 365 days.</p>
     */
    inline void SetMaxTermDurationInDays(int value) { m_maxTermDurationInDaysHasBeenSet = true; m_maxTermDurationInDays = value; }

    /**
     * <p>The maximum term. The only possible value is 365 days.</p>
     */
    inline ScheduledInstanceAvailability& WithMaxTermDurationInDays(int value) { SetMaxTermDurationInDays(value); return *this;}


    /**
     * <p>The minimum term. The only possible value is 365 days.</p>
     */
    inline int GetMinTermDurationInDays() const{ return m_minTermDurationInDays; }

    /**
     * <p>The minimum term. The only possible value is 365 days.</p>
     */
    inline void SetMinTermDurationInDays(int value) { m_minTermDurationInDaysHasBeenSet = true; m_minTermDurationInDays = value; }

    /**
     * <p>The minimum term. The only possible value is 365 days.</p>
     */
    inline ScheduledInstanceAvailability& WithMinTermDurationInDays(int value) { SetMinTermDurationInDays(value); return *this;}


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
    inline ScheduledInstanceAvailability& WithNetworkPlatform(const Aws::String& value) { SetNetworkPlatform(value); return *this;}

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline ScheduledInstanceAvailability& WithNetworkPlatform(Aws::String&& value) { SetNetworkPlatform(std::move(value)); return *this;}

    /**
     * <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
     */
    inline ScheduledInstanceAvailability& WithNetworkPlatform(const char* value) { SetNetworkPlatform(value); return *this;}


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
    inline ScheduledInstanceAvailability& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline ScheduledInstanceAvailability& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
     */
    inline ScheduledInstanceAvailability& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline const Aws::String& GetPurchaseToken() const{ return m_purchaseToken; }

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline void SetPurchaseToken(const Aws::String& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = value; }

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline void SetPurchaseToken(Aws::String&& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = std::move(value); }

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline void SetPurchaseToken(const char* value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken.assign(value); }

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline ScheduledInstanceAvailability& WithPurchaseToken(const Aws::String& value) { SetPurchaseToken(value); return *this;}

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline ScheduledInstanceAvailability& WithPurchaseToken(Aws::String&& value) { SetPurchaseToken(std::move(value)); return *this;}

    /**
     * <p>The purchase token. This token expires in two hours.</p>
     */
    inline ScheduledInstanceAvailability& WithPurchaseToken(const char* value) { SetPurchaseToken(value); return *this;}


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
    inline ScheduledInstanceAvailability& WithRecurrence(const ScheduledInstanceRecurrence& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The schedule recurrence.</p>
     */
    inline ScheduledInstanceAvailability& WithRecurrence(ScheduledInstanceRecurrence&& value) { SetRecurrence(std::move(value)); return *this;}


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
    inline ScheduledInstanceAvailability& WithSlotDurationInHours(int value) { SetSlotDurationInHours(value); return *this;}


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
    inline ScheduledInstanceAvailability& WithTotalScheduledInstanceHours(int value) { SetTotalScheduledInstanceHours(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet;

    Aws::Utils::DateTime m_firstSlotStartTime;
    bool m_firstSlotStartTimeHasBeenSet;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_maxTermDurationInDays;
    bool m_maxTermDurationInDaysHasBeenSet;

    int m_minTermDurationInDays;
    bool m_minTermDurationInDaysHasBeenSet;

    Aws::String m_networkPlatform;
    bool m_networkPlatformHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_purchaseToken;
    bool m_purchaseTokenHasBeenSet;

    ScheduledInstanceRecurrence m_recurrence;
    bool m_recurrenceHasBeenSet;

    int m_slotDurationInHours;
    bool m_slotDurationInHoursHasBeenSet;

    int m_totalScheduledInstanceHours;
    bool m_totalScheduledInstanceHoursHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
