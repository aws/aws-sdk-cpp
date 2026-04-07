/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BrowserActionStatus.h>
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
 * <p>The result of a mouse move action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MouseMoveResult">AWS
 * API Reference</a></p>
 */
class MouseMoveResult {
 public:
  AWS_BEDROCKAGENTCORE_API MouseMoveResult() = default;
  AWS_BEDROCKAGENTCORE_API MouseMoveResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MouseMoveResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the action execution.</p>
   */
  inline BrowserActionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BrowserActionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MouseMoveResult& WithStatus(BrowserActionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message. Present only when the action failed.</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  MouseMoveResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  BrowserActionStatus m_status{BrowserActionStatus::NOT_SET};

  Aws::String m_error;
  bool m_statusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
