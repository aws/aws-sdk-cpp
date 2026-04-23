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
#include <aws/codebuild/model/LogsConfigStatusType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Information about Amazon CloudWatch Logs for a build project. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CloudWatchLogsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API CloudWatchLogsConfig
  {
  public:
    CloudWatchLogsConfig();
    CloudWatchLogsConfig(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline const LogsConfigStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline void SetStatus(const LogsConfigStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline void SetStatus(LogsConfigStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline CloudWatchLogsConfig& WithStatus(const LogsConfigStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the logs in Amazon CloudWatch Logs for a build project.
     * Valid values are:</p> <ul> <li> <p> <code>ENABLED</code>: Amazon CloudWatch Logs
     * are enabled for this build project.</p> </li> <li> <p> <code>DISABLED</code>:
     * Amazon CloudWatch Logs are not enabled for this build project.</p> </li> </ul>
     */
    inline CloudWatchLogsConfig& WithStatus(LogsConfigStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p> The group name of the logs in Amazon CloudWatch Logs. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p> The prefix of the stream name of the Amazon CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with Log Groups and Log Streams</a>. </p>
     */
    inline CloudWatchLogsConfig& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    LogsConfigStatusType m_status;
    bool m_statusHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
