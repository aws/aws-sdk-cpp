/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/LoRaWANGatewayMetadata.h>
#include <aws/iotwireless/model/LoRaWANPublicGatewayMetadata.h>
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


    ///@{
    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const{ return m_devEui; }
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }
    inline void SetDevEui(const Aws::String& value) { m_devEuiHasBeenSet = true; m_devEui = value; }
    inline void SetDevEui(Aws::String&& value) { m_devEuiHasBeenSet = true; m_devEui = std::move(value); }
    inline void SetDevEui(const char* value) { m_devEuiHasBeenSet = true; m_devEui.assign(value); }
    inline LoRaWANDeviceMetadata& WithDevEui(const Aws::String& value) { SetDevEui(value); return *this;}
    inline LoRaWANDeviceMetadata& WithDevEui(Aws::String&& value) { SetDevEui(std::move(value)); return *this;}
    inline LoRaWANDeviceMetadata& WithDevEui(const char* value) { SetDevEui(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FPort value.</p>
     */
    inline int GetFPort() const{ return m_fPort; }
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }
    inline LoRaWANDeviceMetadata& WithFPort(int value) { SetFPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataRate value.</p>
     */
    inline int GetDataRate() const{ return m_dataRate; }
    inline bool DataRateHasBeenSet() const { return m_dataRateHasBeenSet; }
    inline void SetDataRate(int value) { m_dataRateHasBeenSet = true; m_dataRate = value; }
    inline LoRaWANDeviceMetadata& WithDataRate(int value) { SetDataRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline LoRaWANDeviceMetadata& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the metadata.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }
    inline LoRaWANDeviceMetadata& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}
    inline LoRaWANDeviceMetadata& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}
    inline LoRaWANDeviceMetadata& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline const Aws::Vector<LoRaWANGatewayMetadata>& GetGateways() const{ return m_gateways; }
    inline bool GatewaysHasBeenSet() const { return m_gatewaysHasBeenSet; }
    inline void SetGateways(const Aws::Vector<LoRaWANGatewayMetadata>& value) { m_gatewaysHasBeenSet = true; m_gateways = value; }
    inline void SetGateways(Aws::Vector<LoRaWANGatewayMetadata>&& value) { m_gatewaysHasBeenSet = true; m_gateways = std::move(value); }
    inline LoRaWANDeviceMetadata& WithGateways(const Aws::Vector<LoRaWANGatewayMetadata>& value) { SetGateways(value); return *this;}
    inline LoRaWANDeviceMetadata& WithGateways(Aws::Vector<LoRaWANGatewayMetadata>&& value) { SetGateways(std::move(value)); return *this;}
    inline LoRaWANDeviceMetadata& AddGateways(const LoRaWANGatewayMetadata& value) { m_gatewaysHasBeenSet = true; m_gateways.push_back(value); return *this; }
    inline LoRaWANDeviceMetadata& AddGateways(LoRaWANGatewayMetadata&& value) { m_gatewaysHasBeenSet = true; m_gateways.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the LoRaWAN public network accessed by the device.</p>
     */
    inline const Aws::Vector<LoRaWANPublicGatewayMetadata>& GetPublicGateways() const{ return m_publicGateways; }
    inline bool PublicGatewaysHasBeenSet() const { return m_publicGatewaysHasBeenSet; }
    inline void SetPublicGateways(const Aws::Vector<LoRaWANPublicGatewayMetadata>& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways = value; }
    inline void SetPublicGateways(Aws::Vector<LoRaWANPublicGatewayMetadata>&& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways = std::move(value); }
    inline LoRaWANDeviceMetadata& WithPublicGateways(const Aws::Vector<LoRaWANPublicGatewayMetadata>& value) { SetPublicGateways(value); return *this;}
    inline LoRaWANDeviceMetadata& WithPublicGateways(Aws::Vector<LoRaWANPublicGatewayMetadata>&& value) { SetPublicGateways(std::move(value)); return *this;}
    inline LoRaWANDeviceMetadata& AddPublicGateways(const LoRaWANPublicGatewayMetadata& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways.push_back(value); return *this; }
    inline LoRaWANDeviceMetadata& AddPublicGateways(LoRaWANPublicGatewayMetadata&& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<LoRaWANPublicGatewayMetadata> m_publicGateways;
    bool m_publicGatewaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
