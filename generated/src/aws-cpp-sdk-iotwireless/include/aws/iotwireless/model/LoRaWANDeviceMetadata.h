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
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata() = default;
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDeviceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const { return m_devEui; }
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }
    template<typename DevEuiT = Aws::String>
    void SetDevEui(DevEuiT&& value) { m_devEuiHasBeenSet = true; m_devEui = std::forward<DevEuiT>(value); }
    template<typename DevEuiT = Aws::String>
    LoRaWANDeviceMetadata& WithDevEui(DevEuiT&& value) { SetDevEui(std::forward<DevEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FPort value.</p>
     */
    inline int GetFPort() const { return m_fPort; }
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }
    inline LoRaWANDeviceMetadata& WithFPort(int value) { SetFPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataRate value.</p>
     */
    inline int GetDataRate() const { return m_dataRate; }
    inline bool DataRateHasBeenSet() const { return m_dataRateHasBeenSet; }
    inline void SetDataRate(int value) { m_dataRateHasBeenSet = true; m_dataRate = value; }
    inline LoRaWANDeviceMetadata& WithDataRate(int value) { SetDataRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's channel frequency in Hz.</p>
     */
    inline int GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline LoRaWANDeviceMetadata& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the metadata.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    LoRaWANDeviceMetadata& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the gateways accessed by the device.</p>
     */
    inline const Aws::Vector<LoRaWANGatewayMetadata>& GetGateways() const { return m_gateways; }
    inline bool GatewaysHasBeenSet() const { return m_gatewaysHasBeenSet; }
    template<typename GatewaysT = Aws::Vector<LoRaWANGatewayMetadata>>
    void SetGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways = std::forward<GatewaysT>(value); }
    template<typename GatewaysT = Aws::Vector<LoRaWANGatewayMetadata>>
    LoRaWANDeviceMetadata& WithGateways(GatewaysT&& value) { SetGateways(std::forward<GatewaysT>(value)); return *this;}
    template<typename GatewaysT = LoRaWANGatewayMetadata>
    LoRaWANDeviceMetadata& AddGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways.emplace_back(std::forward<GatewaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the LoRaWAN public network accessed by the device.</p>
     */
    inline const Aws::Vector<LoRaWANPublicGatewayMetadata>& GetPublicGateways() const { return m_publicGateways; }
    inline bool PublicGatewaysHasBeenSet() const { return m_publicGatewaysHasBeenSet; }
    template<typename PublicGatewaysT = Aws::Vector<LoRaWANPublicGatewayMetadata>>
    void SetPublicGateways(PublicGatewaysT&& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways = std::forward<PublicGatewaysT>(value); }
    template<typename PublicGatewaysT = Aws::Vector<LoRaWANPublicGatewayMetadata>>
    LoRaWANDeviceMetadata& WithPublicGateways(PublicGatewaysT&& value) { SetPublicGateways(std::forward<PublicGatewaysT>(value)); return *this;}
    template<typename PublicGatewaysT = LoRaWANPublicGatewayMetadata>
    LoRaWANDeviceMetadata& AddPublicGateways(PublicGatewaysT&& value) { m_publicGatewaysHasBeenSet = true; m_publicGateways.emplace_back(std::forward<PublicGatewaysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_devEui;
    bool m_devEuiHasBeenSet = false;

    int m_fPort{0};
    bool m_fPortHasBeenSet = false;

    int m_dataRate{0};
    bool m_dataRateHasBeenSet = false;

    int m_frequency{0};
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
