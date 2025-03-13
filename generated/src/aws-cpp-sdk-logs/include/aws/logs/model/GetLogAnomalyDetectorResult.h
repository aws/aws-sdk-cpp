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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class GetLogAnomalyDetectorResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult() = default;
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the log anomaly detector</p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    GetLogAnomalyDetectorResult& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains the ARN of a log group
     * associated with this anomaly detector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const { return m_logGroupArnList; }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    void SetLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::forward<LogGroupArnListT>(value); }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    GetLogAnomalyDetectorResult& WithLogGroupArnList(LogGroupArnListT&& value) { SetLogGroupArnList(std::forward<LogGroupArnListT>(value)); return *this;}
    template<typename LogGroupArnListT = Aws::String>
    GetLogAnomalyDetectorResult& AddLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.emplace_back(std::forward<LogGroupArnListT>(value)); return *this; }
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
    inline void SetEvaluationFrequency(EvaluationFrequency value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }
    inline GetLogAnomalyDetectorResult& WithEvaluationFrequency(EvaluationFrequency value) { SetEvaluationFrequency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    GetLogAnomalyDetectorResult& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the anomaly detector is currently active. To change its
     * status, use the <code>enabled</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateLogAnomalyDetector.html">UpdateLogAnomalyDetector</a>
     * operation.</p>
     */
    inline AnomalyDetectorStatus GetAnomalyDetectorStatus() const { return m_anomalyDetectorStatus; }
    inline void SetAnomalyDetectorStatus(AnomalyDetectorStatus value) { m_anomalyDetectorStatusHasBeenSet = true; m_anomalyDetectorStatus = value; }
    inline GetLogAnomalyDetectorResult& WithAnomalyDetectorStatus(AnomalyDetectorStatus value) { SetAnomalyDetectorStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key assigned to this anomaly detector, if any.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetLogAnomalyDetectorResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was created.</p>
     */
    inline long long GetCreationTimeStamp() const { return m_creationTimeStamp; }
    inline void SetCreationTimeStamp(long long value) { m_creationTimeStampHasBeenSet = true; m_creationTimeStamp = value; }
    inline GetLogAnomalyDetectorResult& WithCreationTimeStamp(long long value) { SetCreationTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was most recently modified.</p>
     */
    inline long long GetLastModifiedTimeStamp() const { return m_lastModifiedTimeStamp; }
    inline void SetLastModifiedTimeStamp(long long value) { m_lastModifiedTimeStampHasBeenSet = true; m_lastModifiedTimeStamp = value; }
    inline GetLogAnomalyDetectorResult& WithLastModifiedTimeStamp(long long value) { SetLastModifiedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days used as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. </p>
     */
    inline long long GetAnomalyVisibilityTime() const { return m_anomalyVisibilityTime; }
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }
    inline GetLogAnomalyDetectorResult& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogAnomalyDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
