/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

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
 * <p>The updated Amazon CloudWatch Logs settings for a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/CloudWatchLogsUpdateInput">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsUpdateInput {
 public:
  AWS_KINESIS_API CloudWatchLogsUpdateInput() = default;
  AWS_KINESIS_API CloudWatchLogsUpdateInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API CloudWatchLogsUpdateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether logging to Amazon CloudWatch Logs is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CloudWatchLogsUpdateInput& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon CloudWatch Logs log group.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  CloudWatchLogsUpdateInput& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon CloudWatch Logs log stream.</p>
   */
  inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
  inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
  template <typename LogStreamNameT = Aws::String>
  void SetLogStreamName(LogStreamNameT&& value) {
    m_logStreamNameHasBeenSet = true;
    m_logStreamName = std::forward<LogStreamNameT>(value);
  }
  template <typename LogStreamNameT = Aws::String>
  CloudWatchLogsUpdateInput& WithLogStreamName(LogStreamNameT&& value) {
    SetLogStreamName(std::forward<LogStreamNameT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_logGroupName;

  Aws::String m_logStreamName;
  bool m_enabledHasBeenSet = false;
  bool m_logGroupNameHasBeenSet = false;
  bool m_logStreamNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
