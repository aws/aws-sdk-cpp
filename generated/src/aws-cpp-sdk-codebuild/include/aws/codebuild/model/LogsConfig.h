/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
   * <p> Information about logs for a build project. These can be logs in CloudWatch
   * Logs, built in a specified S3 bucket, or both. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/LogsConfig">AWS
   * API Reference</a></p>
   */
  class LogsConfig
  {
  public:
    AWS_CODEBUILD_API LogsConfig();
    AWS_CODEBUILD_API LogsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API LogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline const CloudWatchLogsConfig& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsConfig& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsConfig&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline LogsConfig& WithCloudWatchLogs(const CloudWatchLogsConfig& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p> Information about CloudWatch Logs for a build project. CloudWatch Logs are
     * enabled by default. </p>
     */
    inline LogsConfig& WithCloudWatchLogs(CloudWatchLogsConfig&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline const S3LogsConfig& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline void SetS3Logs(const S3LogsConfig& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline void SetS3Logs(S3LogsConfig&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline LogsConfig& WithS3Logs(const S3LogsConfig& value) { SetS3Logs(value); return *this;}

    /**
     * <p> Information about logs built to an S3 bucket for a build project. S3 logs
     * are not enabled by default. </p>
     */
    inline LogsConfig& WithS3Logs(S3LogsConfig&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    CloudWatchLogsConfig m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    S3LogsConfig m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
