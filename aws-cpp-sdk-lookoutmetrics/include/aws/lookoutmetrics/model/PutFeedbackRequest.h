/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyGroupTimeSeriesFeedback.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class PutFeedbackRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API PutFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline PutFeedbackRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline PutFeedbackRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline PutFeedbackRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline const AnomalyGroupTimeSeriesFeedback& GetAnomalyGroupTimeSeriesFeedback() const{ return m_anomalyGroupTimeSeriesFeedback; }

    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline bool AnomalyGroupTimeSeriesFeedbackHasBeenSet() const { return m_anomalyGroupTimeSeriesFeedbackHasBeenSet; }

    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline void SetAnomalyGroupTimeSeriesFeedback(const AnomalyGroupTimeSeriesFeedback& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback = value; }

    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline void SetAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeriesFeedback&& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback = std::move(value); }

    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline PutFeedbackRequest& WithAnomalyGroupTimeSeriesFeedback(const AnomalyGroupTimeSeriesFeedback& value) { SetAnomalyGroupTimeSeriesFeedback(value); return *this;}

    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline PutFeedbackRequest& WithAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeriesFeedback&& value) { SetAnomalyGroupTimeSeriesFeedback(std::move(value)); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    AnomalyGroupTimeSeriesFeedback m_anomalyGroupTimeSeriesFeedback;
    bool m_anomalyGroupTimeSeriesFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
