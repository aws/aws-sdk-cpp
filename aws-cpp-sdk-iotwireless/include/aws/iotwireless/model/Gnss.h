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
    AWS_IOTWIRELESS_API Gnss();
    AWS_IOTWIRELESS_API Gnss(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Gnss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline Gnss& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline Gnss& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>Payload that contains the GNSS scan result, or NAV message, in hexadecimal
     * notation.</p>
     */
    inline Gnss& WithPayload(const char* value) { SetPayload(value); return *this;}


    /**
     * <p>Optional parameter that gives an estimate of the time when the GNSS scan
     * information is taken, in seconds GPS time (GPST). If capture time is not
     * specified, the local server time is used.</p>
     */
    inline double GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>Optional parameter that gives an estimate of the time when the GNSS scan
     * information is taken, in seconds GPS time (GPST). If capture time is not
     * specified, the local server time is used.</p>
     */
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }

    /**
     * <p>Optional parameter that gives an estimate of the time when the GNSS scan
     * information is taken, in seconds GPS time (GPST). If capture time is not
     * specified, the local server time is used.</p>
     */
    inline void SetCaptureTime(double value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>Optional parameter that gives an estimate of the time when the GNSS scan
     * information is taken, in seconds GPS time (GPST). If capture time is not
     * specified, the local server time is used.</p>
     */
    inline Gnss& WithCaptureTime(double value) { SetCaptureTime(value); return *this;}


    /**
     * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
     * capture time accuracy is not specified, default value of 300 is used.</p>
     */
    inline double GetCaptureTimeAccuracy() const{ return m_captureTimeAccuracy; }

    /**
     * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
     * capture time accuracy is not specified, default value of 300 is used.</p>
     */
    inline bool CaptureTimeAccuracyHasBeenSet() const { return m_captureTimeAccuracyHasBeenSet; }

    /**
     * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
     * capture time accuracy is not specified, default value of 300 is used.</p>
     */
    inline void SetCaptureTimeAccuracy(double value) { m_captureTimeAccuracyHasBeenSet = true; m_captureTimeAccuracy = value; }

    /**
     * <p>Optional value that gives the capture time estimate accuracy, in seconds. If
     * capture time accuracy is not specified, default value of 300 is used.</p>
     */
    inline Gnss& WithCaptureTimeAccuracy(double value) { SetCaptureTimeAccuracy(value); return *this;}


    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline const Aws::Vector<double>& GetAssistPosition() const{ return m_assistPosition; }

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline bool AssistPositionHasBeenSet() const { return m_assistPositionHasBeenSet; }

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline void SetAssistPosition(const Aws::Vector<double>& value) { m_assistPositionHasBeenSet = true; m_assistPosition = value; }

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline void SetAssistPosition(Aws::Vector<double>&& value) { m_assistPositionHasBeenSet = true; m_assistPosition = std::move(value); }

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline Gnss& WithAssistPosition(const Aws::Vector<double>& value) { SetAssistPosition(value); return *this;}

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline Gnss& WithAssistPosition(Aws::Vector<double>&& value) { SetAssistPosition(std::move(value)); return *this;}

    /**
     * <p>Optional assistance position information, specified using latitude and
     * longitude values in degrees. The co-ordinates are inside the WGS84 reference
     * frame.</p>
     */
    inline Gnss& AddAssistPosition(double value) { m_assistPositionHasBeenSet = true; m_assistPosition.push_back(value); return *this; }


    /**
     * <p>Optional assistance altitude, which is the altitude of the device at capture
     * time, specified in meters above the WGS84 reference ellipsoid.</p>
     */
    inline double GetAssistAltitude() const{ return m_assistAltitude; }

    /**
     * <p>Optional assistance altitude, which is the altitude of the device at capture
     * time, specified in meters above the WGS84 reference ellipsoid.</p>
     */
    inline bool AssistAltitudeHasBeenSet() const { return m_assistAltitudeHasBeenSet; }

    /**
     * <p>Optional assistance altitude, which is the altitude of the device at capture
     * time, specified in meters above the WGS84 reference ellipsoid.</p>
     */
    inline void SetAssistAltitude(double value) { m_assistAltitudeHasBeenSet = true; m_assistAltitude = value; }

    /**
     * <p>Optional assistance altitude, which is the altitude of the device at capture
     * time, specified in meters above the WGS84 reference ellipsoid.</p>
     */
    inline Gnss& WithAssistAltitude(double value) { SetAssistAltitude(value); return *this;}


    /**
     * <p>Optional parameter that forces 2D solve, which modifies the positioning
     * algorithm to a 2D solution problem. When this parameter is specified, the
     * assistance altitude should have an accuracy of at least 10 meters.</p>
     */
    inline bool GetUse2DSolver() const{ return m_use2DSolver; }

    /**
     * <p>Optional parameter that forces 2D solve, which modifies the positioning
     * algorithm to a 2D solution problem. When this parameter is specified, the
     * assistance altitude should have an accuracy of at least 10 meters.</p>
     */
    inline bool Use2DSolverHasBeenSet() const { return m_use2DSolverHasBeenSet; }

    /**
     * <p>Optional parameter that forces 2D solve, which modifies the positioning
     * algorithm to a 2D solution problem. When this parameter is specified, the
     * assistance altitude should have an accuracy of at least 10 meters.</p>
     */
    inline void SetUse2DSolver(bool value) { m_use2DSolverHasBeenSet = true; m_use2DSolver = value; }

    /**
     * <p>Optional parameter that forces 2D solve, which modifies the positioning
     * algorithm to a 2D solution problem. When this parameter is specified, the
     * assistance altitude should have an accuracy of at least 10 meters.</p>
     */
    inline Gnss& WithUse2DSolver(bool value) { SetUse2DSolver(value); return *this;}

  private:

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    double m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    double m_captureTimeAccuracy;
    bool m_captureTimeAccuracyHasBeenSet = false;

    Aws::Vector<double> m_assistPosition;
    bool m_assistPositionHasBeenSet = false;

    double m_assistAltitude;
    bool m_assistAltitudeHasBeenSet = false;

    bool m_use2DSolver;
    bool m_use2DSolverHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
