/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ScopeConfigurationInput.h>

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
 * <p>The scope of Azure resources to scan, defined separately for VM, container
 * image, and serverless scanning. Provide this when you create or update an Azure
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AzureScopeConfigurationInput">AWS
 * API Reference</a></p>
 */
class AzureScopeConfigurationInput {
 public:
  AWS_INSPECTOR2_API AzureScopeConfigurationInput() = default;
  AWS_INSPECTOR2_API AzureScopeConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AzureScopeConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scope configuration input for VM scanning.</p>
   */
  inline const ScopeConfigurationInput& GetVmScanning() const { return m_vmScanning; }
  inline bool VmScanningHasBeenSet() const { return m_vmScanningHasBeenSet; }
  template <typename VmScanningT = ScopeConfigurationInput>
  void SetVmScanning(VmScanningT&& value) {
    m_vmScanningHasBeenSet = true;
    m_vmScanning = std::forward<VmScanningT>(value);
  }
  template <typename VmScanningT = ScopeConfigurationInput>
  AzureScopeConfigurationInput& WithVmScanning(VmScanningT&& value) {
    SetVmScanning(std::forward<VmScanningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration input for container image scanning.</p>
   */
  inline const ScopeConfigurationInput& GetContainerImageScanning() const { return m_containerImageScanning; }
  inline bool ContainerImageScanningHasBeenSet() const { return m_containerImageScanningHasBeenSet; }
  template <typename ContainerImageScanningT = ScopeConfigurationInput>
  void SetContainerImageScanning(ContainerImageScanningT&& value) {
    m_containerImageScanningHasBeenSet = true;
    m_containerImageScanning = std::forward<ContainerImageScanningT>(value);
  }
  template <typename ContainerImageScanningT = ScopeConfigurationInput>
  AzureScopeConfigurationInput& WithContainerImageScanning(ContainerImageScanningT&& value) {
    SetContainerImageScanning(std::forward<ContainerImageScanningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration input for serverless scanning.</p>
   */
  inline const ScopeConfigurationInput& GetServerlessScanning() const { return m_serverlessScanning; }
  inline bool ServerlessScanningHasBeenSet() const { return m_serverlessScanningHasBeenSet; }
  template <typename ServerlessScanningT = ScopeConfigurationInput>
  void SetServerlessScanning(ServerlessScanningT&& value) {
    m_serverlessScanningHasBeenSet = true;
    m_serverlessScanning = std::forward<ServerlessScanningT>(value);
  }
  template <typename ServerlessScanningT = ScopeConfigurationInput>
  AzureScopeConfigurationInput& WithServerlessScanning(ServerlessScanningT&& value) {
    SetServerlessScanning(std::forward<ServerlessScanningT>(value));
    return *this;
  }
  ///@}
 private:
  ScopeConfigurationInput m_vmScanning;

  ScopeConfigurationInput m_containerImageScanning;

  ScopeConfigurationInput m_serverlessScanning;
  bool m_vmScanningHasBeenSet = false;
  bool m_containerImageScanningHasBeenSet = false;
  bool m_serverlessScanningHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
