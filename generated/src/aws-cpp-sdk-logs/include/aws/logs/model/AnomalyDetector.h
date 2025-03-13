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
    AWS_CLOUDWATCHLOGS_API AnomalyDetector();
    AWS_CLOUDWATCHLOGS_API AnomalyDetector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API AnomalyDetector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline AnomalyDetector& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline AnomalyDetector& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline AnomalyDetector& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the anomaly detector.</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }
    inline AnomalyDetector& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}
    inline AnomalyDetector& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}
    inline AnomalyDetector& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the ARNs of the log groups that this anomaly detector watches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const{ return m_logGroupArnList; }
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }
    inline void SetLogGroupArnList(const Aws::Vector<Aws::String>& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = value; }
    inline void SetLogGroupArnList(Aws::Vector<Aws::String>&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::move(value); }
    inline AnomalyDetector& WithLogGroupArnList(const Aws::Vector<Aws::String>& value) { SetLogGroupArnList(value); return *this;}
    inline AnomalyDetector& WithLogGroupArnList(Aws::Vector<Aws::String>&& value) { SetLogGroupArnList(std::move(value)); return *this;}
    inline AnomalyDetector& AddLogGroupArnList(const Aws::String& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }
    inline AnomalyDetector& AddLogGroupArnList(Aws::String&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(std::move(value)); return *this; }
    inline AnomalyDetector& AddLogGroupArnList(const char* value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies.</p>
     */
    inline const EvaluationFrequency& GetEvaluationFrequency() const{ return m_evaluationFrequency; }
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }
    inline void SetEvaluationFrequency(const EvaluationFrequency& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }
    inline void SetEvaluationFrequency(EvaluationFrequency&& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = std::move(value); }
    inline AnomalyDetector& WithEvaluationFrequency(const EvaluationFrequency& value) { SetEvaluationFrequency(value); return *this;}
    inline AnomalyDetector& WithEvaluationFrequency(EvaluationFrequency&& value) { SetEvaluationFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }
    inline AnomalyDetector& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline AnomalyDetector& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline AnomalyDetector& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the anomaly detector. To pause an anomaly
     * detector, use the <code>enabled</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateLogAnomalyDetector.html">UpdateLogAnomalyDetector</a>
     * operation.</p>
     */
    inline const AnomalyDetectorStatus& GetAnomalyDetectorStatus() const{ return m_anomalyDetectorStatus; }
    inline bool AnomalyDetectorStatusHasBeenSet() const { return m_anomalyDetectorStatusHasBeenSet; }
    inline void SetAnomalyDetectorStatus(const AnomalyDetectorStatus& value) { m_anomalyDetectorStatusHasBeenSet = true; m_anomalyDetectorStatus = value; }
    inline void SetAnomalyDetectorStatus(AnomalyDetectorStatus&& value) { m_anomalyDetectorStatusHasBeenSet = true; m_anomalyDetectorStatus = std::move(value); }
    inline AnomalyDetector& WithAnomalyDetectorStatus(const AnomalyDetectorStatus& value) { SetAnomalyDetectorStatus(value); return *this;}
    inline AnomalyDetector& WithAnomalyDetectorStatus(AnomalyDetectorStatus&& value) { SetAnomalyDetectorStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key assigned to this anomaly detector, if any.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AnomalyDetector& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AnomalyDetector& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AnomalyDetector& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was created.</p>
     */
    inline long long GetCreationTimeStamp() const{ return m_creationTimeStamp; }
    inline bool CreationTimeStampHasBeenSet() const { return m_creationTimeStampHasBeenSet; }
    inline void SetCreationTimeStamp(long long value) { m_creationTimeStampHasBeenSet = true; m_creationTimeStamp = value; }
    inline AnomalyDetector& WithCreationTimeStamp(long long value) { SetCreationTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was most recently modified.</p>
     */
    inline long long GetLastModifiedTimeStamp() const{ return m_lastModifiedTimeStamp; }
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
    inline long long GetAnomalyVisibilityTime() const{ return m_anomalyVisibilityTime; }
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

    EvaluationFrequency m_evaluationFrequency;
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    AnomalyDetectorStatus m_anomalyDetectorStatus;
    bool m_anomalyDetectorStatusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    long long m_creationTimeStamp;
    bool m_creationTimeStampHasBeenSet = false;

    long long m_lastModifiedTimeStamp;
    bool m_lastModifiedTimeStampHasBeenSet = false;

    long long m_anomalyVisibilityTime;
    bool m_anomalyVisibilityTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
