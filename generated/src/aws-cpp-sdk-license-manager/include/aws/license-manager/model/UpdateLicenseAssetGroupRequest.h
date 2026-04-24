/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetGroupConfiguration.h>
#include <aws/license-manager/model/LicenseAssetGroupProperty.h>
#include <aws/license-manager/model/LicenseAssetGroupStatus.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class UpdateLicenseAssetGroupRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API UpdateLicenseAssetGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseAssetGroup"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>License asset group name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateLicenseAssetGroupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateLicenseAssetGroupRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group configurations.</p>
   */
  inline const Aws::Vector<LicenseAssetGroupConfiguration>& GetLicenseAssetGroupConfigurations() const {
    return m_licenseAssetGroupConfigurations;
  }
  inline bool LicenseAssetGroupConfigurationsHasBeenSet() const { return m_licenseAssetGroupConfigurationsHasBeenSet; }
  template <typename LicenseAssetGroupConfigurationsT = Aws::Vector<LicenseAssetGroupConfiguration>>
  void SetLicenseAssetGroupConfigurations(LicenseAssetGroupConfigurationsT&& value) {
    m_licenseAssetGroupConfigurationsHasBeenSet = true;
    m_licenseAssetGroupConfigurations = std::forward<LicenseAssetGroupConfigurationsT>(value);
  }
  template <typename LicenseAssetGroupConfigurationsT = Aws::Vector<LicenseAssetGroupConfiguration>>
  UpdateLicenseAssetGroupRequest& WithLicenseAssetGroupConfigurations(LicenseAssetGroupConfigurationsT&& value) {
    SetLicenseAssetGroupConfigurations(std::forward<LicenseAssetGroupConfigurationsT>(value));
    return *this;
  }
  template <typename LicenseAssetGroupConfigurationsT = LicenseAssetGroupConfiguration>
  UpdateLicenseAssetGroupRequest& AddLicenseAssetGroupConfigurations(LicenseAssetGroupConfigurationsT&& value) {
    m_licenseAssetGroupConfigurationsHasBeenSet = true;
    m_licenseAssetGroupConfigurations.emplace_back(std::forward<LicenseAssetGroupConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARNs of associated license asset rulesets.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedLicenseAssetRulesetARNs() const { return m_associatedLicenseAssetRulesetARNs; }
  inline bool AssociatedLicenseAssetRulesetARNsHasBeenSet() const { return m_associatedLicenseAssetRulesetARNsHasBeenSet; }
  template <typename AssociatedLicenseAssetRulesetARNsT = Aws::Vector<Aws::String>>
  void SetAssociatedLicenseAssetRulesetARNs(AssociatedLicenseAssetRulesetARNsT&& value) {
    m_associatedLicenseAssetRulesetARNsHasBeenSet = true;
    m_associatedLicenseAssetRulesetARNs = std::forward<AssociatedLicenseAssetRulesetARNsT>(value);
  }
  template <typename AssociatedLicenseAssetRulesetARNsT = Aws::Vector<Aws::String>>
  UpdateLicenseAssetGroupRequest& WithAssociatedLicenseAssetRulesetARNs(AssociatedLicenseAssetRulesetARNsT&& value) {
    SetAssociatedLicenseAssetRulesetARNs(std::forward<AssociatedLicenseAssetRulesetARNsT>(value));
    return *this;
  }
  template <typename AssociatedLicenseAssetRulesetARNsT = Aws::String>
  UpdateLicenseAssetGroupRequest& AddAssociatedLicenseAssetRulesetARNs(AssociatedLicenseAssetRulesetARNsT&& value) {
    m_associatedLicenseAssetRulesetARNsHasBeenSet = true;
    m_associatedLicenseAssetRulesetARNs.emplace_back(std::forward<AssociatedLicenseAssetRulesetARNsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group properties.</p>
   */
  inline const Aws::Vector<LicenseAssetGroupProperty>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Vector<LicenseAssetGroupProperty>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Vector<LicenseAssetGroupProperty>>
  UpdateLicenseAssetGroupRequest& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesT = LicenseAssetGroupProperty>
  UpdateLicenseAssetGroupRequest& AddProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace_back(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset group.</p>
   */
  inline const Aws::String& GetLicenseAssetGroupArn() const { return m_licenseAssetGroupArn; }
  inline bool LicenseAssetGroupArnHasBeenSet() const { return m_licenseAssetGroupArnHasBeenSet; }
  template <typename LicenseAssetGroupArnT = Aws::String>
  void SetLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    m_licenseAssetGroupArnHasBeenSet = true;
    m_licenseAssetGroupArn = std::forward<LicenseAssetGroupArnT>(value);
  }
  template <typename LicenseAssetGroupArnT = Aws::String>
  UpdateLicenseAssetGroupRequest& WithLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    SetLicenseAssetGroupArn(std::forward<LicenseAssetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group status. The possible values are <code>ACTIVE</code> |
   * <code>DISABLED</code>.</p>
   */
  inline LicenseAssetGroupStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LicenseAssetGroupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateLicenseAssetGroupRequest& WithStatus(LicenseAssetGroupStatus value) {
    SetStatus(value);
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
  UpdateLicenseAssetGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<LicenseAssetGroupConfiguration> m_licenseAssetGroupConfigurations;

  Aws::Vector<Aws::String> m_associatedLicenseAssetRulesetARNs;

  Aws::Vector<LicenseAssetGroupProperty> m_properties;

  Aws::String m_licenseAssetGroupArn;

  LicenseAssetGroupStatus m_status{LicenseAssetGroupStatus::NOT_SET};

  Aws::String m_clientToken;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_licenseAssetGroupConfigurationsHasBeenSet = false;
  bool m_associatedLicenseAssetRulesetARNsHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_licenseAssetGroupArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
