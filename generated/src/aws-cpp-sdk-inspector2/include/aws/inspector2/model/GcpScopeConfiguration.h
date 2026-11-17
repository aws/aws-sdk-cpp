/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/GcpCapabilityScope.h>

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
 * <p>The scope of Google Cloud Platform (GCP) resources that Amazon Inspector
 * scans, defined separately for VM, container image, and serverless scanning.
 * Returned as part of a connector's configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GcpScopeConfiguration">AWS
 * API Reference</a></p>
 */
class GcpScopeConfiguration {
 public:
  AWS_INSPECTOR2_API GcpScopeConfiguration() = default;
  AWS_INSPECTOR2_API GcpScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API GcpScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scope configuration for VM scanning.</p>
   */
  inline const GcpCapabilityScope& GetVmScanning() const { return m_vmScanning; }
  inline bool VmScanningHasBeenSet() const { return m_vmScanningHasBeenSet; }
  template <typename VmScanningT = GcpCapabilityScope>
  void SetVmScanning(VmScanningT&& value) {
    m_vmScanningHasBeenSet = true;
    m_vmScanning = std::forward<VmScanningT>(value);
  }
  template <typename VmScanningT = GcpCapabilityScope>
  GcpScopeConfiguration& WithVmScanning(VmScanningT&& value) {
    SetVmScanning(std::forward<VmScanningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration for container image scanning.</p>
   */
  inline const GcpCapabilityScope& GetContainerImageScanning() const { return m_containerImageScanning; }
  inline bool ContainerImageScanningHasBeenSet() const { return m_containerImageScanningHasBeenSet; }
  template <typename ContainerImageScanningT = GcpCapabilityScope>
  void SetContainerImageScanning(ContainerImageScanningT&& value) {
    m_containerImageScanningHasBeenSet = true;
    m_containerImageScanning = std::forward<ContainerImageScanningT>(value);
  }
  template <typename ContainerImageScanningT = GcpCapabilityScope>
  GcpScopeConfiguration& WithContainerImageScanning(ContainerImageScanningT&& value) {
    SetContainerImageScanning(std::forward<ContainerImageScanningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration for serverless scanning.</p>
   */
  inline const GcpCapabilityScope& GetServerlessScanning() const { return m_serverlessScanning; }
  inline bool ServerlessScanningHasBeenSet() const { return m_serverlessScanningHasBeenSet; }
  template <typename ServerlessScanningT = GcpCapabilityScope>
  void SetServerlessScanning(ServerlessScanningT&& value) {
    m_serverlessScanningHasBeenSet = true;
    m_serverlessScanning = std::forward<ServerlessScanningT>(value);
  }
  template <typename ServerlessScanningT = GcpCapabilityScope>
  GcpScopeConfiguration& WithServerlessScanning(ServerlessScanningT&& value) {
    SetServerlessScanning(std::forward<ServerlessScanningT>(value));
    return *this;
  }
  ///@}
 private:
  GcpCapabilityScope m_vmScanning;

  GcpCapabilityScope m_containerImageScanning;

  GcpCapabilityScope m_serverlessScanning;
  bool m_vmScanningHasBeenSet = false;
  bool m_containerImageScanningHasBeenSet = false;
  bool m_serverlessScanningHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
