/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BrowserActionStatus.h>
#include <aws/core/utils/Array.h>
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
 * <p>The result of a screenshot action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ScreenshotResult">AWS
 * API Reference</a></p>
 */
class ScreenshotResult {
 public:
  AWS_BEDROCKAGENTCORE_API ScreenshotResult() = default;
  AWS_BEDROCKAGENTCORE_API ScreenshotResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ScreenshotResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline ScreenshotResult& WithStatus(BrowserActionStatus value) {
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
  ScreenshotResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base64-encoded image data. Present only when the action succeeded.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::Utils::ByteBuffer>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Utils::ByteBuffer>
  ScreenshotResult& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  BrowserActionStatus m_status{BrowserActionStatus::NOT_SET};

  Aws::String m_error;

  Aws::Utils::ByteBuffer m_data{};
  bool m_statusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
