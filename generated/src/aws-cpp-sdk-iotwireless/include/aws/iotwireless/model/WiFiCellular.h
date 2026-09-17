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
 * <p>Configuration for WiFi and cellular location payloads. Contains the
 * confidence level that determines the size of the uncertainty radius in the
 * position estimate.</p><p><h3>See Also:</h3>   <a
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
   * <p>The confidence level for WiFi and cellular position estimates, expressed as a
   * percentage. This value determines the size of the confidence area or uncertainty
   * radius for the estimated position. A higher confidence level produces a larger
   * uncertainty radius, while a lower confidence level produces a smaller, more
   * precise radius.</p> <p>Valid range: 50 to 99 inclusive. If not specified, the
   * default value of 68 is used, which corresponds to approximately one standard
   * deviation of the normal distribution.</p>
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
