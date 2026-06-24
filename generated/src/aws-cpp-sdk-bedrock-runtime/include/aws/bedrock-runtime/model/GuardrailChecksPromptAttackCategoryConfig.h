/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackCategory.h>

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
 * <p>The configuration for a single prompt attack category to
 * evaluate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksPromptAttackCategoryConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksPromptAttackCategoryConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackCategoryConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackCategoryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackCategoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The prompt attack category to evaluate.</p>
   */
  inline GuardrailChecksPromptAttackCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(GuardrailChecksPromptAttackCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline GuardrailChecksPromptAttackCategoryConfig& WithCategory(GuardrailChecksPromptAttackCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}
 private:
  GuardrailChecksPromptAttackCategory m_category{GuardrailChecksPromptAttackCategory::NOT_SET};
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
