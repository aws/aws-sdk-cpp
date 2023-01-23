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
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata();
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkDeviceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The RSSI value.</p>
     */
    inline int GetRssi() const{ return m_rssi; }

    /**
     * <p>The RSSI value.</p>
     */
    inline bool RssiHasBeenSet() const { return m_rssiHasBeenSet; }

    /**
     * <p>The RSSI value.</p>
     */
    inline void SetRssi(int value) { m_rssiHasBeenSet = true; m_rssi = value; }

    /**
     * <p>The RSSI value.</p>
     */
    inline SidewalkDeviceMetadata& WithRssi(int value) { SetRssi(value); return *this;}


    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline const BatteryLevel& GetBatteryLevel() const{ return m_batteryLevel; }

    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline bool BatteryLevelHasBeenSet() const { return m_batteryLevelHasBeenSet; }

    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline void SetBatteryLevel(const BatteryLevel& value) { m_batteryLevelHasBeenSet = true; m_batteryLevel = value; }

    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline void SetBatteryLevel(BatteryLevel&& value) { m_batteryLevelHasBeenSet = true; m_batteryLevel = std::move(value); }

    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline SidewalkDeviceMetadata& WithBatteryLevel(const BatteryLevel& value) { SetBatteryLevel(value); return *this;}

    /**
     * <p>Sidewalk device battery level.</p>
     */
    inline SidewalkDeviceMetadata& WithBatteryLevel(BatteryLevel&& value) { SetBatteryLevel(std::move(value)); return *this;}


    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }

    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline void SetEvent(const Event& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline void SetEvent(Event&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline SidewalkDeviceMetadata& WithEvent(const Event& value) { SetEvent(value); return *this;}

    /**
     * <p>Sidewalk device status notification.</p>
     */
    inline SidewalkDeviceMetadata& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline const DeviceState& GetDeviceState() const{ return m_deviceState; }

    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }

    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline void SetDeviceState(const DeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }

    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline void SetDeviceState(DeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }

    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline SidewalkDeviceMetadata& WithDeviceState(const DeviceState& value) { SetDeviceState(value); return *this;}

    /**
     * <p>Device state defines the device status of sidewalk device.</p>
     */
    inline SidewalkDeviceMetadata& WithDeviceState(DeviceState&& value) { SetDeviceState(std::move(value)); return *this;}

  private:

    int m_rssi;
    bool m_rssiHasBeenSet = false;

    BatteryLevel m_batteryLevel;
    bool m_batteryLevelHasBeenSet = false;

    Event m_event;
    bool m_eventHasBeenSet = false;

    DeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
