/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Information about logs for a build project. These can be logs in Amazon
   * CloudWatch Logs, built in a specified S3 bucket, or both. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/LogsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API LogsConfig
  {
  public:
    LogsConfig();
    LogsConfig(Aws::Utils::Json::JsonView jsonValue);
    LogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
     */
    inline const CloudWatchLogsConfig& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsConfig& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsConfig&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
     */
    inline LogsConfig& WithCloudWatchLogs(const CloudWatchLogsConfig& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p> Information about Amazon CloudWatch Logs for a build project. Amazon
     * CloudWatch Logs are enabled by default. </p>
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
    bool m_cloudWatchLogsHasBeenSet;

    S3LogsConfig m_s3Logs;
    bool m_s3LogsHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
