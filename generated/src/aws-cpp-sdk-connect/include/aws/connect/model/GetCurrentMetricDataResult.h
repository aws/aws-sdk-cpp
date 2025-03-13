/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/CurrentMetricResult.h>
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
namespace Connect
{
namespace Model
{
  class GetCurrentMetricDataResult
  {
  public:
    AWS_CONNECT_API GetCurrentMetricDataResult() = default;
    AWS_CONNECT_API GetCurrentMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetCurrentMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCurrentMetricDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the real-time metrics.</p>
     */
    inline const Aws::Vector<CurrentMetricResult>& GetMetricResults() const { return m_metricResults; }
    template<typename MetricResultsT = Aws::Vector<CurrentMetricResult>>
    void SetMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults = std::forward<MetricResultsT>(value); }
    template<typename MetricResultsT = Aws::Vector<CurrentMetricResult>>
    GetCurrentMetricDataResult& WithMetricResults(MetricResultsT&& value) { SetMetricResults(std::forward<MetricResultsT>(value)); return *this;}
    template<typename MetricResultsT = CurrentMetricResult>
    GetCurrentMetricDataResult& AddMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults.emplace_back(std::forward<MetricResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the metrics were retrieved and cached for pagination.</p>
     */
    inline const Aws::Utils::DateTime& GetDataSnapshotTime() const { return m_dataSnapshotTime; }
    template<typename DataSnapshotTimeT = Aws::Utils::DateTime>
    void SetDataSnapshotTime(DataSnapshotTimeT&& value) { m_dataSnapshotTimeHasBeenSet = true; m_dataSnapshotTime = std::forward<DataSnapshotTimeT>(value); }
    template<typename DataSnapshotTimeT = Aws::Utils::DateTime>
    GetCurrentMetricDataResult& WithDataSnapshotTime(DataSnapshotTimeT&& value) { SetDataSnapshotTime(std::forward<DataSnapshotTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of the result, regardless of the current page size. </p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline GetCurrentMetricDataResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCurrentMetricDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CurrentMetricResult> m_metricResults;
    bool m_metricResultsHasBeenSet = false;

    Aws::Utils::DateTime m_dataSnapshotTime{};
    bool m_dataSnapshotTimeHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
