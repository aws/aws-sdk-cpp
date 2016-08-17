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

    
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    
    inline void SetHourOfDay(int value) { m_hourOfDay = value; }

    
    inline DescribeMaintenanceStartTimeResult& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}

    
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    
    inline void SetMinuteOfHour(int value) { m_minuteOfHour = value; }

    
    inline DescribeMaintenanceStartTimeResult& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}

    
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }

    
    inline void SetDayOfWeek(int value) { m_dayOfWeek = value; }

    
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
