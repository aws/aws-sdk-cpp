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
    AWS_LOCATIONSERVICE_API DeviceState() = default;
    AWS_LOCATIONSERVICE_API DeviceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API DeviceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device identifier.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    DeviceState& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    void SetSampleTime(SampleTimeT&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::forward<SampleTimeT>(value); }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    DeviceState& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    DeviceState& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline DeviceState& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const PositionalAccuracy& GetAccuracy() const { return m_accuracy; }
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }
    template<typename AccuracyT = PositionalAccuracy>
    void SetAccuracy(AccuracyT&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::forward<AccuracyT>(value); }
    template<typename AccuracyT = PositionalAccuracy>
    DeviceState& WithAccuracy(AccuracyT&& value) { SetAccuracy(std::forward<AccuracyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's Ipv4 address.</p>
     */
    inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    template<typename Ipv4AddressT = Aws::String>
    void SetIpv4Address(Ipv4AddressT&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::forward<Ipv4AddressT>(value); }
    template<typename Ipv4AddressT = Aws::String>
    DeviceState& WithIpv4Address(Ipv4AddressT&& value) { SetIpv4Address(std::forward<Ipv4AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Wi-Fi access points the device is using.</p>
     */
    inline const Aws::Vector<WiFiAccessPoint>& GetWiFiAccessPoints() const { return m_wiFiAccessPoints; }
    inline bool WiFiAccessPointsHasBeenSet() const { return m_wiFiAccessPointsHasBeenSet; }
    template<typename WiFiAccessPointsT = Aws::Vector<WiFiAccessPoint>>
    void SetWiFiAccessPoints(WiFiAccessPointsT&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints = std::forward<WiFiAccessPointsT>(value); }
    template<typename WiFiAccessPointsT = Aws::Vector<WiFiAccessPoint>>
    DeviceState& WithWiFiAccessPoints(WiFiAccessPointsT&& value) { SetWiFiAccessPoints(std::forward<WiFiAccessPointsT>(value)); return *this;}
    template<typename WiFiAccessPointsT = WiFiAccessPoint>
    DeviceState& AddWiFiAccessPoints(WiFiAccessPointsT&& value) { m_wiFiAccessPointsHasBeenSet = true; m_wiFiAccessPoints.emplace_back(std::forward<WiFiAccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cellular network infrastructure that the device is connected to.</p>
     */
    inline const CellSignals& GetCellSignals() const { return m_cellSignals; }
    inline bool CellSignalsHasBeenSet() const { return m_cellSignalsHasBeenSet; }
    template<typename CellSignalsT = CellSignals>
    void SetCellSignals(CellSignalsT&& value) { m_cellSignalsHasBeenSet = true; m_cellSignals = std::forward<CellSignalsT>(value); }
    template<typename CellSignalsT = CellSignals>
    DeviceState& WithCellSignals(CellSignalsT&& value) { SetCellSignals(std::forward<CellSignalsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime{};
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
