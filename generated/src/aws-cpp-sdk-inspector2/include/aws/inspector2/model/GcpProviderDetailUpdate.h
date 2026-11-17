/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/GcpScopeConfigurationInput.h>

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
 * <p>The configuration details specific to Google Cloud Platform (GCP) for
 * updating a connector, including the scan scope and locations to
 * scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GcpProviderDetailUpdate">AWS
 * API Reference</a></p>
 */
class GcpProviderDetailUpdate {
 public:
  AWS_INSPECTOR2_API GcpProviderDetailUpdate() = default;
  AWS_INSPECTOR2_API GcpProviderDetailUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API GcpProviderDetailUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated GCP locations to scan, such as regions, zones, multi-regions, or
   * dual-regions. Specify <code>ALL</code> to scan all locations.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGcpRegions() const { return m_gcpRegions; }
  inline bool GcpRegionsHasBeenSet() const { return m_gcpRegionsHasBeenSet; }
  template <typename GcpRegionsT = Aws::Vector<Aws::String>>
  void SetGcpRegions(GcpRegionsT&& value) {
    m_gcpRegionsHasBeenSet = true;
    m_gcpRegions = std::forward<GcpRegionsT>(value);
  }
  template <typename GcpRegionsT = Aws::Vector<Aws::String>>
  GcpProviderDetailUpdate& WithGcpRegions(GcpRegionsT&& value) {
    SetGcpRegions(std::forward<GcpRegionsT>(value));
    return *this;
  }
  template <typename GcpRegionsT = Aws::String>
  GcpProviderDetailUpdate& AddGcpRegions(GcpRegionsT&& value) {
    m_gcpRegionsHasBeenSet = true;
    m_gcpRegions.emplace_back(std::forward<GcpRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope configuration that defines which GCP resources to scan.</p>
   */
  inline const GcpScopeConfigurationInput& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = GcpScopeConfigurationInput>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = GcpScopeConfigurationInput>
  GcpProviderDetailUpdate& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to automatically install the VM scanner on connected GCP
   * resources.</p>
   */
  inline bool GetAutoInstallVMScanner() const { return m_autoInstallVMScanner; }
  inline bool AutoInstallVMScannerHasBeenSet() const { return m_autoInstallVMScannerHasBeenSet; }
  inline void SetAutoInstallVMScanner(bool value) {
    m_autoInstallVMScannerHasBeenSet = true;
    m_autoInstallVMScanner = value;
  }
  inline GcpProviderDetailUpdate& WithAutoInstallVMScanner(bool value) {
    SetAutoInstallVMScanner(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_gcpRegions;

  GcpScopeConfigurationInput m_scopeConfiguration;

  bool m_autoInstallVMScanner{false};
  bool m_gcpRegionsHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_autoInstallVMScannerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
