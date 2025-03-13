/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/AnomalyGroupStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyGroupSummary.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class ListAnomalyGroupSummariesResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult() = default;
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline const Aws::Vector<AnomalyGroupSummary>& GetAnomalyGroupSummaryList() const { return m_anomalyGroupSummaryList; }
    template<typename AnomalyGroupSummaryListT = Aws::Vector<AnomalyGroupSummary>>
    void SetAnomalyGroupSummaryList(AnomalyGroupSummaryListT&& value) { m_anomalyGroupSummaryListHasBeenSet = true; m_anomalyGroupSummaryList = std::forward<AnomalyGroupSummaryListT>(value); }
    template<typename AnomalyGroupSummaryListT = Aws::Vector<AnomalyGroupSummary>>
    ListAnomalyGroupSummariesResult& WithAnomalyGroupSummaryList(AnomalyGroupSummaryListT&& value) { SetAnomalyGroupSummaryList(std::forward<AnomalyGroupSummaryListT>(value)); return *this;}
    template<typename AnomalyGroupSummaryListT = AnomalyGroupSummary>
    ListAnomalyGroupSummariesResult& AddAnomalyGroupSummaryList(AnomalyGroupSummaryListT&& value) { m_anomalyGroupSummaryListHasBeenSet = true; m_anomalyGroupSummaryList.emplace_back(std::forward<AnomalyGroupSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline const AnomalyGroupStatistics& GetAnomalyGroupStatistics() const { return m_anomalyGroupStatistics; }
    template<typename AnomalyGroupStatisticsT = AnomalyGroupStatistics>
    void SetAnomalyGroupStatistics(AnomalyGroupStatisticsT&& value) { m_anomalyGroupStatisticsHasBeenSet = true; m_anomalyGroupStatistics = std::forward<AnomalyGroupStatisticsT>(value); }
    template<typename AnomalyGroupStatisticsT = AnomalyGroupStatistics>
    ListAnomalyGroupSummariesResult& WithAnomalyGroupStatistics(AnomalyGroupStatisticsT&& value) { SetAnomalyGroupStatistics(std::forward<AnomalyGroupStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomalyGroupSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomalyGroupSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyGroupSummary> m_anomalyGroupSummaryList;
    bool m_anomalyGroupSummaryListHasBeenSet = false;

    AnomalyGroupStatistics m_anomalyGroupStatistics;
    bool m_anomalyGroupStatisticsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
