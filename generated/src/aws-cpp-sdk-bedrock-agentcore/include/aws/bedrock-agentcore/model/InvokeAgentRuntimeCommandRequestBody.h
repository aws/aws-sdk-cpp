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
 * <p>The request body structure for the <code>InvokeAgentRuntimeCommand</code>
 * operation, containing the command to execute and optional configuration
 * parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeAgentRuntimeCommandRequestBody">AWS
 * API Reference</a></p>
 */
class InvokeAgentRuntimeCommandRequestBody {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandRequestBody() = default;
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandRequestBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandRequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The shell command to execute on the agent runtime. This command is executed
   * in the runtime environment and its output is streamed back to the caller.</p>
   */
  inline const Aws::String& GetCommand() const { return m_command; }
  inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
  template <typename CommandT = Aws::String>
  void SetCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command = std::forward<CommandT>(value);
  }
  template <typename CommandT = Aws::String>
  InvokeAgentRuntimeCommandRequestBody& WithCommand(CommandT&& value) {
    SetCommand(std::forward<CommandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds to wait for the command to complete. If the
   * command execution exceeds this timeout, it will be terminated. Default is 300
   * seconds. Minimum is 1 second. Maximum is 3600 seconds.</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline InvokeAgentRuntimeCommandRequestBody& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_command;

  int m_timeout{0};
  bool m_commandHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
