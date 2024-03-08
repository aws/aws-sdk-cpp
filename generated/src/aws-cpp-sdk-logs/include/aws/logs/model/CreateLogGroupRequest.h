/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/logs/model/LogGroupClass.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class CreateLogGroupRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateLogGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogGroup"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>A name for the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>A name for the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>A name for the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>A name for the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>A name for the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>A name for the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline CreateLogGroupRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline CreateLogGroupRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline CreateLogGroupRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p> <p>You can grant users access to
     * certain log groups while preventing them from accessing other log groups. To do
     * so, tag your groups and use IAM policies that refer to those tags. To assign
     * tags when you create a log group, you must have either the
     * <code>logs:TagResource</code> or <code>logs:TagLogGroup</code> permission. For
     * more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>. For more information about using tags to
     * control access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLogGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline const LogGroupClass& GetLogGroupClass() const{ return m_logGroupClass; }

    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }

    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(const LogGroupClass& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }

    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(LogGroupClass&& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = std::move(value); }

    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline CreateLogGroupRequest& WithLogGroupClass(const LogGroupClass& value) { SetLogGroupClass(value); return *this;}

    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are two classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> </ul> <p>If you omit this parameter, the default of
     * <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline CreateLogGroupRequest& WithLogGroupClass(LogGroupClass&& value) { SetLogGroupClass(std::move(value)); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    LogGroupClass m_logGroupClass;
    bool m_logGroupClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
