/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/MetricSetSummary.h>
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
  class ListMetricSetsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult() = default;
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline const Aws::Vector<MetricSetSummary>& GetMetricSetSummaryList() const { return m_metricSetSummaryList; }
    template<typename MetricSetSummaryListT = Aws::Vector<MetricSetSummary>>
    void SetMetricSetSummaryList(MetricSetSummaryListT&& value) { m_metricSetSummaryListHasBeenSet = true; m_metricSetSummaryList = std::forward<MetricSetSummaryListT>(value); }
    template<typename MetricSetSummaryListT = Aws::Vector<MetricSetSummary>>
    ListMetricSetsResult& WithMetricSetSummaryList(MetricSetSummaryListT&& value) { SetMetricSetSummaryList(std::forward<MetricSetSummaryListT>(value)); return *this;}
    template<typename MetricSetSummaryListT = MetricSetSummary>
    ListMetricSetsResult& AddMetricSetSummaryList(MetricSetSummaryListT&& value) { m_metricSetSummaryListHasBeenSet = true; m_metricSetSummaryList.emplace_back(std::forward<MetricSetSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetricSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMetricSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricSetSummary> m_metricSetSummaryList;
    bool m_metricSetSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
