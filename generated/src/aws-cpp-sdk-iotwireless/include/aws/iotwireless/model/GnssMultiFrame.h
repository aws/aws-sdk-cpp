/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/GnssCapture.h>

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
 * <p>Global navigation satellite system (GNSS) multi-frame object used for
 * positioning. Contains multiple GNSS scan captures that are combined by the
 * solver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GnssMultiFrame">AWS
 * API Reference</a></p>
 */
class GnssMultiFrame {
 public:
  AWS_IOTWIRELESS_API GnssMultiFrame() = default;
  AWS_IOTWIRELESS_API GnssMultiFrame(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API GnssMultiFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of GNSS scan captures. Each capture contains a payload from a single
   * GNSS scan. The number of captures must be 2, 4, 8, 16, or 32.</p>
   */
  inline const Aws::Vector<GnssCapture>& GetCaptures() const { return m_captures; }
  inline bool CapturesHasBeenSet() const { return m_capturesHasBeenSet; }
  template <typename CapturesT = Aws::Vector<GnssCapture>>
  void SetCaptures(CapturesT&& value) {
    m_capturesHasBeenSet = true;
    m_captures = std::forward<CapturesT>(value);
  }
  template <typename CapturesT = Aws::Vector<GnssCapture>>
  GnssMultiFrame& WithCaptures(CapturesT&& value) {
    SetCaptures(std::forward<CapturesT>(value));
    return *this;
  }
  template <typename CapturesT = GnssCapture>
  GnssMultiFrame& AddCaptures(CapturesT&& value) {
    m_capturesHasBeenSet = true;
    m_captures.emplace_back(std::forward<CapturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
   * capture time accuracy is not specified, default value of 300 is used.</p>
   */
  inline double GetCaptureTimeAccuracy() const { return m_captureTimeAccuracy; }
  inline bool CaptureTimeAccuracyHasBeenSet() const { return m_captureTimeAccuracyHasBeenSet; }
  inline void SetCaptureTimeAccuracy(double value) {
    m_captureTimeAccuracyHasBeenSet = true;
    m_captureTimeAccuracy = value;
  }
  inline GnssMultiFrame& WithCaptureTimeAccuracy(double value) {
    SetCaptureTimeAccuracy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional assistance position information, specified using latitude and
   * longitude values in degrees. The coordinates are inside the WGS84 reference
   * frame.</p>
   */
  inline const Aws::Vector<double>& GetAssistPosition() const { return m_assistPosition; }
  inline bool AssistPositionHasBeenSet() const { return m_assistPositionHasBeenSet; }
  template <typename AssistPositionT = Aws::Vector<double>>
  void SetAssistPosition(AssistPositionT&& value) {
    m_assistPositionHasBeenSet = true;
    m_assistPosition = std::forward<AssistPositionT>(value);
  }
  template <typename AssistPositionT = Aws::Vector<double>>
  GnssMultiFrame& WithAssistPosition(AssistPositionT&& value) {
    SetAssistPosition(std::forward<AssistPositionT>(value));
    return *this;
  }
  inline GnssMultiFrame& AddAssistPosition(double value) {
    m_assistPositionHasBeenSet = true;
    m_assistPosition.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional assistance altitude, which is the altitude of the device at capture
   * time, specified in meters above the WGS84 reference ellipsoid. This parameter is
   * required when Use2DSolver is enabled.</p>
   */
  inline double GetAssistAltitude() const { return m_assistAltitude; }
  inline bool AssistAltitudeHasBeenSet() const { return m_assistAltitudeHasBeenSet; }
  inline void SetAssistAltitude(double value) {
    m_assistAltitudeHasBeenSet = true;
    m_assistAltitude = value;
  }
  inline GnssMultiFrame& WithAssistAltitude(double value) {
    SetAssistAltitude(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional parameter that forces 2D solve, which modifies the positioning
   * algorithm to a 2D solution problem. When this parameter is specified, the
   * assistance altitude should have an accuracy of at least 10 meters.</p>
   */
  inline bool GetUse2DSolver() const { return m_use2DSolver; }
  inline bool Use2DSolverHasBeenSet() const { return m_use2DSolverHasBeenSet; }
  inline void SetUse2DSolver(bool value) {
    m_use2DSolverHasBeenSet = true;
    m_use2DSolver = value;
  }
  inline GnssMultiFrame& WithUse2DSolver(bool value) {
    SetUse2DSolver(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GnssCapture> m_captures;

  double m_captureTimeAccuracy{0.0};

  Aws::Vector<double> m_assistPosition;

  double m_assistAltitude{0.0};

  bool m_use2DSolver{false};
  bool m_capturesHasBeenSet = false;
  bool m_captureTimeAccuracyHasBeenSet = false;
  bool m_assistPositionHasBeenSet = false;
  bool m_assistAltitudeHasBeenSet = false;
  bool m_use2DSolverHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
