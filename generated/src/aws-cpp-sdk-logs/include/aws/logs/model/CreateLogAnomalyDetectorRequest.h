/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/EvaluationFrequency.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class CreateLogAnomalyDetectorRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateLogAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogAnomalyDetector"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const { return m_logGroupArnList; }
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    void SetLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::forward<LogGroupArnListT>(value); }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    CreateLogAnomalyDetectorRequest& WithLogGroupArnList(LogGroupArnListT&& value) { SetLogGroupArnList(std::forward<LogGroupArnListT>(value)); return *this;}
    template<typename LogGroupArnListT = Aws::String>
    CreateLogAnomalyDetectorRequest& AddLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.emplace_back(std::forward<LogGroupArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    CreateLogAnomalyDetectorRequest& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline EvaluationFrequency GetEvaluationFrequency() const { return m_evaluationFrequency; }
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }
    inline void SetEvaluationFrequency(EvaluationFrequency value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }
    inline CreateLogAnomalyDetectorRequest& WithEvaluationFrequency(EvaluationFrequency value) { SetEvaluationFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    CreateLogAnomalyDetectorRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p> Make
     * sure the value provided is a valid KMS key ARN. For more information about using
     * a KMS key and to see the required IAM policy, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateLogAnomalyDetectorRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to have visibility on an anomaly. After this time period
     * has elapsed for an anomaly, it will be automatically baselined and the anomaly
     * detector will treat new occurrences of a similar anomaly as normal. Therefore,
     * if you do not correct the cause of an anomaly during the time period specified
     * in <code>anomalyVisibilityTime</code>, it will be considered normal going
     * forward and will not be detected as an anomaly.</p>
     */
    inline long long GetAnomalyVisibilityTime() const { return m_anomalyVisibilityTime; }
    inline bool AnomalyVisibilityTimeHasBeenSet() const { return m_anomalyVisibilityTimeHasBeenSet; }
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }
    inline CreateLogAnomalyDetectorRequest& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLogAnomalyDetectorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLogAnomalyDetectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupArnList;
    bool m_logGroupArnListHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    EvaluationFrequency m_evaluationFrequency{EvaluationFrequency::NOT_SET};
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    long long m_anomalyVisibilityTime{0};
    bool m_anomalyVisibilityTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
