/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/Alarm.h>
#include <utility>

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
namespace IoTEventsData
{
namespace Model
{
  class DescribeAlarmResult
  {
  public:
    AWS_IOTEVENTSDATA_API DescribeAlarmResult();
    AWS_IOTEVENTSDATA_API DescribeAlarmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API DescribeAlarmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an alarm.</p>
     */
    inline const Alarm& GetAlarm() const{ return m_alarm; }

    /**
     * <p>Contains information about an alarm.</p>
     */
    inline void SetAlarm(const Alarm& value) { m_alarm = value; }

    /**
     * <p>Contains information about an alarm.</p>
     */
    inline void SetAlarm(Alarm&& value) { m_alarm = std::move(value); }

    /**
     * <p>Contains information about an alarm.</p>
     */
    inline DescribeAlarmResult& WithAlarm(const Alarm& value) { SetAlarm(value); return *this;}

    /**
     * <p>Contains information about an alarm.</p>
     */
    inline DescribeAlarmResult& WithAlarm(Alarm&& value) { SetAlarm(std::move(value)); return *this;}

  private:

    Alarm m_alarm;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
