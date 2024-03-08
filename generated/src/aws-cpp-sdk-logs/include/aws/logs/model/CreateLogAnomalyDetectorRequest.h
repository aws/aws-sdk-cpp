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
    AWS_CLOUDWATCHLOGS_API CreateLogAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogAnomalyDetector"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const{ return m_logGroupArnList; }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline void SetLogGroupArnList(const Aws::Vector<Aws::String>& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = value; }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline void SetLogGroupArnList(Aws::Vector<Aws::String>&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::move(value); }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithLogGroupArnList(const Aws::Vector<Aws::String>& value) { SetLogGroupArnList(value); return *this;}

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithLogGroupArnList(Aws::Vector<Aws::String>&& value) { SetLogGroupArnList(std::move(value)); return *this;}

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline CreateLogAnomalyDetectorRequest& AddLogGroupArnList(const Aws::String& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline CreateLogAnomalyDetectorRequest& AddLogGroupArnList(Aws::String&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the ARN of the log group that this anomaly detector will
     * watch. You can specify only one log group ARN.</p>
     */
    inline CreateLogAnomalyDetectorRequest& AddLogGroupArnList(const char* value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }


    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}

    /**
     * <p>A name for this anomaly detector.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}


    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline const EvaluationFrequency& GetEvaluationFrequency() const{ return m_evaluationFrequency; }

    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline bool EvaluationFrequencyHasBeenSet() const { return m_evaluationFrequencyHasBeenSet; }

    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline void SetEvaluationFrequency(const EvaluationFrequency& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = value; }

    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline void SetEvaluationFrequency(EvaluationFrequency&& value) { m_evaluationFrequencyHasBeenSet = true; m_evaluationFrequency = std::move(value); }

    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithEvaluationFrequency(const EvaluationFrequency& value) { SetEvaluationFrequency(value); return *this;}

    /**
     * <p>Specifies how often the anomaly detector is to run and look for anomalies.
     * Set this value according to the frequency that the log group receives new logs.
     * For example, if the log group receives new log events every 10 minutes, then 15
     * minutes might be a good setting for <code>evaluationFrequency</code> .</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithEvaluationFrequency(EvaluationFrequency&& value) { SetEvaluationFrequency(std::move(value)); return *this;}


    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter to limit the anomaly detection model to examine
     * only log events that match the pattern you specify here. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Optionally assigns a KMS key to secure this anomaly detector and its
     * findings. If a key is assigned, the anomalies found and the model used by this
     * detector are encrypted at rest with the key. If a key is assigned to an anomaly
     * detector, a user must have permissions for both this key and for the anomaly
     * detector to retrieve information about the anomalies that it finds.</p> <p>For
     * more information about using a KMS key and to see the required IAM policy, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/LogsAnomalyDetection-KMS.html">Use
     * a KMS key with an anomaly detector</a>.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The number of days to have visibility on an anomaly. After this time period
     * has elapsed for an anomaly, it will be automatically baselined and the anomaly
     * detector will treat new occurrences of a similar anomaly as normal. Therefore,
     * if you do not correct the cause of an anomaly during the time period specified
     * in <code>anomalyVisibilityTime</code>, it will be considered normal going
     * forward and will not be detected as an anomaly.</p>
     */
    inline long long GetAnomalyVisibilityTime() const{ return m_anomalyVisibilityTime; }

    /**
     * <p>The number of days to have visibility on an anomaly. After this time period
     * has elapsed for an anomaly, it will be automatically baselined and the anomaly
     * detector will treat new occurrences of a similar anomaly as normal. Therefore,
     * if you do not correct the cause of an anomaly during the time period specified
     * in <code>anomalyVisibilityTime</code>, it will be considered normal going
     * forward and will not be detected as an anomaly.</p>
     */
    inline bool AnomalyVisibilityTimeHasBeenSet() const { return m_anomalyVisibilityTimeHasBeenSet; }

    /**
     * <p>The number of days to have visibility on an anomaly. After this time period
     * has elapsed for an anomaly, it will be automatically baselined and the anomaly
     * detector will treat new occurrences of a similar anomaly as normal. Therefore,
     * if you do not correct the cause of an anomaly during the time period specified
     * in <code>anomalyVisibilityTime</code>, it will be considered normal going
     * forward and will not be detected as an anomaly.</p>
     */
    inline void SetAnomalyVisibilityTime(long long value) { m_anomalyVisibilityTimeHasBeenSet = true; m_anomalyVisibilityTime = value; }

    /**
     * <p>The number of days to have visibility on an anomaly. After this time period
     * has elapsed for an anomaly, it will be automatically baselined and the anomaly
     * detector will treat new occurrences of a similar anomaly as normal. Therefore,
     * if you do not correct the cause of an anomaly during the time period specified
     * in <code>anomalyVisibilityTime</code>, it will be considered normal going
     * forward and will not be detected as an anomaly.</p>
     */
    inline CreateLogAnomalyDetectorRequest& WithAnomalyVisibilityTime(long long value) { SetAnomalyVisibilityTime(value); return *this;}


    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline CreateLogAnomalyDetectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_logGroupArnList;
    bool m_logGroupArnListHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    EvaluationFrequency m_evaluationFrequency;
    bool m_evaluationFrequencyHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    long long m_anomalyVisibilityTime;
    bool m_anomalyVisibilityTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
