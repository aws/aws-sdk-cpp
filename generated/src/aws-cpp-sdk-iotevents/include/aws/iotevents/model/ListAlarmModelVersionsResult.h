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
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult();
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListAlarmModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline const Aws::Vector<AlarmModelVersionSummary>& GetAlarmModelVersionSummaries() const{ return m_alarmModelVersionSummaries; }

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline void SetAlarmModelVersionSummaries(const Aws::Vector<AlarmModelVersionSummary>& value) { m_alarmModelVersionSummaries = value; }

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline void SetAlarmModelVersionSummaries(Aws::Vector<AlarmModelVersionSummary>&& value) { m_alarmModelVersionSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline ListAlarmModelVersionsResult& WithAlarmModelVersionSummaries(const Aws::Vector<AlarmModelVersionSummary>& value) { SetAlarmModelVersionSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline ListAlarmModelVersionsResult& WithAlarmModelVersionSummaries(Aws::Vector<AlarmModelVersionSummary>&& value) { SetAlarmModelVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline ListAlarmModelVersionsResult& AddAlarmModelVersionSummaries(const AlarmModelVersionSummary& value) { m_alarmModelVersionSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each alarm model version.</p>
     */
    inline ListAlarmModelVersionsResult& AddAlarmModelVersionSummaries(AlarmModelVersionSummary&& value) { m_alarmModelVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListAlarmModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListAlarmModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListAlarmModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AlarmModelVersionSummary> m_alarmModelVersionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
