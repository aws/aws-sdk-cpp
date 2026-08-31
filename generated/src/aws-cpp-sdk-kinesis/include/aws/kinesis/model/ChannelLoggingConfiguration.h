/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/CloudWatchLogs.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The Amazon CloudWatch Logs configuration for a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChannelLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class ChannelLoggingConfiguration {
 public:
  AWS_KINESIS_API ChannelLoggingConfiguration() = default;
  AWS_KINESIS_API ChannelLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API ChannelLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon CloudWatch Logs settings for the channel.</p>
   */
  inline const CloudWatchLogs& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
  inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
  template <typename CloudWatchLogsT = CloudWatchLogs>
  void SetCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value);
  }
  template <typename CloudWatchLogsT = CloudWatchLogs>
  ChannelLoggingConfiguration& WithCloudWatchLogs(CloudWatchLogsT&& value) {
    SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  ///@}
 private:
  CloudWatchLogs m_cloudWatchLogs;
  bool m_cloudWatchLogsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
