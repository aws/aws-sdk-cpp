/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Global navigation satellite system (GNSS) object used for
   * positioning.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Gnss">AWS
   * API Reference</a></p>
   */
  class Gnss
  {
  public:
    AWS_IOTWIRELESS_API Gnss() = default;
    AWS_IOTWIRELESS_API Gnss(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Gnss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    Gnss& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional parameter that gives an estimate of the time when the GNSS scan
     * information is taken, in seconds GPS time (GPST). If capture time is not
     * specified, the local server time is used.</p>
     */
    inline double GetCaptureTime() const { return m_captureTime; }
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
    inline void SetCaptureTime(double value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }
    inline Gnss& WithCaptureTime(double value) { SetCaptureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
     * capture time accuracy is not specified, default value of 300 is used.</p>
     */
    inline double GetCaptureTimeAccuracy() const { return m_captureTimeAccuracy; }
    inline bool CaptureTimeAccuracyHasBeenSet() const { return m_captureTimeAccuracyHasBeenSet; }
    inline void SetCaptureTimeAccuracy(double value) { m_captureTimeAccuracyHasBeenSet = true; m_captureTimeAccuracy = value; }
    inline Gnss& WithCaptureTimeAccuracy(double value) { SetCaptureTimeAccuracy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The coordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline const Aws::Vector<double>& GetAssistPosition() const { return m_assistPosition; }
    inline bool AssistPositionHasBeenSet() const { return m_assistPositionHasBeenSet; }
    template<typename AssistPositionT = Aws::Vector<double>>
    void SetAssistPosition(AssistPositionT&& value) { m_assistPositionHasBeenSet = true; m_assistPosition = std::forward<AssistPositionT>(value); }
    template<typename AssistPositionT = Aws::Vector<double>>
    Gnss& WithAssistPosition(AssistPositionT&& value) { SetAssistPosition(std::forward<AssistPositionT>(value)); return *this;}
    inline Gnss& AddAssistPosition(double value) { m_assistPositionHasBeenSet = true; m_assistPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional assistance altitude, which is the altitude of the device at capture
     * time, specified in meters above the WGS84 reference ellipsoid.</p>
     */
    inline double GetAssistAltitude() const { return m_assistAltitude; }
    inline bool AssistAltitudeHasBeenSet() const { return m_assistAltitudeHasBeenSet; }
    inline void SetAssistAltitude(double value) { m_assistAltitudeHasBeenSet = true; m_assistAltitude = value; }
    inline Gnss& WithAssistAltitude(double value) { SetAssistAltitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional parameter that forces 2D solve, which modifies the positioning
     * algorithm to a 2D solution problem. When this parameter is specified, the
     * assistance altitude should have an accuracy of at least 10 meters.</p>
     */
    inline bool GetUse2DSolver() const { return m_use2DSolver; }
    inline bool Use2DSolverHasBeenSet() const { return m_use2DSolverHasBeenSet; }
    inline void SetUse2DSolver(bool value) { m_use2DSolverHasBeenSet = true; m_use2DSolver = value; }
    inline Gnss& WithUse2DSolver(bool value) { SetUse2DSolver(value); return *this;}
    ///@}
  private:

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    double m_captureTime{0.0};
    bool m_captureTimeHasBeenSet = false;

    double m_captureTimeAccuracy{0.0};
    bool m_captureTimeAccuracyHasBeenSet = false;

    Aws::Vector<double> m_assistPosition;
    bool m_assistPositionHasBeenSet = false;

    double m_assistAltitude{0.0};
    bool m_assistAltitudeHasBeenSet = false;

    bool m_use2DSolver{false};
    bool m_use2DSolverHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
