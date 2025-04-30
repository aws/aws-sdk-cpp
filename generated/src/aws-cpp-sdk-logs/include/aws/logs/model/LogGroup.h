/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DataProtectionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/LogGroupClass.h>
#include <aws/logs/model/InheritedProperty.h>
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
   * <p>Represents a log group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogGroup">AWS API
   * Reference</a></p>
   */
  class LogGroup
  {
  public:
    AWS_CLOUDWATCHLOGS_API LogGroup() = default;
    AWS_CLOUDWATCHLOGS_API LogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    LogGroup& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the log group, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline LogGroup& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    
    inline int GetRetentionInDays() const { return m_retentionInDays; }
    inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }
    inline LogGroup& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of metric filters.</p>
     */
    inline int GetMetricFilterCount() const { return m_metricFilterCount; }
    inline bool MetricFilterCountHasBeenSet() const { return m_metricFilterCountHasBeenSet; }
    inline void SetMetricFilterCount(int value) { m_metricFilterCountHasBeenSet = true; m_metricFilterCount = value; }
    inline LogGroup& WithMetricFilterCount(int value) { SetMetricFilterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log group. This version of the ARN
     * includes a trailing <code>:*</code> after the log group name. </p> <p>Use this
     * version to refer to the ARN in IAM policies when specifying permissions for most
     * API actions. The exception is when specifying permissions for <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagResource.html">TagResource</a>,
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagResource.html">UntagResource</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsForResource.html">ListTagsForResource</a>.
     * The permissions for those three actions require the ARN version that doesn't
     * include a trailing <code>:*</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LogGroup& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes stored.</p>
     */
    inline long long GetStoredBytes() const { return m_storedBytes; }
    inline bool StoredBytesHasBeenSet() const { return m_storedBytesHasBeenSet; }
    inline void SetStoredBytes(long long value) { m_storedBytesHasBeenSet = true; m_storedBytes = value; }
    inline LogGroup& WithStoredBytes(long long value) { SetStoredBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    LogGroup& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline DataProtectionStatus GetDataProtectionStatus() const { return m_dataProtectionStatus; }
    inline bool DataProtectionStatusHasBeenSet() const { return m_dataProtectionStatusHasBeenSet; }
    inline void SetDataProtectionStatus(DataProtectionStatus value) { m_dataProtectionStatusHasBeenSet = true; m_dataProtectionStatus = value; }
    inline LogGroup& WithDataProtectionStatus(DataProtectionStatus value) { SetDataProtectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline const Aws::Vector<InheritedProperty>& GetInheritedProperties() const { return m_inheritedProperties; }
    inline bool InheritedPropertiesHasBeenSet() const { return m_inheritedPropertiesHasBeenSet; }
    template<typename InheritedPropertiesT = Aws::Vector<InheritedProperty>>
    void SetInheritedProperties(InheritedPropertiesT&& value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties = std::forward<InheritedPropertiesT>(value); }
    template<typename InheritedPropertiesT = Aws::Vector<InheritedProperty>>
    LogGroup& WithInheritedProperties(InheritedPropertiesT&& value) { SetInheritedProperties(std::forward<InheritedPropertiesT>(value)); return *this;}
    inline LogGroup& AddInheritedProperties(InheritedProperty value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This specifies the log group class for this log group. There are three
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> <li> <p>Use the <code>Delivery</code> log class only for
     * delivering Lambda logs to store in Amazon S3 or Amazon Data Firehose. Log events
     * in log groups in the Delivery class are kept in CloudWatch Logs for only one
     * day. This log class doesn't offer rich CloudWatch Logs capabilities such as
     * CloudWatch Logs Insights queries.</p> </li> </ul> <p>For details about the
     * features supported by the Standard and Infrequent Access classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroupClass GetLogGroupClass() const { return m_logGroupClass; }
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }
    inline void SetLogGroupClass(LogGroupClass value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }
    inline LogGroup& WithLogGroupClass(LogGroupClass value) { SetLogGroupClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log group. This version of the ARN
     * doesn't include a trailing <code>:*</code> after the log group name. </p> <p>Use
     * this version to refer to the ARN in the following situations:</p> <ul> <li>
     * <p>In the <code>logGroupIdentifier</code> input field in many CloudWatch Logs
     * APIs.</p> </li> <li> <p>In the <code>resourceArn</code> field in tagging
     * APIs</p> </li> <li> <p>In IAM policies, when specifying permissions for <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagResource.html">TagResource</a>,
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagResource.html">UntagResource</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsForResource.html">ListTagsForResource</a>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    LogGroup& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    int m_retentionInDays{0};
    bool m_retentionInDaysHasBeenSet = false;

    int m_metricFilterCount{0};
    bool m_metricFilterCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_storedBytes{0};
    bool m_storedBytesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    DataProtectionStatus m_dataProtectionStatus{DataProtectionStatus::NOT_SET};
    bool m_dataProtectionStatusHasBeenSet = false;

    Aws::Vector<InheritedProperty> m_inheritedProperties;
    bool m_inheritedPropertiesHasBeenSet = false;

    LogGroupClass m_logGroupClass{LogGroupClass::NOT_SET};
    bool m_logGroupClassHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
