/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>LoRaWAN gateway metatdata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGatewayMetadata">AWS
   * API Reference</a></p>
   */
  class LoRaWANGatewayMetadata
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANGatewayMetadata() = default;
    AWS_IOTWIRELESS_API LoRaWANGatewayMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGatewayMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gateway's EUI value.</p>
     */
    inline const Aws::String& GetGatewayEui() const { return m_gatewayEui; }
    inline bool GatewayEuiHasBeenSet() const { return m_gatewayEuiHasBeenSet; }
    template<typename GatewayEuiT = Aws::String>
    void SetGatewayEui(GatewayEuiT&& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = std::forward<GatewayEuiT>(value); }
    template<typename GatewayEuiT = Aws::String>
    LoRaWANGatewayMetadata& WithGatewayEui(GatewayEuiT&& value) { SetGatewayEui(std::forward<GatewayEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNR value.</p>
     */
    inline double GetSnr() const { return m_snr; }
    inline bool SnrHasBeenSet() const { return m_snrHasBeenSet; }
    inline void SetSnr(double value) { m_snrHasBeenSet = true; m_snr = value; }
    inline LoRaWANGatewayMetadata& WithSnr(double value) { SetSnr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSSI value.</p>
     */
    inline double GetRssi() const { return m_rssi; }
    inline bool RssiHasBeenSet() const { return m_rssiHasBeenSet; }
    inline void SetRssi(double value) { m_rssiHasBeenSet = true; m_rssi = value; }
    inline LoRaWANGatewayMetadata& WithRssi(double value) { SetRssi(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayEui;
    bool m_gatewayEuiHasBeenSet = false;

    double m_snr{0.0};
    bool m_snrHasBeenSet = false;

    double m_rssi{0.0};
    bool m_rssiHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
