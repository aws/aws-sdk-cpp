/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AutoDetectionMetricSource.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class DetectMetricSetConfigRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectMetricSetConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectMetricSetConfig"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline DetectMetricSetConfigRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline DetectMetricSetConfigRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>An anomaly detector ARN.</p>
     */
    inline DetectMetricSetConfigRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>A data source.</p>
     */
    inline const AutoDetectionMetricSource& GetAutoDetectionMetricSource() const{ return m_autoDetectionMetricSource; }

    /**
     * <p>A data source.</p>
     */
    inline bool AutoDetectionMetricSourceHasBeenSet() const { return m_autoDetectionMetricSourceHasBeenSet; }

    /**
     * <p>A data source.</p>
     */
    inline void SetAutoDetectionMetricSource(const AutoDetectionMetricSource& value) { m_autoDetectionMetricSourceHasBeenSet = true; m_autoDetectionMetricSource = value; }

    /**
     * <p>A data source.</p>
     */
    inline void SetAutoDetectionMetricSource(AutoDetectionMetricSource&& value) { m_autoDetectionMetricSourceHasBeenSet = true; m_autoDetectionMetricSource = std::move(value); }

    /**
     * <p>A data source.</p>
     */
    inline DetectMetricSetConfigRequest& WithAutoDetectionMetricSource(const AutoDetectionMetricSource& value) { SetAutoDetectionMetricSource(value); return *this;}

    /**
     * <p>A data source.</p>
     */
    inline DetectMetricSetConfigRequest& WithAutoDetectionMetricSource(AutoDetectionMetricSource&& value) { SetAutoDetectionMetricSource(std::move(value)); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    AutoDetectionMetricSource m_autoDetectionMetricSource;
    bool m_autoDetectionMetricSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
