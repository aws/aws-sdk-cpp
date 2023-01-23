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
    AWS_IOTEVENTSDATA_API ListAlarmsResult();
    AWS_IOTEVENTSDATA_API ListAlarmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API ListAlarmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline const Aws::Vector<AlarmSummary>& GetAlarmSummaries() const{ return m_alarmSummaries; }

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline void SetAlarmSummaries(const Aws::Vector<AlarmSummary>& value) { m_alarmSummaries = value; }

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline void SetAlarmSummaries(Aws::Vector<AlarmSummary>&& value) { m_alarmSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline ListAlarmsResult& WithAlarmSummaries(const Aws::Vector<AlarmSummary>& value) { SetAlarmSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline ListAlarmsResult& WithAlarmSummaries(Aws::Vector<AlarmSummary>&& value) { SetAlarmSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline ListAlarmsResult& AddAlarmSummaries(const AlarmSummary& value) { m_alarmSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each alarm.</p>
     */
    inline ListAlarmsResult& AddAlarmSummaries(AlarmSummary&& value) { m_alarmSummaries.push_back(std::move(value)); return *this; }


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
    inline ListAlarmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListAlarmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListAlarmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AlarmSummary> m_alarmSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
