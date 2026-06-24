/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterCategoryConfig.h>
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
 * <p>The configuration for the content filter check, specifying which categories
 * to evaluate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksContentFilterConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksContentFilterConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content filter categories to evaluate.</p>
   */
  inline const Aws::Vector<GuardrailChecksContentFilterCategoryConfig>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<GuardrailChecksContentFilterCategoryConfig>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<GuardrailChecksContentFilterCategoryConfig>>
  GuardrailChecksContentFilterConfig& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = GuardrailChecksContentFilterCategoryConfig>
  GuardrailChecksContentFilterConfig& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksContentFilterCategoryConfig> m_categories;
  bool m_categoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
