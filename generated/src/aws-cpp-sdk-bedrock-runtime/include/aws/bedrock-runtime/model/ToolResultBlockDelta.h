/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>Contains incremental updates to tool results information during streaming
 * responses. This allows clients to build up tool results data progressively as
 * the response is generated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolResultBlockDelta">AWS
 * API Reference</a></p>
 */
class ToolResultBlockDelta {
 public:
  AWS_BEDROCKRUNTIME_API ToolResultBlockDelta() = default;
  AWS_BEDROCKRUNTIME_API ToolResultBlockDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolResultBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reasoning the model used to return the output.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  ToolResultBlockDelta& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schema for the tool result content block. see <a
   * href="https://json-schema.org/understanding-json-schema/reference">JSON Schema
   * Reference</a>.</p>
   */
  inline Aws::Utils::DocumentView GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = Aws::Utils::Document>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = Aws::Utils::Document>
  ToolResultBlockDelta& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::Utils::Document m_json;
  bool m_textHasBeenSet = false;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
