/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Runtime diversity configuration for a <code>GetProfileRecommendations</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommendationDiversityConfig">AWS
 * API Reference</a></p>
 */
class RecommendationDiversityConfig {
 public:
  AWS_CUSTOMERPROFILES_API RecommendationDiversityConfig() = default;
  AWS_CUSTOMERPROFILES_API RecommendationDiversityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommendationDiversityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether diversity-aware recommendations are enabled for this request.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline RecommendationDiversityConfig& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional map of placeholder name to integer cap value used to resolve
   * <code>$name</code> placeholders defined in the recommender's
   * <code>DiversityConfig</code> at inference time. Up to 2 entries are
   * supported.</p>
   */
  inline const Aws::Map<Aws::String, int>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Map<Aws::String, int>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Map<Aws::String, int>>
  RecommendationDiversityConfig& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  inline RecommendationDiversityConfig& AddValues(Aws::String key, int value) {
    m_valuesHasBeenSet = true;
    m_values.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Map<Aws::String, int> m_values;
  bool m_enabledHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
