/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorContainerImageScanConfiguration.h>

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
 * <p>The scan settings that Amazon Inspector applies to resources discovered
 * through a connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorScanConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorScanConfiguration {
 public:
  AWS_INSPECTOR2_API ConnectorScanConfiguration() = default;
  AWS_INSPECTOR2_API ConnectorScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The container image scanning configuration, including push and pull duration
   * settings.</p>
   */
  inline const ConnectorContainerImageScanConfiguration& GetContainerImageScanning() const { return m_containerImageScanning; }
  inline bool ContainerImageScanningHasBeenSet() const { return m_containerImageScanningHasBeenSet; }
  template <typename ContainerImageScanningT = ConnectorContainerImageScanConfiguration>
  void SetContainerImageScanning(ContainerImageScanningT&& value) {
    m_containerImageScanningHasBeenSet = true;
    m_containerImageScanning = std::forward<ContainerImageScanningT>(value);
  }
  template <typename ContainerImageScanningT = ConnectorContainerImageScanConfiguration>
  ConnectorScanConfiguration& WithContainerImageScanning(ContainerImageScanningT&& value) {
    SetContainerImageScanning(std::forward<ContainerImageScanningT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorContainerImageScanConfiguration m_containerImageScanning;
  bool m_containerImageScanningHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
