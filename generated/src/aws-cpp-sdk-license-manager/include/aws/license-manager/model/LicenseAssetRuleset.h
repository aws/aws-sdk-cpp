/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>License asset ruleset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseAssetRuleset">AWS
 * API Reference</a></p>
 */
class LicenseAssetRuleset {
 public:
  AWS_LICENSEMANAGER_API LicenseAssetRuleset() = default;
  AWS_LICENSEMANAGER_API LicenseAssetRuleset(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API LicenseAssetRuleset& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>License asset ruleset name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  LicenseAssetRuleset& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset ruleset description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LicenseAssetRuleset& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset rules.</p>
   */
  inline const Aws::Vector<LicenseAssetRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<LicenseAssetRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<LicenseAssetRule>>
  LicenseAssetRuleset& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = LicenseAssetRule>
  LicenseAssetRuleset& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset ruleset.</p>
   */
  inline const Aws::String& GetLicenseAssetRulesetArn() const { return m_licenseAssetRulesetArn; }
  inline bool LicenseAssetRulesetArnHasBeenSet() const { return m_licenseAssetRulesetArnHasBeenSet; }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  void SetLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    m_licenseAssetRulesetArnHasBeenSet = true;
    m_licenseAssetRulesetArn = std::forward<LicenseAssetRulesetArnT>(value);
  }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  LicenseAssetRuleset& WithLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    SetLicenseAssetRulesetArn(std::forward<LicenseAssetRulesetArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<LicenseAssetRule> m_rules;

  Aws::String m_licenseAssetRulesetArn;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_rulesHasBeenSet = false;
  bool m_licenseAssetRulesetArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
