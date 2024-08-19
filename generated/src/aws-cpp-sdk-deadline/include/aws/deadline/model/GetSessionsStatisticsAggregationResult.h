/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionsStatisticsAggregationStatus.h>
#include <aws/deadline/model/Statistics.h>
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
namespace deadline
{
namespace Model
{
  class GetSessionsStatisticsAggregationResult
  {
  public:
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult();
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The statistics for the specified fleets or queues.</p>
     */
    inline const Aws::Vector<Statistics>& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const Aws::Vector<Statistics>& value) { m_statistics = value; }
    inline void SetStatistics(Aws::Vector<Statistics>&& value) { m_statistics = std::move(value); }
    inline GetSessionsStatisticsAggregationResult& WithStatistics(const Aws::Vector<Statistics>& value) { SetStatistics(value); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithStatistics(Aws::Vector<Statistics>&& value) { SetStatistics(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationResult& AddStatistics(const Statistics& value) { m_statistics.push_back(value); return *this; }
    inline GetSessionsStatisticsAggregationResult& AddStatistics(Statistics&& value) { m_statistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetSessionsStatisticsAggregationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the aggregated results. An aggregation may fail or time out if
     * the results are too large. If this happens, you can call the
     * <code>StartSessionsStatisticsAggregation</code> operation after you reduce the
     * aggregation time frame, reduce the number of queues or fleets in the
     * aggregation, or increase the period length.</p> <p>If you call the
     * <code>StartSessionsStatisticsAggregation </code> operation when the status is
     * <code>IN_PROGRESS</code>, you will receive a
     * <code>ThrottlingException</code>.</p>
     */
    inline const SessionsStatisticsAggregationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SessionsStatisticsAggregationStatus& value) { m_status = value; }
    inline void SetStatus(SessionsStatisticsAggregationStatus&& value) { m_status = std::move(value); }
    inline GetSessionsStatisticsAggregationResult& WithStatus(const SessionsStatisticsAggregationStatus& value) { SetStatus(value); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithStatus(SessionsStatisticsAggregationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetSessionsStatisticsAggregationResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionsStatisticsAggregationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Statistics> m_statistics;

    Aws::String m_nextToken;

    SessionsStatisticsAggregationStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
