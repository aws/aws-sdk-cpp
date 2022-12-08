/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/CloudWatchLogsLogGroup.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>The location where SimSpace Weaver sends simulation log data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/LogDestination">AWS
   * API Reference</a></p>
   */
  class LogDestination
  {
  public:
    AWS_SIMSPACEWEAVER_API LogDestination();
    AWS_SIMSPACEWEAVER_API LogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline const CloudWatchLogsLogGroup& GetCloudWatchLogsLogGroup() const{ return m_cloudWatchLogsLogGroup; }

    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline bool CloudWatchLogsLogGroupHasBeenSet() const { return m_cloudWatchLogsLogGroupHasBeenSet; }

    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline void SetCloudWatchLogsLogGroup(const CloudWatchLogsLogGroup& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = value; }

    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline void SetCloudWatchLogsLogGroup(CloudWatchLogsLogGroup&& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = std::move(value); }

    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline LogDestination& WithCloudWatchLogsLogGroup(const CloudWatchLogsLogGroup& value) { SetCloudWatchLogsLogGroup(value); return *this;}

    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline LogDestination& WithCloudWatchLogsLogGroup(CloudWatchLogsLogGroup&& value) { SetCloudWatchLogsLogGroup(std::move(value)); return *this;}

  private:

    CloudWatchLogsLogGroup m_cloudWatchLogsLogGroup;
    bool m_cloudWatchLogsLogGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
