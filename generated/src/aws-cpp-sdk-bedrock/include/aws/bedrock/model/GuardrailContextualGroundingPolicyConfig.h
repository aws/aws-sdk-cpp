/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContextualGroundingFilterConfig.h>
#include <aws/bedrock/model/GuardrailContextualGroundingTierConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>The policy configuration details for the guardrails contextual grounding
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingPolicyConfig">AWS
 * API Reference</a></p>
 */
class GuardrailContextualGroundingPolicyConfig {
 public:
  AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig() = default;
  AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter configuration details for the guardrails contextual grounding
   * policy.</p>
   */
  inline const Aws::Vector<GuardrailContextualGroundingFilterConfig>& GetFiltersConfig() const { return m_filtersConfig; }
  inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }
  template <typename FiltersConfigT = Aws::Vector<GuardrailContextualGroundingFilterConfig>>
  void SetFiltersConfig(FiltersConfigT&& value) {
    m_filtersConfigHasBeenSet = true;
    m_filtersConfig = std::forward<FiltersConfigT>(value);
  }
  template <typename FiltersConfigT = Aws::Vector<GuardrailContextualGroundingFilterConfig>>
  GuardrailContextualGroundingPolicyConfig& WithFiltersConfig(FiltersConfigT&& value) {
    SetFiltersConfig(std::forward<FiltersConfigT>(value));
    return *this;
  }
  template <typename FiltersConfigT = GuardrailContextualGroundingFilterConfig>
  GuardrailContextualGroundingPolicyConfig& AddFiltersConfig(FiltersConfigT&& value) {
    m_filtersConfigHasBeenSet = true;
    m_filtersConfig.emplace_back(std::forward<FiltersConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier that your guardrail uses for contextual grounding.</p>
   */
  inline const GuardrailContextualGroundingTierConfig& GetTierConfig() const { return m_tierConfig; }
  inline bool TierConfigHasBeenSet() const { return m_tierConfigHasBeenSet; }
  template <typename TierConfigT = GuardrailContextualGroundingTierConfig>
  void SetTierConfig(TierConfigT&& value) {
    m_tierConfigHasBeenSet = true;
    m_tierConfig = std::forward<TierConfigT>(value);
  }
  template <typename TierConfigT = GuardrailContextualGroundingTierConfig>
  GuardrailContextualGroundingPolicyConfig& WithTierConfig(TierConfigT&& value) {
    SetTierConfig(std::forward<TierConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailContextualGroundingFilterConfig> m_filtersConfig;

  GuardrailContextualGroundingTierConfig m_tierConfig;
  bool m_filtersConfigHasBeenSet = false;
  bool m_tierConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
