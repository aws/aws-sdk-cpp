/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmModelVersionSummary.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListAlarmModelVersionsResult
  {
  public:
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult() = default;
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline const Aws::Vector<AlarmModelVersionSummary>& GetAlarmModelVersionSummaries() const { return m_alarmModelVersionSummaries; }
    template<typename AlarmModelVersionSummariesT = Aws::Vector<AlarmModelVersionSummary>>
    void SetAlarmModelVersionSummaries(AlarmModelVersionSummariesT&& value) { m_alarmModelVersionSummariesHasBeenSet = true; m_alarmModelVersionSummaries = std::forward<AlarmModelVersionSummariesT>(value); }
    template<typename AlarmModelVersionSummariesT = Aws::Vector<AlarmModelVersionSummary>>
    ListAlarmModelVersionsResult& WithAlarmModelVersionSummaries(AlarmModelVersionSummariesT&& value) { SetAlarmModelVersionSummaries(std::forward<AlarmModelVersionSummariesT>(value)); return *this;}
    template<typename AlarmModelVersionSummariesT = AlarmModelVersionSummary>
    ListAlarmModelVersionsResult& AddAlarmModelVersionSummaries(AlarmModelVersionSummariesT&& value) { m_alarmModelVersionSummariesHasBeenSet = true; m_alarmModelVersionSummaries.emplace_back(std::forward<AlarmModelVersionSummariesT>(value)); return *this; }
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
    ListAlarmModelVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlarmModelVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmModelVersionSummary> m_alarmModelVersionSummaries;
    bool m_alarmModelVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
