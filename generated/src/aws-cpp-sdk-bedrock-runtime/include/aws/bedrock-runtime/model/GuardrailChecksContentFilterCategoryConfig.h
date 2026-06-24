/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterCategory.h>

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
 * <p>The configuration for a single content filter category to
 * evaluate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksContentFilterCategoryConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksContentFilterCategoryConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterCategoryConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterCategoryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterCategoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content filter category to evaluate.</p>
   */
  inline GuardrailChecksContentFilterCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(GuardrailChecksContentFilterCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline GuardrailChecksContentFilterCategoryConfig& WithCategory(GuardrailChecksContentFilterCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}
 private:
  GuardrailChecksContentFilterCategory m_category{GuardrailChecksContentFilterCategory::NOT_SET};
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
