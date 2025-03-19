/**
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
    AWS_IOTEVENTSDATA_API DescribeAlarmResult() = default;
    AWS_IOTEVENTSDATA_API DescribeAlarmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API DescribeAlarmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about an alarm.</p>
     */
    inline const Alarm& GetAlarm() const { return m_alarm; }
    template<typename AlarmT = Alarm>
    void SetAlarm(AlarmT&& value) { m_alarmHasBeenSet = true; m_alarm = std::forward<AlarmT>(value); }
    template<typename AlarmT = Alarm>
    DescribeAlarmResult& WithAlarm(AlarmT&& value) { SetAlarm(std::forward<AlarmT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAlarmResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Alarm m_alarm;
    bool m_alarmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
