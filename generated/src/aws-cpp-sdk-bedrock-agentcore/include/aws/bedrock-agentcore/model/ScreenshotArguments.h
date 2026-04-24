/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ScreenshotFormat.h>

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
 * <p>Arguments for a screenshot action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ScreenshotArguments">AWS
 * API Reference</a></p>
 */
class ScreenshotArguments {
 public:
  AWS_BEDROCKAGENTCORE_API ScreenshotArguments() = default;
  AWS_BEDROCKAGENTCORE_API ScreenshotArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ScreenshotArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The image format for the screenshot. Defaults to <code>PNG</code>.</p>
   */
  inline ScreenshotFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(ScreenshotFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline ScreenshotArguments& WithFormat(ScreenshotFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  ScreenshotFormat m_format{ScreenshotFormat::NOT_SET};
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
