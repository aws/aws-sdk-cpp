/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
 * <p>A single GNSS scan capture containing the scan payload and optional capture
 * time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GnssCapture">AWS
 * API Reference</a></p>
 */
class GnssCapture {
 public:
  AWS_IOTWIRELESS_API GnssCapture() = default;
  AWS_IOTWIRELESS_API GnssCapture(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API GnssCapture& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
   * notation.</p>
   */
  inline const Aws::String& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::String>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::String>
  GnssCapture& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional parameter that gives an estimate of the time when the GNSS scan
   * information is taken, in seconds GPS time (GPST). If capture time is not
   * specified, the local server time is used.</p>
   */
  inline double GetCaptureTime() const { return m_captureTime; }
  inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
  inline void SetCaptureTime(double value) {
    m_captureTimeHasBeenSet = true;
    m_captureTime = value;
  }
  inline GnssCapture& WithCaptureTime(double value) {
    SetCaptureTime(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_payload;

  double m_captureTime{0.0};
  bool m_payloadHasBeenSet = false;
  bool m_captureTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
