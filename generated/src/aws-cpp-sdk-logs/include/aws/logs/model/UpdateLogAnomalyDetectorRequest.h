/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/EvaluationFrequency.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class UpdateLogAnomalyDetectorRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API UpdateLogAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogAnomalyDetector"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    UpdateLogAnomalyDetectorRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline EvaluationFrequency GetEvaluationFrequency() const { return m_evaluationFrequency; }
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }
    inline void SetEvaluationFrequency(EvaluationFrequency value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }
    inline UpdateLogAnomalyDetectorRequest& WithEvaluationFrequency(EvaluationFrequency value) { SetEvaluationFrequency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    UpdateLogAnomalyDetectorRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to use as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. Therefore, if you do not correct the
     * cause of an anomaly during this time, it will be considered normal going forward
     * and will not be detected.</p>
     */
    inline long long GetAnomalyVisibilityTime() const { return m_anomalyVisibilityTime; }
    inline bool AnomalyVisibilityTimeHasBeenSet() const { return m_anomalyVisibilityTimeHasBeenSet; }
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }
    inline UpdateLogAnomalyDetectorRequest& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to pause or restart the anomaly detector. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateLogAnomalyDetectorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    EvaluationFrequency m_evaluationFrequency{EvaluationFrequency::NOT_SET};
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    long long m_anomalyVisibilityTime{0};
    bool m_anomalyVisibilityTimeHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
