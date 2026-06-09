/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Content of an individual asset file</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssetFileBody">AWS
 * API Reference</a></p>
 */
class AssetFileBody {
 public:
  AWS_DEVOPSAGENT_API AssetFileBody() = default;
  AWS_DEVOPSAGENT_API AssetFileBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AssetFileBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
  inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  void SetBytes(BytesT&& value) {
    m_bytesHasBeenSet = true;
    m_bytes = std::forward<BytesT>(value);
  }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  AssetFileBody& WithBytes(BytesT&& value) {
    SetBytes(std::forward<BytesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  AssetFileBody& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_bytes{};

  Aws::String m_text;
  bool m_bytesHasBeenSet = false;
  bool m_textHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
