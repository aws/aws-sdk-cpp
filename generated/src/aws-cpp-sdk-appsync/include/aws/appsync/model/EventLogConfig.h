/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/EventLogLevel.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes the CloudWatch Logs configuration for the Event API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EventLogConfig">AWS
   * API Reference</a></p>
   */
  class EventLogConfig
  {
  public:
    AWS_APPSYNC_API EventLogConfig() = default;
    AWS_APPSYNC_API EventLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EventLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of information to log for the Event API. </p>
     */
    inline EventLogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(EventLogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline EventLogConfig& WithLogLevel(EventLogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM service role that AppSync assumes to publish CloudWatch Logs in your
     * account.</p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const { return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    void SetCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::forward<CloudWatchLogsRoleArnT>(value); }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    EventLogConfig& WithCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { SetCloudWatchLogsRoleArn(std::forward<CloudWatchLogsRoleArnT>(value)); return *this;}
    ///@}
  private:

    EventLogLevel m_logLevel{EventLogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
