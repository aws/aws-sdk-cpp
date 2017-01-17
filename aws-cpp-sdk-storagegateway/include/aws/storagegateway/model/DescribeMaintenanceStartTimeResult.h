﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$DayOfWeek</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$HourOfDay</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$MinuteOfHour</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$Timezone</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeMaintenanceStartTimeOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeMaintenanceStartTimeResult
  {
  public:
    DescribeMaintenanceStartTimeResult();
    DescribeMaintenanceStartTimeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMaintenanceStartTimeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeMaintenanceStartTimeResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeMaintenanceStartTimeResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeMaintenanceStartTimeResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline void SetHourOfDay(int value) { m_hourOfDay = value; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline DescribeMaintenanceStartTimeResult& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline void SetMinuteOfHour(int value) { m_minuteOfHour = value; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline DescribeMaintenanceStartTimeResult& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline void SetDayOfWeek(int value) { m_dayOfWeek = value; }

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline DescribeMaintenanceStartTimeResult& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}

    
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }

    
    inline void SetTimezone(Aws::String&& value) { m_timezone = value; }

    
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }

    
    inline DescribeMaintenanceStartTimeResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    
    inline DescribeMaintenanceStartTimeResult& WithTimezone(Aws::String&& value) { SetTimezone(value); return *this;}

    
    inline DescribeMaintenanceStartTimeResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    int m_hourOfDay;
    int m_minuteOfHour;
    int m_dayOfWeek;
    Aws::String m_timezone;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
