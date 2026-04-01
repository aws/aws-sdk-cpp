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
 * <p>An event that signals the completion of a command execution. This event
 * contains the final status and exit code of the executed command.</p><p><h3>See
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
   * <p>The exit code returned by the executed command. An exit code of 0 indicates
   * successful execution, -1 indicates a platform error, and values greater than 0
   * indicate command-specific errors.</p>
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
   * <p>The final status of the command execution. Valid values are
   * <code>COMPLETED</code> for successful completion or <code>TIMED_OUT</code> if
   * the command exceeded the specified timeout.</p>
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
