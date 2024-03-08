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
    AWS_CLOUDWATCHLOGS_API LogGroup();
    AWS_CLOUDWATCHLOGS_API LogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The creation time of the log group, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the log group, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the log group, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the log group, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline LogGroup& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    
    inline int GetRetentionInDays() const{ return m_retentionInDays; }

    
    inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }

    
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }

    
    inline LogGroup& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}


    /**
     * <p>The number of metric filters.</p>
     */
    inline int GetMetricFilterCount() const{ return m_metricFilterCount; }

    /**
     * <p>The number of metric filters.</p>
     */
    inline bool MetricFilterCountHasBeenSet() const { return m_metricFilterCountHasBeenSet; }

    /**
     * <p>The number of metric filters.</p>
     */
    inline void SetMetricFilterCount(int value) { m_metricFilterCountHasBeenSet = true; m_metricFilterCount = value; }

    /**
     * <p>The number of metric filters.</p>
     */
    inline LogGroup& WithMetricFilterCount(int value) { SetMetricFilterCount(value); return *this;}


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
    inline const Aws::String& GetArn() const{ return m_arn; }

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
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

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
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

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
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

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
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

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
    inline LogGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

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
    inline LogGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

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
    inline LogGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The number of bytes stored.</p>
     */
    inline long long GetStoredBytes() const{ return m_storedBytes; }

    /**
     * <p>The number of bytes stored.</p>
     */
    inline bool StoredBytesHasBeenSet() const { return m_storedBytesHasBeenSet; }

    /**
     * <p>The number of bytes stored.</p>
     */
    inline void SetStoredBytes(long long value) { m_storedBytesHasBeenSet = true; m_storedBytes = value; }

    /**
     * <p>The number of bytes stored.</p>
     */
    inline LogGroup& WithStoredBytes(long long value) { SetStoredBytes(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline LogGroup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline LogGroup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data.</p>
     */
    inline LogGroup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline const DataProtectionStatus& GetDataProtectionStatus() const{ return m_dataProtectionStatus; }

    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline bool DataProtectionStatusHasBeenSet() const { return m_dataProtectionStatusHasBeenSet; }

    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline void SetDataProtectionStatus(const DataProtectionStatus& value) { m_dataProtectionStatusHasBeenSet = true; m_dataProtectionStatus = value; }

    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline void SetDataProtectionStatus(DataProtectionStatus&& value) { m_dataProtectionStatusHasBeenSet = true; m_dataProtectionStatus = std::move(value); }

    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline LogGroup& WithDataProtectionStatus(const DataProtectionStatus& value) { SetDataProtectionStatus(value); return *this;}

    /**
     * <p>Displays whether this log group has a protection policy, or whether it had
     * one in the past. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p>
     */
    inline LogGroup& WithDataProtectionStatus(DataProtectionStatus&& value) { SetDataProtectionStatus(std::move(value)); return *this;}


    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline const Aws::Vector<InheritedProperty>& GetInheritedProperties() const{ return m_inheritedProperties; }

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline bool InheritedPropertiesHasBeenSet() const { return m_inheritedPropertiesHasBeenSet; }

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline void SetInheritedProperties(const Aws::Vector<InheritedProperty>& value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties = value; }

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline void SetInheritedProperties(Aws::Vector<InheritedProperty>&& value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties = std::move(value); }

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline LogGroup& WithInheritedProperties(const Aws::Vector<InheritedProperty>& value) { SetInheritedProperties(value); return *this;}

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline LogGroup& WithInheritedProperties(Aws::Vector<InheritedProperty>&& value) { SetInheritedProperties(std::move(value)); return *this;}

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline LogGroup& AddInheritedProperties(const InheritedProperty& value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties.push_back(value); return *this; }

    /**
     * <p>Displays all the properties that this log group has inherited from
     * account-level settings.</p>
     */
    inline LogGroup& AddInheritedProperties(InheritedProperty&& value) { m_inheritedPropertiesHasBeenSet = true; m_inheritedProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline const LogGroupClass& GetLogGroupClass() const{ return m_logGroupClass; }

    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }

    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(const LogGroupClass& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }

    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(LogGroupClass&& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = std::move(value); }

    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroup& WithLogGroupClass(const LogGroupClass& value) { SetLogGroupClass(value); return *this;}

    /**
     * <p>This specifies the log group class for this log group. There are two
     * classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports all
     * CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent Access</code>
     * log class supports a subset of CloudWatch Logs features and incurs lower
     * costs.</p> </li> </ul> <p>For details about the features supported by each
     * class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroup& WithLogGroupClass(LogGroupClass&& value) { SetLogGroupClass(std::move(value)); return *this;}


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
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

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
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

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
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

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
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

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
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

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
    inline LogGroup& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

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
    inline LogGroup& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

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
    inline LogGroup& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    int m_retentionInDays;
    bool m_retentionInDaysHasBeenSet = false;

    int m_metricFilterCount;
    bool m_metricFilterCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_storedBytes;
    bool m_storedBytesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    DataProtectionStatus m_dataProtectionStatus;
    bool m_dataProtectionStatusHasBeenSet = false;

    Aws::Vector<InheritedProperty> m_inheritedProperties;
    bool m_inheritedPropertiesHasBeenSet = false;

    LogGroupClass m_logGroupClass;
    bool m_logGroupClassHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
