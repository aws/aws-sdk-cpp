/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/WafRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the Web Application Firewall (WAF) configuration of a Lightsail
 * distribution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafConfig">AWS
 * API Reference</a></p>
 */
class WafConfig {
 public:
  AWS_LIGHTSAIL_API WafConfig() = default;
  AWS_LIGHTSAIL_API WafConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether WAF is enabled for the distribution.</p>
   */
  inline bool GetIsWafEnabled() const { return m_isWafEnabled; }
  inline bool IsWafEnabledHasBeenSet() const { return m_isWafEnabledHasBeenSet; }
  inline void SetIsWafEnabled(bool value) {
    m_isWafEnabledHasBeenSet = true;
    m_isWafEnabled = value;
  }
  inline WafConfig& WithIsWafEnabled(bool value) {
    SetIsWafEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of objects that describe the WAF rule groups enabled for the
   * distribution.</p>
   */
  inline const Aws::Vector<WafRule>& GetWafRules() const { return m_wafRules; }
  inline bool WafRulesHasBeenSet() const { return m_wafRulesHasBeenSet; }
  template <typename WafRulesT = Aws::Vector<WafRule>>
  void SetWafRules(WafRulesT&& value) {
    m_wafRulesHasBeenSet = true;
    m_wafRules = std::forward<WafRulesT>(value);
  }
  template <typename WafRulesT = Aws::Vector<WafRule>>
  WafConfig& WithWafRules(WafRulesT&& value) {
    SetWafRules(std::forward<WafRulesT>(value));
    return *this;
  }
  template <typename WafRulesT = WafRule>
  WafConfig& AddWafRules(WafRulesT&& value) {
    m_wafRulesHasBeenSet = true;
    m_wafRules.emplace_back(std::forward<WafRulesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isWafEnabled{false};

  Aws::Vector<WafRule> m_wafRules;
  bool m_isWafEnabledHasBeenSet = false;
  bool m_wafRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
