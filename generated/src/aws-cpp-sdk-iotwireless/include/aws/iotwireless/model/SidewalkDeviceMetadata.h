/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/BatteryLevel.h>
#include <aws/iotwireless/model/Event.h>
#include <aws/iotwireless/model/DeviceState.h>
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
   * <p>MetaData for Sidewalk device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkDeviceMetadata">AWS
   * API Reference</a></p>
   */
  class SidewalkDeviceMetadata
  {
  public:
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata() = default;
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The RSSI value.</p>
     */
    inline int GetRssi() const { return m_rssi; }
    inline bool RssiHasBeenSet() const { return m_rssiHasBeenSet; }
    inline void SetRssi(int value) { m_rssiHasBeenSet = true; m_rssi = value; }
    inline SidewalkDeviceMetadata& WithRssi(int value) { SetRssi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline BatteryLevel GetBatteryLevel() const { return m_batteryLevel; }
    inline bool BatteryLevelHasBeenSet() const { return m_batteryLevelHasBeenSet; }
    inline void SetBatteryLevel(BatteryLevel value) { m_batteryLevelHasBeenSet = true; m_batteryLevel = value; }
    inline SidewalkDeviceMetadata& WithBatteryLevel(BatteryLevel value) { SetBatteryLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline Event GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(Event value) { m_eventHasBeenSet = true; m_event = value; }
    inline SidewalkDeviceMetadata& WithEvent(Event value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline DeviceState GetDeviceState() const { return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    inline void SetDeviceState(DeviceState value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline SidewalkDeviceMetadata& WithDeviceState(DeviceState value) { SetDeviceState(value); return *this;}
    ///@}
  private:

    int m_rssi{0};
    bool m_rssiHasBeenSet = false;

    BatteryLevel m_batteryLevel{BatteryLevel::NOT_SET};
    bool m_batteryLevelHasBeenSet = false;

    Event m_event{Event::NOT_SET};
    bool m_eventHasBeenSet = false;

    DeviceState m_deviceState{DeviceState::NOT_SET};
    bool m_deviceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
