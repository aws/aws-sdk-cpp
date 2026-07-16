/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AzureScopeConfiguration.h>
#include <aws/inspector2/model/ConnectorCloudProvider.h>
#include <aws/inspector2/model/ConnectorHealth.h>
#include <aws/inspector2/model/EnablementStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Describes a connector that links an external cloud provider to Amazon
 * Inspector for vulnerability scanning.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Connector">AWS
 * API Reference</a></p>
 */
class Connector {
 public:
  AWS_INSPECTOR2_API Connector() = default;
  AWS_INSPECTOR2_API Connector(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  Connector& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Connector& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Connector& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider for the connector.</p>
   */
  inline ConnectorCloudProvider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(ConnectorCloudProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline Connector& WithProvider(ConnectorCloudProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enablement status of the connector, which indicates whether the connector
   * is active and scanning resources.</p>
   */
  inline EnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline bool EnablementStatusHasBeenSet() const { return m_enablementStatusHasBeenSet; }
  inline void SetEnablementStatus(EnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline Connector& WithEnablementStatus(EnablementStatus value) {
    SetEnablementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current enablement status of the
   * connector.</p>
   */
  inline const Aws::String& GetEnablementStatusReason() const { return m_enablementStatusReason; }
  inline bool EnablementStatusReasonHasBeenSet() const { return m_enablementStatusReasonHasBeenSet; }
  template <typename EnablementStatusReasonT = Aws::String>
  void SetEnablementStatusReason(EnablementStatusReasonT&& value) {
    m_enablementStatusReasonHasBeenSet = true;
    m_enablementStatusReason = std::forward<EnablementStatusReasonT>(value);
  }
  template <typename EnablementStatusReasonT = Aws::String>
  Connector& WithEnablementStatusReason(EnablementStatusReasonT&& value) {
    SetEnablementStatusReason(std::forward<EnablementStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health of the connector, which indicates whether Amazon Inspector can
   * reach and scan the connected resources.</p>
   */
  inline const ConnectorHealth& GetHealth() const { return m_health; }
  inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
  template <typename HealthT = ConnectorHealth>
  void SetHealth(HealthT&& value) {
    m_healthHasBeenSet = true;
    m_health = std::forward<HealthT>(value);
  }
  template <typename HealthT = ConnectorHealth>
  Connector& WithHealth(HealthT&& value) {
    SetHealth(std::forward<HealthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Connector& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the connector was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Connector& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure regions configured for the connector.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAzureRegions() const { return m_azureRegions; }
  inline bool AzureRegionsHasBeenSet() const { return m_azureRegionsHasBeenSet; }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  void SetAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions = std::forward<AzureRegionsT>(value);
  }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  Connector& WithAzureRegions(AzureRegionsT&& value) {
    SetAzureRegions(std::forward<AzureRegionsT>(value));
    return *this;
  }
  template <typename AzureRegionsT = Aws::String>
  Connector& AddAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions.emplace_back(std::forward<AzureRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Config connector associated with this
   * connector.</p>
   */
  inline const Aws::String& GetAwsConfigConnectorArn() const { return m_awsConfigConnectorArn; }
  inline bool AwsConfigConnectorArnHasBeenSet() const { return m_awsConfigConnectorArnHasBeenSet; }
  template <typename AwsConfigConnectorArnT = Aws::String>
  void SetAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    m_awsConfigConnectorArnHasBeenSet = true;
    m_awsConfigConnectorArn = std::forward<AwsConfigConnectorArnT>(value);
  }
  template <typename AwsConfigConnectorArnT = Aws::String>
  Connector& WithAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    SetAwsConfigConnectorArn(std::forward<AwsConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure scope configuration for the connector.</p>
   */
  inline const AzureScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  Connector& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the connector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Connector& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Connector& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the VM scanner is automatically installed on connected
   * resources.</p>
   */
  inline bool GetAutoInstallVMScanner() const { return m_autoInstallVMScanner; }
  inline bool AutoInstallVMScannerHasBeenSet() const { return m_autoInstallVMScannerHasBeenSet; }
  inline void SetAutoInstallVMScanner(bool value) {
    m_autoInstallVMScannerHasBeenSet = true;
    m_autoInstallVMScanner = value;
  }
  inline Connector& WithAutoInstallVMScanner(bool value) {
    SetAutoInstallVMScanner(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorArn;

  Aws::String m_name;

  Aws::String m_description;

  ConnectorCloudProvider m_provider{ConnectorCloudProvider::NOT_SET};

  EnablementStatus m_enablementStatus{EnablementStatus::NOT_SET};

  Aws::String m_enablementStatusReason;

  ConnectorHealth m_health;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<Aws::String> m_azureRegions;

  Aws::String m_awsConfigConnectorArn;

  AzureScopeConfiguration m_scopeConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  bool m_autoInstallVMScanner{false};
  bool m_connectorArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
  bool m_enablementStatusReasonHasBeenSet = false;
  bool m_healthHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_azureRegionsHasBeenSet = false;
  bool m_awsConfigConnectorArnHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_autoInstallVMScannerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
