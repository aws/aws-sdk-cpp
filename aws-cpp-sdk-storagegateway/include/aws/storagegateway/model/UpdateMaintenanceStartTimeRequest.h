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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$DayOfMonth</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$DayOfWeek</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$HourOfDay</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$MinuteOfHour</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateMaintenanceStartTimeInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API UpdateMaintenanceStartTimeRequest : public StorageGatewayRequest
  {
  public:
    UpdateMaintenanceStartTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceStartTime"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}


    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}


    /**
     * <p>The day of the week component of the maintenance start time week represented
     * as an ordinal number from 0 to 6, where 0 represents Sunday and 6 Saturday.</p>
     */
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week component of the maintenance start time week represented
     * as an ordinal number from 0 to 6, where 0 represents Sunday and 6 Saturday.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week component of the maintenance start time week represented
     * as an ordinal number from 0 to 6, where 0 represents Sunday and 6 Saturday.</p>
     */
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week component of the maintenance start time week represented
     * as an ordinal number from 0 to 6, where 0 represents Sunday and 6 Saturday.</p>
     */
    inline UpdateMaintenanceStartTimeRequest& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}


    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p> <note> <p>This value is only
     * available for tape and volume gateways.</p> </note>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p> <note> <p>This value is only
     * available for tape and volume gateways.</p> </note>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p> <note> <p>This value is only
     * available for tape and volume gateways.</p> </note>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p> <note> <p>This value is only
     * available for tape and volume gateways.</p> </note>
     */
    inline UpdateMaintenanceStartTimeRequest& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    int m_hourOfDay;
    bool m_hourOfDayHasBeenSet;

    int m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet;

    int m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet;

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
