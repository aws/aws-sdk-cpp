/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorDataQualityMetric.h>
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
  class GetDataQualityMetricsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult() = default;
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline const Aws::Vector<AnomalyDetectorDataQualityMetric>& GetAnomalyDetectorDataQualityMetricList() const { return m_anomalyDetectorDataQualityMetricList; }
    template<typename AnomalyDetectorDataQualityMetricListT = Aws::Vector<AnomalyDetectorDataQualityMetric>>
    void SetAnomalyDetectorDataQualityMetricList(AnomalyDetectorDataQualityMetricListT&& value) { m_anomalyDetectorDataQualityMetricListHasBeenSet = true; m_anomalyDetectorDataQualityMetricList = std::forward<AnomalyDetectorDataQualityMetricListT>(value); }
    template<typename AnomalyDetectorDataQualityMetricListT = Aws::Vector<AnomalyDetectorDataQualityMetric>>
    GetDataQualityMetricsResult& WithAnomalyDetectorDataQualityMetricList(AnomalyDetectorDataQualityMetricListT&& value) { SetAnomalyDetectorDataQualityMetricList(std::forward<AnomalyDetectorDataQualityMetricListT>(value)); return *this;}
    template<typename AnomalyDetectorDataQualityMetricListT = AnomalyDetectorDataQualityMetric>
    GetDataQualityMetricsResult& AddAnomalyDetectorDataQualityMetricList(AnomalyDetectorDataQualityMetricListT&& value) { m_anomalyDetectorDataQualityMetricListHasBeenSet = true; m_anomalyDetectorDataQualityMetricList.emplace_back(std::forward<AnomalyDetectorDataQualityMetricListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataQualityMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyDetectorDataQualityMetric> m_anomalyDetectorDataQualityMetricList;
    bool m_anomalyDetectorDataQualityMetricListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
