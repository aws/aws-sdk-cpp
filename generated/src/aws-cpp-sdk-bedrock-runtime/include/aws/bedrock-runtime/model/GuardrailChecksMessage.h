/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentBlock.h>
#include <aws/bedrock-runtime/model/GuardrailChecksRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A message to evaluate against guardrail checks, containing a role and content
 * blocks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksMessage">AWS
 * API Reference</a></p>
 */
class GuardrailChecksMessage {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksMessage() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The role of the message sender.</p>
   */
  inline GuardrailChecksRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(GuardrailChecksRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline GuardrailChecksMessage& WithRole(GuardrailChecksRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content blocks for the message.</p>
   */
  inline const Aws::Vector<GuardrailChecksContentBlock>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<GuardrailChecksContentBlock>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<GuardrailChecksContentBlock>>
  GuardrailChecksMessage& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = GuardrailChecksContentBlock>
  GuardrailChecksMessage& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  GuardrailChecksRole m_role{GuardrailChecksRole::NOT_SET};

  Aws::Vector<GuardrailChecksContentBlock> m_content;
  bool m_roleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
