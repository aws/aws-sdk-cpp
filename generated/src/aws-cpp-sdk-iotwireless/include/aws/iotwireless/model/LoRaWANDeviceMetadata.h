/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/LoRaWANGatewayMetadata.h>
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
   * <p>LoRaWAN device metatdata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANDeviceMetadata">AWS
   * API Reference</a></p>
   */
  class LoRaWANDeviceMetadata
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata();
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const{ return m_devEui; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(const Aws::String& value) { m_devEuiHasBeenSet = true; m_devEui = value; }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(Aws::String&& value) { m_devEuiHasBeenSet = true; m_devEui = std::move(value); }

    /**
     * <p>The DevEUI value.</p>
     */
    inline void SetDevEui(const char* value) { m_devEuiHasBeenSet = true; m_devEui.assign(value); }

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANDeviceMetadata& WithDevEui(const Aws::String& value) { SetDevEui(value); return *this;}

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANDeviceMetadata& WithDevEui(Aws::String&& value) { SetDevEui(std::move(value)); return *this;}

    /**
     * <p>The DevEUI value.</p>
     */
    inline LoRaWANDeviceMetadata& WithDevEui(const char* value) { SetDevEui(value); return *this;}


    /**
     * <p>The FPort value.</p>
     */
    inline int GetFPort() const{ return m_fPort; }

    /**
     * <p>The FPort value.</p>
     */
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }

    /**
     * <p>The FPort value.</p>
     */
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }

    /**
     * <p>The FPort value.</p>
     */
    inline LoRaWANDeviceMetadata& WithFPort(int value) { SetFPort(value); return *this;}


    /**
     * <p>The DataRate value.</p>
     */
    inline int GetDataRate() const{ return m_dataRate; }

    /**
     * <p>The DataRate value.</p>
     */
    inline bool DataRateHasBeenSet() const { return m_dataRateHasBeenSet; }

    /**
     * <p>The DataRate value.</p>
     */
    inline void SetDataRate(int value) { m_dataRateHasBeenSet = true; m_dataRate = value; }

    /**
     * <p>The DataRate value.</p>
     */
    inline LoRaWANDeviceMetadata& WithDataRate(int value) { SetDataRate(value); return *this;}


    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }

    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline LoRaWANDeviceMetadata& WithFrequency(int value) { SetFrequency(value); return *this;}


    /**
     * <p>The date and time of the metadata.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline LoRaWANDeviceMetadata& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline LoRaWANDeviceMetadata& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The date and time of the metadata.</p>
     */
    inline LoRaWANDeviceMetadata& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}


    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline const Aws::Vector<LoRaWANGatewayMetadata>& GetGateways() const{ return m_gateways; }

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline bool GatewaysHasBeenSet() const { return m_gatewaysHasBeenSet; }

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline void SetGateways(const Aws::Vector<LoRaWANGatewayMetadata>& value) { m_gatewaysHasBeenSet = true; m_gateways = value; }

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline void SetGateways(Aws::Vector<LoRaWANGatewayMetadata>&& value) { m_gatewaysHasBeenSet = true; m_gateways = std::move(value); }

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline LoRaWANDeviceMetadata& WithGateways(const Aws::Vector<LoRaWANGatewayMetadata>& value) { SetGateways(value); return *this;}

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline LoRaWANDeviceMetadata& WithGateways(Aws::Vector<LoRaWANGatewayMetadata>&& value) { SetGateways(std::move(value)); return *this;}

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline LoRaWANDeviceMetadata& AddGateways(const LoRaWANGatewayMetadata& value) { m_gatewaysHasBeenSet = true; m_gateways.push_back(value); return *this; }

    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline LoRaWANDeviceMetadata& AddGateways(LoRaWANGatewayMetadata&& value) { m_gatewaysHasBeenSet = true; m_gateways.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_devEui;
    bool m_devEuiHasBeenSet = false;

    int m_fPort;
    bool m_fPortHasBeenSet = false;

    int m_dataRate;
    bool m_dataRateHasBeenSet = false;

    int m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::Vector<LoRaWANGatewayMetadata> m_gateways;
    bool m_gatewaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
