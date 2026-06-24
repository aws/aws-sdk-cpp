/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
 * <p>The text unit usage for the prompt attack check.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksPromptAttackUsage">AWS
 * API Reference</a></p>
 */
class GuardrailChecksPromptAttackUsage {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackUsage() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of text units consumed by the prompt attack check.</p>
   */
  inline int GetTextUnits() const { return m_textUnits; }
  inline bool TextUnitsHasBeenSet() const { return m_textUnitsHasBeenSet; }
  inline void SetTextUnits(int value) {
    m_textUnitsHasBeenSet = true;
    m_textUnits = value;
  }
  inline GuardrailChecksPromptAttackUsage& WithTextUnits(int value) {
    SetTextUnits(value);
    return *this;
  }
  ///@}
 private:
  int m_textUnits{0};
  bool m_textUnitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
