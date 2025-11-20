/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetRule.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class UpdateLicenseAssetRulesetRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API UpdateLicenseAssetRulesetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseAssetRuleset"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  UpdateLicenseAssetRulesetRequest& WithName(NameT&& value) {
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
  UpdateLicenseAssetRulesetRequest& WithDescription(DescriptionT&& value) {
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
  UpdateLicenseAssetRulesetRequest& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = LicenseAssetRule>
  UpdateLicenseAssetRulesetRequest& AddRules(RulesT&& value) {
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
  UpdateLicenseAssetRulesetRequest& WithLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    SetLicenseAssetRulesetArn(std::forward<LicenseAssetRulesetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateLicenseAssetRulesetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<LicenseAssetRule> m_rules;
  bool m_rulesHasBeenSet = false;

  Aws::String m_licenseAssetRulesetArn;
  bool m_licenseAssetRulesetArnHasBeenSet = false;

  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
