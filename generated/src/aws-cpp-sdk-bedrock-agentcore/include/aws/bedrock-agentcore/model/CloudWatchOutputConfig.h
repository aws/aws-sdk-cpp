/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>CloudWatch Logs destination for batch evaluation results</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchOutputConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchOutputConfig {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch log group where evaluation results will be
   * written.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  CloudWatchOutputConfig& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch log stream where evaluation results will be
   * written.</p>
   */
  inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
  inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
  template <typename LogStreamNameT = Aws::String>
  void SetLogStreamName(LogStreamNameT&& value) {
    m_logStreamNameHasBeenSet = true;
    m_logStreamName = std::forward<LogStreamNameT>(value);
  }
  template <typename LogStreamNameT = Aws::String>
  CloudWatchOutputConfig& WithLogStreamName(LogStreamNameT&& value) {
    SetLogStreamName(std::forward<LogStreamNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupName;

  Aws::String m_logStreamName;
  bool m_logGroupNameHasBeenSet = false;
  bool m_logStreamNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
