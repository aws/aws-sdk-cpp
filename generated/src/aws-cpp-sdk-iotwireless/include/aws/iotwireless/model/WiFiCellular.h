/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
 * Configuration for WiFi and cellular location payloads.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WiFiCellular">AWS
 * API Reference</a></p>
 */
class WiFiCellular {
 public:
  AWS_IOTWIRELESS_API WiFiCellular() = default;
  AWS_IOTWIRELESS_API WiFiCellular(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API WiFiCellular& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Confidence level for WiFi and cellular position estimates, expressed as a
   * percentage. Valid range: 50–99 inclusive. Defaults to 68 if not specified.
   */
  inline int GetConfidencePercent() const { return m_confidencePercent; }
  inline bool ConfidencePercentHasBeenSet() const { return m_confidencePercentHasBeenSet; }
  inline void SetConfidencePercent(int value) {
    m_confidencePercentHasBeenSet = true;
    m_confidencePercent = value;
  }
  inline WiFiCellular& WithConfidencePercent(int value) {
    SetConfidencePercent(value);
    return *this;
  }
  ///@}
 private:
  int m_confidencePercent{0};
  bool m_confidencePercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
