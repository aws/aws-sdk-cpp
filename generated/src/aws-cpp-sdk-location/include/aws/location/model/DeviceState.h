/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/PositionalAccuracy.h>
#include <aws/location/model/CellSignals.h>
#include <aws/location/model/WiFiAccessPoint.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>The device's position, IP address, and Wi-Fi access points.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeviceState">AWS
   * API Reference</a></p>
   */
  class DeviceState
  {
  public:
    AWS_LOCATIONSERVICE_API DeviceState();
    AWS_LOCATIONSERVICE_API DeviceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API DeviceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device identifier.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline DeviceState& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline DeviceState& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline DeviceState& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline DeviceState& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline DeviceState& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline DeviceState& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline DeviceState& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline DeviceState& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const PositionalAccuracy& GetAccuracy() const{ return m_accuracy; }
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }
    inline void SetAccuracy(const PositionalAccuracy& value) { m_accuracyHasBeenSet = true; m_accuracy = value; }
    inline void SetAccuracy(PositionalAccuracy&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::move(value); }
    inline DeviceState& WithAccuracy(const PositionalAccuracy& value) { SetAccuracy(value); return *this;}
    inline DeviceState& WithAccuracy(PositionalAccuracy&& value) { SetAccuracy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's Ipv4 address.</p>
     */
    inline const Aws::String& GetIpv4Address() const{ return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    inline void SetIpv4Address(const Aws::String& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = value; }
    inline void SetIpv4Address(Aws::String&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::move(value); }
    inline void SetIpv4Address(const char* value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address.assign(value); }
    inline DeviceState& WithIpv4Address(const Aws::String& value) { SetIpv4Address(value); return *this;}
    inline DeviceState& WithIpv4Address(Aws::String&& value) { SetIpv4Address(std::move(value)); return *this;}
    inline DeviceState& WithIpv4Address(const char* value) { SetIpv4Address(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Wi-Fi access points the device is using.</p>
     */
    inline const Aws::Vector<WiFiAccessPoint>& GetWiFiAccessPoints() const{ return m_wiFiAccessPoints; }
    inline bool WiFiAccessPointsHasBeenSet() const { return m_wiFiAccessPointsHasBeenSet; }
    inline void SetWiFiAccessPoints(const Aws::Vector<WiFiAccessPoint>& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = value; }
    inline void SetWiFiAccessPoints(Aws::Vector<WiFiAccessPoint>&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = std::move(value); }
    inline DeviceState& WithWiFiAccessPoints(const Aws::Vector<WiFiAccessPoint>& value) { SetWiFiAccessPoints(value); return *this;}
    inline DeviceState& WithWiFiAccessPoints(Aws::Vector<WiFiAccessPoint>&& value) { SetWiFiAccessPoints(std::move(value)); return *this;}
    inline DeviceState& AddWiFiAccessPoints(const WiFiAccessPoint& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.push_back(value); return *this; }
    inline DeviceState& AddWiFiAccessPoints(WiFiAccessPoint&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cellular network infrastructure that the device is connected to.</p>
     */
    inline const CellSignals& GetCellSignals() const{ return m_cellSignals; }
    inline bool CellSignalsHasBeenSet() const { return m_cellSignalsHasBeenSet; }
    inline void SetCellSignals(const CellSignals& value) { m_cellSignalsHasBeenSet = true; m_cellSignals = value; }
    inline void SetCellSignals(CellSignals&& value) { m_cellSignalsHasBeenSet = true; m_cellSignals = std::move(value); }
    inline DeviceState& WithCellSignals(const CellSignals& value) { SetCellSignals(value); return *this;}
    inline DeviceState& WithCellSignals(CellSignals&& value) { SetCellSignals(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    PositionalAccuracy m_accuracy;
    bool m_accuracyHasBeenSet = false;

    Aws::String m_ipv4Address;
    bool m_ipv4AddressHasBeenSet = false;

    Aws::Vector<WiFiAccessPoint> m_wiFiAccessPoints;
    bool m_wiFiAccessPointsHasBeenSet = false;

    CellSignals m_cellSignals;
    bool m_cellSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
