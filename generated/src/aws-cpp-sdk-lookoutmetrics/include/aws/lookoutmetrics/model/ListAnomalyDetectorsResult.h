/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorSummary.h>
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
  class ListAnomalyDetectorsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult() = default;
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline const Aws::Vector<AnomalyDetectorSummary>& GetAnomalyDetectorSummaryList() const { return m_anomalyDetectorSummaryList; }
    template<typename AnomalyDetectorSummaryListT = Aws::Vector<AnomalyDetectorSummary>>
    void SetAnomalyDetectorSummaryList(AnomalyDetectorSummaryListT&& value) { m_anomalyDetectorSummaryListHasBeenSet = true; m_anomalyDetectorSummaryList = std::forward<AnomalyDetectorSummaryListT>(value); }
    template<typename AnomalyDetectorSummaryListT = Aws::Vector<AnomalyDetectorSummary>>
    ListAnomalyDetectorsResult& WithAnomalyDetectorSummaryList(AnomalyDetectorSummaryListT&& value) { SetAnomalyDetectorSummaryList(std::forward<AnomalyDetectorSummaryListT>(value)); return *this;}
    template<typename AnomalyDetectorSummaryListT = AnomalyDetectorSummary>
    ListAnomalyDetectorsResult& AddAnomalyDetectorSummaryList(AnomalyDetectorSummaryListT&& value) { m_anomalyDetectorSummaryListHasBeenSet = true; m_anomalyDetectorSummaryList.emplace_back(std::forward<AnomalyDetectorSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomalyDetectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomalyDetectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyDetectorSummary> m_anomalyDetectorSummaryList;
    bool m_anomalyDetectorSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
