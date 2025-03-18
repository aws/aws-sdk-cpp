/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/EvaluationFrequency.h>
#include <aws/logs/model/AnomalyDetectorStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Contains information about one anomaly detector in the account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AnomalyDetector">AWS
   * API Reference</a></p>
   */
  class AnomalyDetector
  {
  public:
    AWS_CLOUDWATCHLOGS_API AnomalyDetector() = default;
    AWS_CLOUDWATCHLOGS_API AnomalyDetector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API AnomalyDetector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    AnomalyDetector& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the anomaly detector.</p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    AnomalyDetector& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the ARNs of the log groups that this anomaly detector watches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const { return m_logGroupArnList; }
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    void SetLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::forward<LogGroupArnListT>(value); }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    AnomalyDetector& WithLogGroupArnList(LogGroupArnListT&& value) { SetLogGroupArnList(std::forward<LogGroupArnListT>(value)); return *this;}
    template<typename LogGroupArnListT = Aws::String>
    AnomalyDetector& AddLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.emplace_back(std::forward<LogGroupArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies.</p>
     */
    inline EvaluationFrequency GetEvaluationFrequency() const { return m_evaluationFrequency; }
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }
    inline void SetEvaluationFrequency(EvaluationFrequency value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }
    inline AnomalyDetector& WithEvaluationFrequency(EvaluationFrequency value) { SetEvaluationFrequency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    AnomalyDetector& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the anomaly detector. To pause an anomaly
     * detector, use the <code>enabled</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateLogAnomalyDetector.html">UpdateLogAnomalyDetector</a>
     * operation.</p>
     */
    inline AnomalyDetectorStatus GetAnomalyDetectorStatus() const { return m_anomalyDetectorStatus; }
    inline bool AnomalyDetectorStatusHasBeenSet() const { return m_anomalyDetectorStatusHasBeenSet; }
    inline void SetAnomalyDetectorStatus(AnomalyDetectorStatus value) { m_anomalyDetectorStatusHasBeenSet = true; m_anomalyDetectorStatus = value; }
    inline AnomalyDetector& WithAnomalyDetectorStatus(AnomalyDetectorStatus value) { SetAnomalyDetectorStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key assigned to this anomaly detector, if any.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AnomalyDetector& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was created.</p>
     */
    inline long long GetCreationTimeStamp() const { return m_creationTimeStamp; }
    inline bool CreationTimeStampHasBeenSet() const { return m_creationTimeStampHasBeenSet; }
    inline void SetCreationTimeStamp(long long value) { m_creationTimeStampHasBeenSet = true; m_creationTimeStamp = value; }
    inline AnomalyDetector& WithCreationTimeStamp(long long value) { SetCreationTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was most recently modified.</p>
     */
    inline long long GetLastModifiedTimeStamp() const { return m_lastModifiedTimeStamp; }
    inline bool LastModifiedTimeStampHasBeenSet() const { return m_lastModifiedTimeStampHasBeenSet; }
    inline void SetLastModifiedTimeStamp(long long value) { m_lastModifiedTimeStampHasBeenSet = true; m_lastModifiedTimeStamp = value; }
    inline AnomalyDetector& WithLastModifiedTimeStamp(long long value) { SetLastModifiedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days used as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. </p>
     */
    inline long long GetAnomalyVisibilityTime() const { return m_anomalyVisibilityTime; }
    inline bool AnomalyVisibilityTimeHasBeenSet() const { return m_anomalyVisibilityTimeHasBeenSet; }
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }
    inline AnomalyDetector& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupArnList;
    bool m_logGroupArnListHasBeenSet = false;

    EvaluationFrequency m_evaluationFrequency{EvaluationFrequency::NOT_SET};
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    AnomalyDetectorStatus m_anomalyDetectorStatus{AnomalyDetectorStatus::NOT_SET};
    bool m_anomalyDetectorStatusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    long long m_creationTimeStamp{0};
    bool m_creationTimeStampHasBeenSet = false;

    long long m_lastModifiedTimeStamp{0};
    bool m_lastModifiedTimeStampHasBeenSet = false;

    long long m_anomalyVisibilityTime{0};
    bool m_anomalyVisibilityTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
