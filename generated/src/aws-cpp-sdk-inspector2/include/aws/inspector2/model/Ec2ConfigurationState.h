/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2ScanModeState.h>
#include <aws/inspector2/model/VMScannerState.h>

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
 * <p>Details about the state of the EC2 scan configuration for your
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2ConfigurationState">AWS
 * API Reference</a></p>
 */
class Ec2ConfigurationState {
 public:
  AWS_INSPECTOR2_API Ec2ConfigurationState() = default;
  AWS_INSPECTOR2_API Ec2ConfigurationState(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Ec2ConfigurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that contains details about the state of the Amazon EC2 scan
   * mode.</p>
   */
  inline const Ec2ScanModeState& GetScanModeState() const { return m_scanModeState; }
  inline bool ScanModeStateHasBeenSet() const { return m_scanModeStateHasBeenSet; }
  template <typename ScanModeStateT = Ec2ScanModeState>
  void SetScanModeState(ScanModeStateT&& value) {
    m_scanModeStateHasBeenSet = true;
    m_scanModeState = std::forward<ScanModeStateT>(value);
  }
  template <typename ScanModeStateT = Ec2ScanModeState>
  Ec2ConfigurationState& WithScanModeState(ScanModeStateT&& value) {
    SetScanModeState(std::forward<ScanModeStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains details about the state of the Amazon Inspector VM
   * scanner.</p>
   */
  inline const VMScannerState& GetVmScannerState() const { return m_vmScannerState; }
  inline bool VmScannerStateHasBeenSet() const { return m_vmScannerStateHasBeenSet; }
  template <typename VmScannerStateT = VMScannerState>
  void SetVmScannerState(VmScannerStateT&& value) {
    m_vmScannerStateHasBeenSet = true;
    m_vmScannerState = std::forward<VmScannerStateT>(value);
  }
  template <typename VmScannerStateT = VMScannerState>
  Ec2ConfigurationState& WithVmScannerState(VmScannerStateT&& value) {
    SetVmScannerState(std::forward<VmScannerStateT>(value));
    return *this;
  }
  ///@}
 private:
  Ec2ScanModeState m_scanModeState;

  VMScannerState m_vmScannerState;
  bool m_scanModeStateHasBeenSet = false;
  bool m_vmScannerStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
