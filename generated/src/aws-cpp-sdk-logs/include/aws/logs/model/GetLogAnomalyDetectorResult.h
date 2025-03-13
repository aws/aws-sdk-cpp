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
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult();
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the log anomaly detector</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }
    inline void SetDetectorName(const Aws::String& value) { m_detectorName = value; }
    inline void SetDetectorName(Aws::String&& value) { m_detectorName = std::move(value); }
    inline void SetDetectorName(const char* value) { m_detectorName.assign(value); }
    inline GetLogAnomalyDetectorResult& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}
    inline GetLogAnomalyDetectorResult& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains the ARN of a log group
     * associated with this anomaly detector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const{ return m_logGroupArnList; }
    inline void SetLogGroupArnList(const Aws::Vector<Aws::String>& value) { m_logGroupArnList = value; }
    inline void SetLogGroupArnList(Aws::Vector<Aws::String>&& value) { m_logGroupArnList = std::move(value); }
    inline GetLogAnomalyDetectorResult& WithLogGroupArnList(const Aws::Vector<Aws::String>& value) { SetLogGroupArnList(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithLogGroupArnList(Aws::Vector<Aws::String>&& value) { SetLogGroupArnList(std::move(value)); return *this;}
    inline GetLogAnomalyDetectorResult& AddLogGroupArnList(const Aws::String& value) { m_logGroupArnList.push_back(value); return *this; }
    inline GetLogAnomalyDetectorResult& AddLogGroupArnList(Aws::String&& value) { m_logGroupArnList.push_back(std::move(value)); return *this; }
    inline GetLogAnomalyDetectorResult& AddLogGroupArnList(const char* value) { m_logGroupArnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how often the anomaly detector runs and look for anomalies. Set
     * this value according to the frequency that the log group receives new logs. For
     * example, if the log group receives new log events every 10 minutes, then setting
     * <code>evaluationFrequency</code> to <code>FIFTEEN_MIN</code> might be
     * appropriate.</p>
     */
    inline const EvaluationFrequency& GetEvaluationFrequency() const{ return m_evaluationFrequency; }
    inline void SetEvaluationFrequency(const EvaluationFrequency& value) { m_evaluationFrequency = value; }
    inline void SetEvaluationFrequency(EvaluationFrequency&& value) { m_evaluationFrequency = std::move(value); }
    inline GetLogAnomalyDetectorResult& WithEvaluationFrequency(const EvaluationFrequency& value) { SetEvaluationFrequency(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithEvaluationFrequency(EvaluationFrequency&& value) { SetEvaluationFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPattern.assign(value); }
    inline GetLogAnomalyDetectorResult& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline GetLogAnomalyDetectorResult& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the anomaly detector is currently active. To change its
     * status, use the <code>enabled</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateLogAnomalyDetector.html">UpdateLogAnomalyDetector</a>
     * operation.</p>
     */
    inline const AnomalyDetectorStatus& GetAnomalyDetectorStatus() const{ return m_anomalyDetectorStatus; }
    inline void SetAnomalyDetectorStatus(const AnomalyDetectorStatus& value) { m_anomalyDetectorStatus = value; }
    inline void SetAnomalyDetectorStatus(AnomalyDetectorStatus&& value) { m_anomalyDetectorStatus = std::move(value); }
    inline GetLogAnomalyDetectorResult& WithAnomalyDetectorStatus(const AnomalyDetectorStatus& value) { SetAnomalyDetectorStatus(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithAnomalyDetectorStatus(AnomalyDetectorStatus&& value) { SetAnomalyDetectorStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key assigned to this anomaly detector, if any.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetLogAnomalyDetectorResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetLogAnomalyDetectorResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was created.</p>
     */
    inline long long GetCreationTimeStamp() const{ return m_creationTimeStamp; }
    inline void SetCreationTimeStamp(long long value) { m_creationTimeStamp = value; }
    inline GetLogAnomalyDetectorResult& WithCreationTimeStamp(long long value) { SetCreationTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this anomaly detector was most recently modified.</p>
     */
    inline long long GetLastModifiedTimeStamp() const{ return m_lastModifiedTimeStamp; }
    inline void SetLastModifiedTimeStamp(long long value) { m_lastModifiedTimeStamp = value; }
    inline GetLogAnomalyDetectorResult& WithLastModifiedTimeStamp(long long value) { SetLastModifiedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days used as the life cycle of anomalies. After this time,
     * anomalies are automatically baselined and the anomaly detector model will treat
     * new occurrences of similar event as normal. </p>
     */
    inline long long GetAnomalyVisibilityTime() const{ return m_anomalyVisibilityTime; }
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTime = value; }
    inline GetLogAnomalyDetectorResult& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLogAnomalyDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLogAnomalyDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLogAnomalyDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorName;

    Aws::Vector<Aws::String> m_logGroupArnList;

    EvaluationFrequency m_evaluationFrequency;

    Aws::String m_filterPattern;

    AnomalyDetectorStatus m_anomalyDetectorStatus;

    Aws::String m_kmsKeyId;

    long long m_creationTimeStamp;

    long long m_lastModifiedTimeStamp;

    long long m_anomalyVisibilityTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
