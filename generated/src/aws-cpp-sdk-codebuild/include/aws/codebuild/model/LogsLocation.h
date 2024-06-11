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
    AWS_CODEBUILD_API LogsLocation();
    AWS_CODEBUILD_API LogsLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API LogsLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudWatch Logs group for the build logs.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline LogsLocation& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline LogsLocation& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline LogsLocation& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch Logs stream for the build logs.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline LogsLocation& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline LogsLocation& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline LogsLocation& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to an individual build log in CloudWatch Logs. The log stream is
     * created during the PROVISIONING phase of a build and the <code>deeplink</code>
     * will not be valid until it is created.</p>
     */
    inline const Aws::String& GetDeepLink() const{ return m_deepLink; }
    inline bool DeepLinkHasBeenSet() const { return m_deepLinkHasBeenSet; }
    inline void SetDeepLink(const Aws::String& value) { m_deepLinkHasBeenSet = true; m_deepLink = value; }
    inline void SetDeepLink(Aws::String&& value) { m_deepLinkHasBeenSet = true; m_deepLink = std::move(value); }
    inline void SetDeepLink(const char* value) { m_deepLinkHasBeenSet = true; m_deepLink.assign(value); }
    inline LogsLocation& WithDeepLink(const Aws::String& value) { SetDeepLink(value); return *this;}
    inline LogsLocation& WithDeepLink(Aws::String&& value) { SetDeepLink(std::move(value)); return *this;}
    inline LogsLocation& WithDeepLink(const char* value) { SetDeepLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to a build log in an S3 bucket. </p>
     */
    inline const Aws::String& GetS3DeepLink() const{ return m_s3DeepLink; }
    inline bool S3DeepLinkHasBeenSet() const { return m_s3DeepLinkHasBeenSet; }
    inline void SetS3DeepLink(const Aws::String& value) { m_s3DeepLinkHasBeenSet = true; m_s3DeepLink = value; }
    inline void SetS3DeepLink(Aws::String&& value) { m_s3DeepLinkHasBeenSet = true; m_s3DeepLink = std::move(value); }
    inline void SetS3DeepLink(const char* value) { m_s3DeepLinkHasBeenSet = true; m_s3DeepLink.assign(value); }
    inline LogsLocation& WithS3DeepLink(const Aws::String& value) { SetS3DeepLink(value); return *this;}
    inline LogsLocation& WithS3DeepLink(Aws::String&& value) { SetS3DeepLink(std::move(value)); return *this;}
    inline LogsLocation& WithS3DeepLink(const char* value) { SetS3DeepLink(value); return *this;}
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
    inline const Aws::String& GetCloudWatchLogsArn() const{ return m_cloudWatchLogsArn; }
    inline bool CloudWatchLogsArnHasBeenSet() const { return m_cloudWatchLogsArnHasBeenSet; }
    inline void SetCloudWatchLogsArn(const Aws::String& value) { m_cloudWatchLogsArnHasBeenSet = true; m_cloudWatchLogsArn = value; }
    inline void SetCloudWatchLogsArn(Aws::String&& value) { m_cloudWatchLogsArnHasBeenSet = true; m_cloudWatchLogsArn = std::move(value); }
    inline void SetCloudWatchLogsArn(const char* value) { m_cloudWatchLogsArnHasBeenSet = true; m_cloudWatchLogsArn.assign(value); }
    inline LogsLocation& WithCloudWatchLogsArn(const Aws::String& value) { SetCloudWatchLogsArn(value); return *this;}
    inline LogsLocation& WithCloudWatchLogsArn(Aws::String&& value) { SetCloudWatchLogsArn(std::move(value)); return *this;}
    inline LogsLocation& WithCloudWatchLogsArn(const char* value) { SetCloudWatchLogsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of S3 logs for a build project. Its format is
     * <code>arn:${Partition}:s3:::${BucketName}/${ObjectName}</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazons3.html#amazons3-resources-for-iam-policies">Resources
     * Defined by Amazon S3</a>. </p>
     */
    inline const Aws::String& GetS3LogsArn() const{ return m_s3LogsArn; }
    inline bool S3LogsArnHasBeenSet() const { return m_s3LogsArnHasBeenSet; }
    inline void SetS3LogsArn(const Aws::String& value) { m_s3LogsArnHasBeenSet = true; m_s3LogsArn = value; }
    inline void SetS3LogsArn(Aws::String&& value) { m_s3LogsArnHasBeenSet = true; m_s3LogsArn = std::move(value); }
    inline void SetS3LogsArn(const char* value) { m_s3LogsArnHasBeenSet = true; m_s3LogsArn.assign(value); }
    inline LogsLocation& WithS3LogsArn(const Aws::String& value) { SetS3LogsArn(value); return *this;}
    inline LogsLocation& WithS3LogsArn(Aws::String&& value) { SetS3LogsArn(std::move(value)); return *this;}
    inline LogsLocation& WithS3LogsArn(const char* value) { SetS3LogsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about CloudWatch Logs for a build project. </p>
     */
    inline const CloudWatchLogsConfig& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    inline void SetCloudWatchLogs(const CloudWatchLogsConfig& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }
    inline void SetCloudWatchLogs(CloudWatchLogsConfig&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }
    inline LogsLocation& WithCloudWatchLogs(const CloudWatchLogsConfig& value) { SetCloudWatchLogs(value); return *this;}
    inline LogsLocation& WithCloudWatchLogs(CloudWatchLogsConfig&& value) { SetCloudWatchLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about S3 logs for a build project. </p>
     */
    inline const S3LogsConfig& GetS3Logs() const{ return m_s3Logs; }
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }
    inline void SetS3Logs(const S3LogsConfig& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }
    inline void SetS3Logs(S3LogsConfig&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }
    inline LogsLocation& WithS3Logs(const S3LogsConfig& value) { SetS3Logs(value); return *this;}
    inline LogsLocation& WithS3Logs(S3LogsConfig&& value) { SetS3Logs(std::move(value)); return *this;}
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
