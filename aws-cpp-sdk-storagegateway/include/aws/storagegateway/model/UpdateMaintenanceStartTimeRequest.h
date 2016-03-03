/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li>
   * <a>UpdateMaintenanceStartTimeInput$DayOfWeek</a> </li> <li>
   * <a>UpdateMaintenanceStartTimeInput$HourOfDay</a> </li> <li>
   * <a>UpdateMaintenanceStartTimeInput$MinuteOfHour</a> </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API UpdateMaintenanceStartTimeRequest : public StorageGatewayRequest
  {
  public:
    UpdateMaintenanceStartTimeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline long GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline void SetHourOfDay(long value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithHourOfDay(long value) { SetHourOfDay(value); return *this;}

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline long GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline void SetMinuteOfHour(long value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithMinuteOfHour(long value) { SetMinuteOfHour(value); return *this;}

    /**
     * <p>The maintenance start time day of the week.</p>
     */
    inline long GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The maintenance start time day of the week.</p>
     */
    inline void SetDayOfWeek(long value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The maintenance start time day of the week.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithDayOfWeek(long value) { SetDayOfWeek(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    long m_hourOfDay;
    bool m_hourOfDayHasBeenSet;
    long m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet;
    long m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
