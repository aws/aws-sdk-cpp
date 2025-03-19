/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the set of radios and their states on a device. Examples of radios
   * include Wi-Fi, GPS, Bluetooth, and NFC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Radios">AWS
   * API Reference</a></p>
   */
  class Radios
  {
  public:
    AWS_DEVICEFARM_API Radios() = default;
    AWS_DEVICEFARM_API Radios(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Radios& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if Wi-Fi is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetWifi() const { return m_wifi; }
    inline bool WifiHasBeenSet() const { return m_wifiHasBeenSet; }
    inline void SetWifi(bool value) { m_wifiHasBeenSet = true; m_wifi = value; }
    inline Radios& WithWifi(bool value) { SetWifi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if Bluetooth is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline bool GetBluetooth() const { return m_bluetooth; }
    inline bool BluetoothHasBeenSet() const { return m_bluetoothHasBeenSet; }
    inline void SetBluetooth(bool value) { m_bluetoothHasBeenSet = true; m_bluetooth = value; }
    inline Radios& WithBluetooth(bool value) { SetBluetooth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if NFC is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetNfc() const { return m_nfc; }
    inline bool NfcHasBeenSet() const { return m_nfcHasBeenSet; }
    inline void SetNfc(bool value) { m_nfcHasBeenSet = true; m_nfc = value; }
    inline Radios& WithNfc(bool value) { SetNfc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if GPS is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetGps() const { return m_gps; }
    inline bool GpsHasBeenSet() const { return m_gpsHasBeenSet; }
    inline void SetGps(bool value) { m_gpsHasBeenSet = true; m_gps = value; }
    inline Radios& WithGps(bool value) { SetGps(value); return *this;}
    ///@}
  private:

    bool m_wifi{false};
    bool m_wifiHasBeenSet = false;

    bool m_bluetooth{false};
    bool m_bluetoothHasBeenSet = false;

    bool m_nfc{false};
    bool m_nfcHasBeenSet = false;

    bool m_gps{false};
    bool m_gpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
