/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/SuppressionType.h>
#include <aws/logs/model/SuppressionPeriod.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class UpdateAnomalyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API UpdateAnomalyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomaly"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = value; }
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::move(value); }
    inline void SetAnomalyId(const char* value) { m_anomalyIdHasBeenSet = true; m_anomalyId.assign(value); }
    inline UpdateAnomalyRequest& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}
    inline UpdateAnomalyRequest& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}
    inline UpdateAnomalyRequest& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline const Aws::String& GetPatternId() const{ return m_patternId; }
    inline bool PatternIdHasBeenSet() const { return m_patternIdHasBeenSet; }
    inline void SetPatternId(const Aws::String& value) { m_patternIdHasBeenSet = true; m_patternId = value; }
    inline void SetPatternId(Aws::String&& value) { m_patternIdHasBeenSet = true; m_patternId = std::move(value); }
    inline void SetPatternId(const char* value) { m_patternIdHasBeenSet = true; m_patternId.assign(value); }
    inline UpdateAnomalyRequest& WithPatternId(const Aws::String& value) { SetPatternId(value); return *this;}
    inline UpdateAnomalyRequest& WithPatternId(Aws::String&& value) { SetPatternId(std::move(value)); return *this;}
    inline UpdateAnomalyRequest& WithPatternId(const char* value) { SetPatternId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline const SuppressionType& GetSuppressionType() const{ return m_suppressionType; }
    inline bool SuppressionTypeHasBeenSet() const { return m_suppressionTypeHasBeenSet; }
    inline void SetSuppressionType(const SuppressionType& value) { m_suppressionTypeHasBeenSet = true; m_suppressionType = value; }
    inline void SetSuppressionType(SuppressionType&& value) { m_suppressionTypeHasBeenSet = true; m_suppressionType = std::move(value); }
    inline UpdateAnomalyRequest& WithSuppressionType(const SuppressionType& value) { SetSuppressionType(value); return *this;}
    inline UpdateAnomalyRequest& WithSuppressionType(SuppressionType&& value) { SetSuppressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline const SuppressionPeriod& GetSuppressionPeriod() const{ return m_suppressionPeriod; }
    inline bool SuppressionPeriodHasBeenSet() const { return m_suppressionPeriodHasBeenSet; }
    inline void SetSuppressionPeriod(const SuppressionPeriod& value) { m_suppressionPeriodHasBeenSet = true; m_suppressionPeriod = value; }
    inline void SetSuppressionPeriod(SuppressionPeriod&& value) { m_suppressionPeriodHasBeenSet = true; m_suppressionPeriod = std::move(value); }
    inline UpdateAnomalyRequest& WithSuppressionPeriod(const SuppressionPeriod& value) { SetSuppressionPeriod(value); return *this;}
    inline UpdateAnomalyRequest& WithSuppressionPeriod(SuppressionPeriod&& value) { SetSuppressionPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to <code>true</code> to prevent CloudWatch Logs from displaying this
     * behavior as an anomaly in the future. The behavior is then treated as baseline
     * behavior. However, if similar but more severe occurrences of this behavior occur
     * in the future, those will still be reported as anomalies. </p> <p>The default is
     * <code>false</code> </p>
     */
    inline bool GetBaseline() const{ return m_baseline; }
    inline bool BaselineHasBeenSet() const { return m_baselineHasBeenSet; }
    inline void SetBaseline(bool value) { m_baselineHasBeenSet = true; m_baseline = value; }
    inline UpdateAnomalyRequest& WithBaseline(bool value) { SetBaseline(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    Aws::String m_patternId;
    bool m_patternIdHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    SuppressionType m_suppressionType;
    bool m_suppressionTypeHasBeenSet = false;

    SuppressionPeriod m_suppressionPeriod;
    bool m_suppressionPeriodHasBeenSet = false;

    bool m_baseline;
    bool m_baselineHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
