/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSelectionMode.h>
#include <aws/apiportal/model/RuleFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>How Managed APIs are selected for a product. With <code>CUSTOM</code>, you
 * associate APIs yourself. With <code>RULE_BASED</code>, the APIs that match
 * <code>ruleFilters</code> are selected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiSelectionConfiguration">AWS
 * API Reference</a></p>
 */
class ApiSelectionConfiguration {
 public:
  AWS_APIPORTAL_API ApiSelectionConfiguration() = default;
  AWS_APIPORTAL_API ApiSelectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiSelectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline ApiSelectionMode GetApiSelectionMode() const { return m_apiSelectionMode; }
  inline bool ApiSelectionModeHasBeenSet() const { return m_apiSelectionModeHasBeenSet; }
  inline void SetApiSelectionMode(ApiSelectionMode value) {
    m_apiSelectionModeHasBeenSet = true;
    m_apiSelectionMode = value;
  }
  inline ApiSelectionConfiguration& WithApiSelectionMode(ApiSelectionMode value) {
    SetApiSelectionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Required for RULE_BASED, rejected for CUSTOM. Filters are combined with AND,
   * the values within one filter with OR, and evaluated only over the account's
   * Managed APIs. Replaced as a whole on update, not merged.</p>
   */
  inline const Aws::Vector<RuleFilter>& GetRuleFilters() const { return m_ruleFilters; }
  inline bool RuleFiltersHasBeenSet() const { return m_ruleFiltersHasBeenSet; }
  template <typename RuleFiltersT = Aws::Vector<RuleFilter>>
  void SetRuleFilters(RuleFiltersT&& value) {
    m_ruleFiltersHasBeenSet = true;
    m_ruleFilters = std::forward<RuleFiltersT>(value);
  }
  template <typename RuleFiltersT = Aws::Vector<RuleFilter>>
  ApiSelectionConfiguration& WithRuleFilters(RuleFiltersT&& value) {
    SetRuleFilters(std::forward<RuleFiltersT>(value));
    return *this;
  }
  template <typename RuleFiltersT = RuleFilter>
  ApiSelectionConfiguration& AddRuleFilters(RuleFiltersT&& value) {
    m_ruleFiltersHasBeenSet = true;
    m_ruleFilters.emplace_back(std::forward<RuleFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  ApiSelectionMode m_apiSelectionMode{ApiSelectionMode::NOT_SET};

  Aws::Vector<RuleFilter> m_ruleFilters;
  bool m_apiSelectionModeHasBeenSet = false;
  bool m_ruleFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
