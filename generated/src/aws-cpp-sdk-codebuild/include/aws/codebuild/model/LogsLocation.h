/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/CloudWatchLogsConfig.h>
#include <aws/codebuild/model/S3LogsConfig.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about build logs in CloudWatch Logs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/LogsLocation">AWS
   * API Reference</a></p>
   */
  class LogsLocation
  {
  public:
    AWS_CODEBUILD_API LogsLocation() = default;
    AWS_CODEBUILD_API LogsLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API LogsLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudWatch Logs group for the build logs.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    LogsLocation& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch Logs stream for the build logs.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    LogsLocation& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to an individual build log in CloudWatch Logs. The log stream is
     * created during the PROVISIONING phase of a build and the <code>deeplink</code>
     * will not be valid until it is created.</p>
     */
    inline const Aws::String& GetDeepLink() const { return m_deepLink; }
    inline bool DeepLinkHasBeenSet() const { return m_deepLinkHasBeenSet; }
    template<typename DeepLinkT = Aws::String>
    void SetDeepLink(DeepLinkT&& value) { m_deepLinkHasBeenSet = true; m_deepLink = std::forward<DeepLinkT>(value); }
    template<typename DeepLinkT = Aws::String>
    LogsLocation& WithDeepLink(DeepLinkT&& value) { SetDeepLink(std::forward<DeepLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to a build log in an S3 bucket. </p>
     */
    inline const Aws::String& GetS3DeepLink() const { return m_s3DeepLink; }
    inline bool S3DeepLinkHasBeenSet() const { return m_s3DeepLinkHasBeenSet; }
    template<typename S3DeepLinkT = Aws::String>
    void SetS3DeepLink(S3DeepLinkT&& value) { m_s3DeepLinkHasBeenSet = true; m_s3DeepLink = std::forward<S3DeepLinkT>(value); }
    template<typename S3DeepLinkT = Aws::String>
    LogsLocation& WithS3DeepLink(S3DeepLinkT&& value) { SetS3DeepLink(std::forward<S3DeepLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudWatch Logs stream for a build execution. Its format is
     * <code>arn:${Partition}:logs:${Region}:${Account}:log-group:${LogGroupName}:log-stream:${LogStreamName}</code>.
     * The CloudWatch Logs stream is created during the PROVISIONING phase of a build
     * and the ARN will not be valid until it is created. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatchlogs.html#amazoncloudwatchlogs-resources-for-iam-policies">Resources
     * Defined by CloudWatch Logs</a>.</p>
     */
    inline const Aws::String& GetCloudWatchLogsArn() const { return m_cloudWatchLogsArn; }
    inline bool CloudWatchLogsArnHasBeenSet() const { return m_cloudWatchLogsArnHasBeenSet; }
    template<typename CloudWatchLogsArnT = Aws::String>
    void SetCloudWatchLogsArn(CloudWatchLogsArnT&& value) { m_cloudWatchLogsArnHasBeenSet = true; m_cloudWatchLogsArn = std::forward<CloudWatchLogsArnT>(value); }
    template<typename CloudWatchLogsArnT = Aws::String>
    LogsLocation& WithCloudWatchLogsArn(CloudWatchLogsArnT&& value) { SetCloudWatchLogsArn(std::forward<CloudWatchLogsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of S3 logs for a build project. Its format is
     * <code>arn:${Partition}:s3:::${BucketName}/${ObjectName}</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazons3.html#amazons3-resources-for-iam-policies">Resources
     * Defined by Amazon S3</a>. </p>
     */
    inline const Aws::String& GetS3LogsArn() const { return m_s3LogsArn; }
    inline bool S3LogsArnHasBeenSet() const { return m_s3LogsArnHasBeenSet; }
    template<typename S3LogsArnT = Aws::String>
    void SetS3LogsArn(S3LogsArnT&& value) { m_s3LogsArnHasBeenSet = true; m_s3LogsArn = std::forward<S3LogsArnT>(value); }
    template<typename S3LogsArnT = Aws::String>
    LogsLocation& WithS3LogsArn(S3LogsArnT&& value) { SetS3LogsArn(std::forward<S3LogsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about CloudWatch Logs for a build project. </p>
     */
    inline const CloudWatchLogsConfig& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = CloudWatchLogsConfig>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = CloudWatchLogsConfig>
    LogsLocation& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about S3 logs for a build project. </p>
     */
    inline const S3LogsConfig& GetS3Logs() const { return m_s3Logs; }
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }
    template<typename S3LogsT = S3LogsConfig>
    void SetS3Logs(S3LogsT&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::forward<S3LogsT>(value); }
    template<typename S3LogsT = S3LogsConfig>
    LogsLocation& WithS3Logs(S3LogsT&& value) { SetS3Logs(std::forward<S3LogsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_deepLink;
    bool m_deepLinkHasBeenSet = false;

    Aws::String m_s3DeepLink;
    bool m_s3DeepLinkHasBeenSet = false;

    Aws::String m_cloudWatchLogsArn;
    bool m_cloudWatchLogsArnHasBeenSet = false;

    Aws::String m_s3LogsArn;
    bool m_s3LogsArnHasBeenSet = false;

    CloudWatchLogsConfig m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    S3LogsConfig m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
