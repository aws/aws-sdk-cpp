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
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult() = default;
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionsStatisticsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The statistics for the specified fleets or queues.</p>
     */
    inline const Aws::Vector<Statistics>& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = Aws::Vector<Statistics>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<Statistics>>
    GetSessionsStatisticsAggregationResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    template<typename StatisticsT = Statistics>
    GetSessionsStatisticsAggregationResult& AddStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics.emplace_back(std::forward<StatisticsT>(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSessionsStatisticsAggregationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline SessionsStatisticsAggregationStatus GetStatus() const { return m_status; }
    inline void SetStatus(SessionsStatisticsAggregationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSessionsStatisticsAggregationResult& WithStatus(SessionsStatisticsAggregationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSessionsStatisticsAggregationResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionsStatisticsAggregationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Statistics> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SessionsStatisticsAggregationStatus m_status{SessionsStatisticsAggregationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
