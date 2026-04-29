/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InlineGroundTruth.h>

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
 * <p>Where to pull ground truth from</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GroundTruthSource">AWS
 * API Reference</a></p>
 */
class GroundTruthSource {
 public:
  AWS_BEDROCKAGENTCORE_API GroundTruthSource() = default;
  AWS_BEDROCKAGENTCORE_API GroundTruthSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GroundTruthSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Provide ground truth inline</p>
   */
  inline const InlineGroundTruth& GetInline() const { return m_inline; }
  inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
  template <typename InlineT = InlineGroundTruth>
  void SetInline(InlineT&& value) {
    m_inlineHasBeenSet = true;
    m_inline = std::forward<InlineT>(value);
  }
  template <typename InlineT = InlineGroundTruth>
  GroundTruthSource& WithInline(InlineT&& value) {
    SetInline(std::forward<InlineT>(value));
    return *this;
  }
  ///@}
 private:
  InlineGroundTruth m_inline;
  bool m_inlineHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
