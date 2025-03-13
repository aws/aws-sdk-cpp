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
    AWS_CLOUDWATCHLOGS_API UpdateAnomalyRequest() = default;

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
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    UpdateAnomalyRequest& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline const Aws::String& GetPatternId() const { return m_patternId; }
    inline bool PatternIdHasBeenSet() const { return m_patternIdHasBeenSet; }
    template<typename PatternIdT = Aws::String>
    void SetPatternId(PatternIdT&& value) { m_patternIdHasBeenSet = true; m_patternId = std::forward<PatternIdT>(value); }
    template<typename PatternIdT = Aws::String>
    UpdateAnomalyRequest& WithPatternId(PatternIdT&& value) { SetPatternId(std::forward<PatternIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    UpdateAnomalyRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline SuppressionType GetSuppressionType() const { return m_suppressionType; }
    inline bool SuppressionTypeHasBeenSet() const { return m_suppressionTypeHasBeenSet; }
    inline void SetSuppressionType(SuppressionType value) { m_suppressionTypeHasBeenSet = true; m_suppressionType = value; }
    inline UpdateAnomalyRequest& WithSuppressionType(SuppressionType value) { SetSuppressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline const SuppressionPeriod& GetSuppressionPeriod() const { return m_suppressionPeriod; }
    inline bool SuppressionPeriodHasBeenSet() const { return m_suppressionPeriodHasBeenSet; }
    template<typename SuppressionPeriodT = SuppressionPeriod>
    void SetSuppressionPeriod(SuppressionPeriodT&& value) { m_suppressionPeriodHasBeenSet = true; m_suppressionPeriod = std::forward<SuppressionPeriodT>(value); }
    template<typename SuppressionPeriodT = SuppressionPeriod>
    UpdateAnomalyRequest& WithSuppressionPeriod(SuppressionPeriodT&& value) { SetSuppressionPeriod(std::forward<SuppressionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to <code>true</code> to prevent CloudWatch Logs from displaying this
     * behavior as an anomaly in the future. The behavior is then treated as baseline
     * behavior. However, if similar but more severe occurrences of this behavior occur
     * in the future, those will still be reported as anomalies. </p> <p>The default is
     * <code>false</code> </p>
     */
    inline bool GetBaseline() const { return m_baseline; }
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

    SuppressionType m_suppressionType{SuppressionType::NOT_SET};
    bool m_suppressionTypeHasBeenSet = false;

    SuppressionPeriod m_suppressionPeriod;
    bool m_suppressionPeriodHasBeenSet = false;

    bool m_baseline{false};
    bool m_baselineHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
