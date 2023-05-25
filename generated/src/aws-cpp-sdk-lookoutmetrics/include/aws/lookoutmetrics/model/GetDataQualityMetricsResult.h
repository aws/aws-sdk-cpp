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
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult();
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline const Aws::Vector<AnomalyDetectorDataQualityMetric>& GetAnomalyDetectorDataQualityMetricList() const{ return m_anomalyDetectorDataQualityMetricList; }

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline void SetAnomalyDetectorDataQualityMetricList(const Aws::Vector<AnomalyDetectorDataQualityMetric>& value) { m_anomalyDetectorDataQualityMetricList = value; }

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline void SetAnomalyDetectorDataQualityMetricList(Aws::Vector<AnomalyDetectorDataQualityMetric>&& value) { m_anomalyDetectorDataQualityMetricList = std::move(value); }

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline GetDataQualityMetricsResult& WithAnomalyDetectorDataQualityMetricList(const Aws::Vector<AnomalyDetectorDataQualityMetric>& value) { SetAnomalyDetectorDataQualityMetricList(value); return *this;}

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline GetDataQualityMetricsResult& WithAnomalyDetectorDataQualityMetricList(Aws::Vector<AnomalyDetectorDataQualityMetric>&& value) { SetAnomalyDetectorDataQualityMetricList(std::move(value)); return *this;}

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline GetDataQualityMetricsResult& AddAnomalyDetectorDataQualityMetricList(const AnomalyDetectorDataQualityMetric& value) { m_anomalyDetectorDataQualityMetricList.push_back(value); return *this; }

    /**
     * <p>A list of the data quality metrics for the <code>AnomalyDetectorArn</code>
     * that you requested.</p>
     */
    inline GetDataQualityMetricsResult& AddAnomalyDetectorDataQualityMetricList(AnomalyDetectorDataQualityMetric&& value) { m_anomalyDetectorDataQualityMetricList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataQualityMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataQualityMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataQualityMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnomalyDetectorDataQualityMetric> m_anomalyDetectorDataQualityMetricList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
