/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackCategoryConfig.h>
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
 * <p>The configuration for the prompt attack check, specifying which categories to
 * evaluate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksPromptAttackConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksPromptAttackConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The prompt attack categories to evaluate.</p>
   */
  inline const Aws::Vector<GuardrailChecksPromptAttackCategoryConfig>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<GuardrailChecksPromptAttackCategoryConfig>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<GuardrailChecksPromptAttackCategoryConfig>>
  GuardrailChecksPromptAttackConfig& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = GuardrailChecksPromptAttackCategoryConfig>
  GuardrailChecksPromptAttackConfig& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksPromptAttackCategoryConfig> m_categories;
  bool m_categoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
