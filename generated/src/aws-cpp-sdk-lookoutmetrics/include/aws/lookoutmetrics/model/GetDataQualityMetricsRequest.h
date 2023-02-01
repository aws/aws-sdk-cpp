/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class GetDataQualityMetricsRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API GetDataQualityMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataQualityMetrics"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline GetDataQualityMetricsRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline GetDataQualityMetricsRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector that you want to
     * investigate.</p>
     */
    inline GetDataQualityMetricsRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline void SetMetricSetArn(const char* value) { m_metricSetArnHasBeenSet = true; m_metricSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline GetDataQualityMetricsRequest& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline GetDataQualityMetricsRequest& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a specific data quality metric set.</p>
     */
    inline GetDataQualityMetricsRequest& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
