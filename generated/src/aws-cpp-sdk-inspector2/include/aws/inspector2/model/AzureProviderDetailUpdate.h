/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AzureScopeConfigurationInput.h>

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
 * <p>The Azure-specific configuration details for updating a connector, including
 * the scan scope and regions to scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AzureProviderDetailUpdate">AWS
 * API Reference</a></p>
 */
class AzureProviderDetailUpdate {
 public:
  AWS_INSPECTOR2_API AzureProviderDetailUpdate() = default;
  AWS_INSPECTOR2_API AzureProviderDetailUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AzureProviderDetailUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated Azure regions to scan.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAzureRegions() const { return m_azureRegions; }
  inline bool AzureRegionsHasBeenSet() const { return m_azureRegionsHasBeenSet; }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  void SetAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions = std::forward<AzureRegionsT>(value);
  }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  AzureProviderDetailUpdate& WithAzureRegions(AzureRegionsT&& value) {
    SetAzureRegions(std::forward<AzureRegionsT>(value));
    return *this;
  }
  template <typename AzureRegionsT = Aws::String>
  AzureProviderDetailUpdate& AddAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions.emplace_back(std::forward<AzureRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope configuration that defines which Azure resources to
   * scan.</p>
   */
  inline const AzureScopeConfigurationInput& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = AzureScopeConfigurationInput>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = AzureScopeConfigurationInput>
  AzureProviderDetailUpdate& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to automatically install the VM scanner on connected Azure
   * resources.</p>
   */
  inline bool GetAutoInstallVMScanner() const { return m_autoInstallVMScanner; }
  inline bool AutoInstallVMScannerHasBeenSet() const { return m_autoInstallVMScannerHasBeenSet; }
  inline void SetAutoInstallVMScanner(bool value) {
    m_autoInstallVMScannerHasBeenSet = true;
    m_autoInstallVMScanner = value;
  }
  inline AzureProviderDetailUpdate& WithAutoInstallVMScanner(bool value) {
    SetAutoInstallVMScanner(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_azureRegions;

  AzureScopeConfigurationInput m_scopeConfiguration;

  bool m_autoInstallVMScanner{false};
  bool m_azureRegionsHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_autoInstallVMScannerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
