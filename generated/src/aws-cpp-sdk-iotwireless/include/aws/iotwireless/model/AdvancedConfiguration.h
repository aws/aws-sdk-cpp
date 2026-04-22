/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WiFiCellular.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTWireless {
namespace Model {

/**
 * Optional configuration to customize location estimates.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AdvancedConfiguration">AWS
 * API Reference</a></p>
 */
class AdvancedConfiguration {
 public:
  AWS_IOTWIRELESS_API AdvancedConfiguration() = default;
  AWS_IOTWIRELESS_API AdvancedConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API AdvancedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Configuration for WiFi and cellular-based payloads for location estimates.
   */
  inline const WiFiCellular& GetWiFiCellular() const { return m_wiFiCellular; }
  inline bool WiFiCellularHasBeenSet() const { return m_wiFiCellularHasBeenSet; }
  template <typename WiFiCellularT = WiFiCellular>
  void SetWiFiCellular(WiFiCellularT&& value) {
    m_wiFiCellularHasBeenSet = true;
    m_wiFiCellular = std::forward<WiFiCellularT>(value);
  }
  template <typename WiFiCellularT = WiFiCellular>
  AdvancedConfiguration& WithWiFiCellular(WiFiCellularT&& value) {
    SetWiFiCellular(std::forward<WiFiCellularT>(value));
    return *this;
  }
  ///@}
 private:
  WiFiCellular m_wiFiCellular;
  bool m_wiFiCellularHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
