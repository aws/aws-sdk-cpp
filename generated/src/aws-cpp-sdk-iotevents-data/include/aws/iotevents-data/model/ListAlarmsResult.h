/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/AlarmSummary.h>
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
  class ListAlarmsResult
  {
  public:
    AWS_IOTEVENTSDATA_API ListAlarmsResult() = default;
    AWS_IOTEVENTSDATA_API ListAlarmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API ListAlarmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline const Aws::Vector<AlarmSummary>& GetAlarmSummaries() const { return m_alarmSummaries; }
    template<typename AlarmSummariesT = Aws::Vector<AlarmSummary>>
    void SetAlarmSummaries(AlarmSummariesT&& value) { m_alarmSummariesHasBeenSet = true; m_alarmSummaries = std::forward<AlarmSummariesT>(value); }
    template<typename AlarmSummariesT = Aws::Vector<AlarmSummary>>
    ListAlarmsResult& WithAlarmSummaries(AlarmSummariesT&& value) { SetAlarmSummaries(std::forward<AlarmSummariesT>(value)); return *this;}
    template<typename AlarmSummariesT = AlarmSummary>
    ListAlarmsResult& AddAlarmSummaries(AlarmSummariesT&& value) { m_alarmSummariesHasBeenSet = true; m_alarmSummaries.emplace_back(std::forward<AlarmSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlarmsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlarmsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmSummary> m_alarmSummaries;
    bool m_alarmSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
