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
    AWS_CLOUDWATCHLOGS_API UpdateLogAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogAnomalyDetector"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the anomaly detector that you want to update.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline const EvaluationFrequency& GetEvaluationFrequency() const{ return m_evaluationFrequency; }

    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }

    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline void SetEvaluationFrequency(const EvaluationFrequency& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }

    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline void SetEvaluationFrequency(EvaluationFrequency&& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = std::move(value); }

    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithEvaluationFrequency(const EvaluationFrequency& value) { SetEvaluationFrequency(value); return *this;}

    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithEvaluationFrequency(EvaluationFrequency&& value) { SetEvaluationFrequency(std::move(value)); return *this;}


    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline UpdateLogAnomalyDetectorRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline UpdateLogAnomalyDetectorRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    
    inline UpdateLogAnomalyDetectorRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


    /**
     * <p>The number of days to use as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. Therefore, if you do not correct the
     * cause of an anomaly during this time, it will be considered normal going forward
     * and will not be detected.</p>
     */
    inline long long GetAnomalyVisibilityTime() const{ return m_anomalyVisibilityTime; }

    /**
     * <p>The number of days to use as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. Therefore, if you do not correct the
     * cause of an anomaly during this time, it will be considered normal going forward
     * and will not be detected.</p>
     */
    inline bool AnomalyVisibilityTimeHasBeenSet() const { return m_anomalyVisibilityTimeHasBeenSet; }

    /**
     * <p>The number of days to use as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. Therefore, if you do not correct the
     * cause of an anomaly during this time, it will be considered normal going forward
     * and will not be detected.</p>
     */
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }

    /**
     * <p>The number of days to use as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. Therefore, if you do not correct the
     * cause of an anomaly during this time, it will be considered normal going forward
     * and will not be detected.</p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}


    /**
     * <p>Use this parameter to pause or restart the anomaly detector. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Use this parameter to pause or restart the anomaly detector. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Use this parameter to pause or restart the anomaly detector. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Use this parameter to pause or restart the anomaly detector. </p>
     */
    inline UpdateLogAnomalyDetectorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    EvaluationFrequency m_evaluationFrequency;
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    long long m_anomalyVisibilityTime;
    bool m_anomalyVisibilityTimeHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
