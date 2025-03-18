/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/InterMetricImpactDetails.h>
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
  class ListAnomalyGroupRelatedMetricsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult() = default;
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline const Aws::Vector<InterMetricImpactDetails>& GetInterMetricImpactList() const { return m_interMetricImpactList; }
    template<typename InterMetricImpactListT = Aws::Vector<InterMetricImpactDetails>>
    void SetInterMetricImpactList(InterMetricImpactListT&& value) { m_interMetricImpactListHasBeenSet = true; m_interMetricImpactList = std::forward<InterMetricImpactListT>(value); }
    template<typename InterMetricImpactListT = Aws::Vector<InterMetricImpactDetails>>
    ListAnomalyGroupRelatedMetricsResult& WithInterMetricImpactList(InterMetricImpactListT&& value) { SetInterMetricImpactList(std::forward<InterMetricImpactListT>(value)); return *this;}
    template<typename InterMetricImpactListT = InterMetricImpactDetails>
    ListAnomalyGroupRelatedMetricsResult& AddInterMetricImpactList(InterMetricImpactListT&& value) { m_interMetricImpactListHasBeenSet = true; m_interMetricImpactList.emplace_back(std::forward<InterMetricImpactListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomalyGroupRelatedMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomalyGroupRelatedMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InterMetricImpactDetails> m_interMetricImpactList;
    bool m_interMetricImpactListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
