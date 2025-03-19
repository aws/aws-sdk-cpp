/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/TimeSeriesFeedback.h>
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
  class GetFeedbackResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetFeedbackResult() = default;
    AWS_LOOKOUTMETRICS_API GetFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline const Aws::Vector<TimeSeriesFeedback>& GetAnomalyGroupTimeSeriesFeedback() const { return m_anomalyGroupTimeSeriesFeedback; }
    template<typename AnomalyGroupTimeSeriesFeedbackT = Aws::Vector<TimeSeriesFeedback>>
    void SetAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeriesFeedbackT&& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback = std::forward<AnomalyGroupTimeSeriesFeedbackT>(value); }
    template<typename AnomalyGroupTimeSeriesFeedbackT = Aws::Vector<TimeSeriesFeedback>>
    GetFeedbackResult& WithAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeriesFeedbackT&& value) { SetAnomalyGroupTimeSeriesFeedback(std::forward<AnomalyGroupTimeSeriesFeedbackT>(value)); return *this;}
    template<typename AnomalyGroupTimeSeriesFeedbackT = TimeSeriesFeedback>
    GetFeedbackResult& AddAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeriesFeedbackT&& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback.emplace_back(std::forward<AnomalyGroupTimeSeriesFeedbackT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFeedbackResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TimeSeriesFeedback> m_anomalyGroupTimeSeriesFeedback;
    bool m_anomalyGroupTimeSeriesFeedbackHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
