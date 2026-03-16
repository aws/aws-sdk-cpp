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
 * <p>Content event containing stdout or stderr output</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ContentDeltaEvent">AWS
 * API Reference</a></p>
 */
class ContentDeltaEvent {
 public:
  AWS_BEDROCKAGENTCORE_API ContentDeltaEvent() = default;
  AWS_BEDROCKAGENTCORE_API ContentDeltaEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ContentDeltaEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Standard output content</p>
   */
  inline const Aws::String& GetStdout() const { return m_stdout; }
  inline bool StdoutHasBeenSet() const { return m_stdoutHasBeenSet; }
  template <typename StdoutT = Aws::String>
  void SetStdout(StdoutT&& value) {
    m_stdoutHasBeenSet = true;
    m_stdout = std::forward<StdoutT>(value);
  }
  template <typename StdoutT = Aws::String>
  ContentDeltaEvent& WithStdout(StdoutT&& value) {
    SetStdout(std::forward<StdoutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Standard error content</p>
   */
  inline const Aws::String& GetStderr() const { return m_stderr; }
  inline bool StderrHasBeenSet() const { return m_stderrHasBeenSet; }
  template <typename StderrT = Aws::String>
  void SetStderr(StderrT&& value) {
    m_stderrHasBeenSet = true;
    m_stderr = std::forward<StderrT>(value);
  }
  template <typename StderrT = Aws::String>
  ContentDeltaEvent& WithStderr(StderrT&& value) {
    SetStderr(std::forward<StderrT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stdout;

  Aws::String m_stderr;
  bool m_stdoutHasBeenSet = false;
  bool m_stderrHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
