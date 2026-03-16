/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CommandExecutionStatus.h>

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
 * <p>Final event indicating command execution has completed</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ContentStopEvent">AWS
 * API Reference</a></p>
 */
class ContentStopEvent {
 public:
  AWS_BEDROCKAGENTCORE_API ContentStopEvent() = default;
  AWS_BEDROCKAGENTCORE_API ContentStopEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ContentStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Exit code: 0 = success, -1 = platform error, &gt;0 = command error</p>
   */
  inline int GetExitCode() const { return m_exitCode; }
  inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
  inline void SetExitCode(int value) {
    m_exitCodeHasBeenSet = true;
    m_exitCode = value;
  }
  inline ContentStopEvent& WithExitCode(int value) {
    SetExitCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Execution status</p>
   */
  inline CommandExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CommandExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContentStopEvent& WithStatus(CommandExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  int m_exitCode{0};

  CommandExecutionStatus m_status{CommandExecutionStatus::NOT_SET};
  bool m_exitCodeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
