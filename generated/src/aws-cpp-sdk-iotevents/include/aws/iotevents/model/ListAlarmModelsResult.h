﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmModelSummary.h>
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
  class ListAlarmModelsResult
  {
  public:
    AWS_IOTEVENTS_API ListAlarmModelsResult();
    AWS_IOTEVENTS_API ListAlarmModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListAlarmModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each alarm model.</p>
     */
    inline const Aws::Vector<AlarmModelSummary>& GetAlarmModelSummaries() const{ return m_alarmModelSummaries; }
    inline void SetAlarmModelSummaries(const Aws::Vector<AlarmModelSummary>& value) { m_alarmModelSummaries = value; }
    inline void SetAlarmModelSummaries(Aws::Vector<AlarmModelSummary>&& value) { m_alarmModelSummaries = std::move(value); }
    inline ListAlarmModelsResult& WithAlarmModelSummaries(const Aws::Vector<AlarmModelSummary>& value) { SetAlarmModelSummaries(value); return *this;}
    inline ListAlarmModelsResult& WithAlarmModelSummaries(Aws::Vector<AlarmModelSummary>&& value) { SetAlarmModelSummaries(std::move(value)); return *this;}
    inline ListAlarmModelsResult& AddAlarmModelSummaries(const AlarmModelSummary& value) { m_alarmModelSummaries.push_back(value); return *this; }
    inline ListAlarmModelsResult& AddAlarmModelSummaries(AlarmModelSummary&& value) { m_alarmModelSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAlarmModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAlarmModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAlarmModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAlarmModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAlarmModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAlarmModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmModelSummary> m_alarmModelSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
