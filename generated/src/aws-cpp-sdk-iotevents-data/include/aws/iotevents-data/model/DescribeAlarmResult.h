﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/Alarm.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>Contains information about an alarm.</p>
     */
    inline const Alarm& GetAlarm() const{ return m_alarm; }
    inline void SetAlarm(const Alarm& value) { m_alarm = value; }
    inline void SetAlarm(Alarm&& value) { m_alarm = std::move(value); }
    inline DescribeAlarmResult& WithAlarm(const Alarm& value) { SetAlarm(value); return *this;}
    inline DescribeAlarmResult& WithAlarm(Alarm&& value) { SetAlarm(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAlarmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAlarmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAlarmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Alarm m_alarm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
