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
    AWS_CLOUDWATCHLOGS_API CreateLogGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogGroup"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CreateLogGroupRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateLogGroupRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLogGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLogGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify the log group class for this log group. There
     * are three classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> <li> <p>Use the <code>Delivery</code> log class only for
     * delivering Lambda logs to store in Amazon S3 or Amazon Data Firehose. Log events
     * in log groups in the Delivery class are kept in CloudWatch Logs for only one
     * day. This log class doesn't offer rich CloudWatch Logs capabilities such as
     * CloudWatch Logs Insights queries.</p> </li> </ul> <p>If you omit this parameter,
     * the default of <code>STANDARD</code> is used.</p>  <p>The value of
     * <code>logGroupClass</code> can't be changed after a log group is created.</p>
     *  <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroupClass GetLogGroupClass() const { return m_logGroupClass; }
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }
    inline void SetLogGroupClass(LogGroupClass value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }
    inline CreateLogGroupRequest& WithLogGroupClass(LogGroupClass value) { SetLogGroupClass(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    LogGroupClass m_logGroupClass{LogGroupClass::NOT_SET};
    bool m_logGroupClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
