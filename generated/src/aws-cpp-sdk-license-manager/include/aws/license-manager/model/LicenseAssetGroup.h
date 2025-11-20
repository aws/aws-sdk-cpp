/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetGroupConfiguration.h>
#include <aws/license-manager/model/LicenseAssetGroupProperty.h>
#include <aws/license-manager/model/LicenseAssetGroupStatus.h>

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
 * <p>License asset group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseAssetGroup">AWS
 * API Reference</a></p>
 */
class LicenseAssetGroup {
 public:
  AWS_LICENSEMANAGER_API LicenseAssetGroup() = default;
  AWS_LICENSEMANAGER_API LicenseAssetGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API LicenseAssetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  LicenseAssetGroup& WithName(NameT&& value) {
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
  LicenseAssetGroup& WithDescription(DescriptionT&& value) {
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
  LicenseAssetGroup& WithLicenseAssetGroupConfigurations(LicenseAssetGroupConfigurationsT&& value) {
    SetLicenseAssetGroupConfigurations(std::forward<LicenseAssetGroupConfigurationsT>(value));
    return *this;
  }
  template <typename LicenseAssetGroupConfigurationsT = LicenseAssetGroupConfiguration>
  LicenseAssetGroup& AddLicenseAssetGroupConfigurations(LicenseAssetGroupConfigurationsT&& value) {
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
  LicenseAssetGroup& WithAssociatedLicenseAssetRulesetARNs(AssociatedLicenseAssetRulesetARNsT&& value) {
    SetAssociatedLicenseAssetRulesetARNs(std::forward<AssociatedLicenseAssetRulesetARNsT>(value));
    return *this;
  }
  template <typename AssociatedLicenseAssetRulesetARNsT = Aws::String>
  LicenseAssetGroup& AddAssociatedLicenseAssetRulesetARNs(AssociatedLicenseAssetRulesetARNsT&& value) {
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
  LicenseAssetGroup& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesT = LicenseAssetGroupProperty>
  LicenseAssetGroup& AddProperties(PropertiesT&& value) {
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
  LicenseAssetGroup& WithLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    SetLicenseAssetGroupArn(std::forward<LicenseAssetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group status.</p>
   */
  inline LicenseAssetGroupStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LicenseAssetGroupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline LicenseAssetGroup& WithStatus(LicenseAssetGroupStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group status message.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  LicenseAssetGroup& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latest usage analysis time.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestUsageAnalysisTime() const { return m_latestUsageAnalysisTime; }
  inline bool LatestUsageAnalysisTimeHasBeenSet() const { return m_latestUsageAnalysisTimeHasBeenSet; }
  template <typename LatestUsageAnalysisTimeT = Aws::Utils::DateTime>
  void SetLatestUsageAnalysisTime(LatestUsageAnalysisTimeT&& value) {
    m_latestUsageAnalysisTimeHasBeenSet = true;
    m_latestUsageAnalysisTime = std::forward<LatestUsageAnalysisTimeT>(value);
  }
  template <typename LatestUsageAnalysisTimeT = Aws::Utils::DateTime>
  LicenseAssetGroup& WithLatestUsageAnalysisTime(LatestUsageAnalysisTimeT&& value) {
    SetLatestUsageAnalysisTime(std::forward<LatestUsageAnalysisTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latest resource discovery time.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestResourceDiscoveryTime() const { return m_latestResourceDiscoveryTime; }
  inline bool LatestResourceDiscoveryTimeHasBeenSet() const { return m_latestResourceDiscoveryTimeHasBeenSet; }
  template <typename LatestResourceDiscoveryTimeT = Aws::Utils::DateTime>
  void SetLatestResourceDiscoveryTime(LatestResourceDiscoveryTimeT&& value) {
    m_latestResourceDiscoveryTimeHasBeenSet = true;
    m_latestResourceDiscoveryTime = std::forward<LatestResourceDiscoveryTimeT>(value);
  }
  template <typename LatestResourceDiscoveryTimeT = Aws::Utils::DateTime>
  LicenseAssetGroup& WithLatestResourceDiscoveryTime(LatestResourceDiscoveryTimeT&& value) {
    SetLatestResourceDiscoveryTime(std::forward<LatestResourceDiscoveryTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<LicenseAssetGroupConfiguration> m_licenseAssetGroupConfigurations;
  bool m_licenseAssetGroupConfigurationsHasBeenSet = false;

  Aws::Vector<Aws::String> m_associatedLicenseAssetRulesetARNs;
  bool m_associatedLicenseAssetRulesetARNsHasBeenSet = false;

  Aws::Vector<LicenseAssetGroupProperty> m_properties;
  bool m_propertiesHasBeenSet = false;

  Aws::String m_licenseAssetGroupArn;
  bool m_licenseAssetGroupArnHasBeenSet = false;

  LicenseAssetGroupStatus m_status{LicenseAssetGroupStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusMessage;
  bool m_statusMessageHasBeenSet = false;

  Aws::Utils::DateTime m_latestUsageAnalysisTime{};
  bool m_latestUsageAnalysisTimeHasBeenSet = false;

  Aws::Utils::DateTime m_latestResourceDiscoveryTime{};
  bool m_latestResourceDiscoveryTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
