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
   * <p>LoRaWAN public gateway metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANPublicGatewayMetadata">AWS
   * API Reference</a></p>
   */
  class LoRaWANPublicGatewayMetadata
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata() = default;
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline const Aws::String& GetProviderNetId() const { return m_providerNetId; }
    inline bool ProviderNetIdHasBeenSet() const { return m_providerNetIdHasBeenSet; }
    template<typename ProviderNetIdT = Aws::String>
    void SetProviderNetId(ProviderNetIdT&& value) { m_providerNetIdHasBeenSet = true; m_providerNetId = std::forward<ProviderNetIdT>(value); }
    template<typename ProviderNetIdT = Aws::String>
    LoRaWANPublicGatewayMetadata& WithProviderNetId(ProviderNetIdT&& value) { SetProviderNetId(std::forward<ProviderNetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LoRaWANPublicGatewayMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSSI (received signal strength indicator) value.</p>
     */
    inline double GetRssi() const { return m_rssi; }
    inline bool RssiHasBeenSet() const { return m_rssiHasBeenSet; }
    inline void SetRssi(double value) { m_rssiHasBeenSet = true; m_rssi = value; }
    inline LoRaWANPublicGatewayMetadata& WithRssi(double value) { SetRssi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNR (signal to noise ratio) value.</p>
     */
    inline double GetSnr() const { return m_snr; }
    inline bool SnrHasBeenSet() const { return m_snrHasBeenSet; }
    inline void SetSnr(double value) { m_snrHasBeenSet = true; m_snr = value; }
    inline LoRaWANPublicGatewayMetadata& WithSnr(double value) { SetSnr(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    template<typename RfRegionT = Aws::String>
    void SetRfRegion(RfRegionT&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::forward<RfRegionT>(value); }
    template<typename RfRegionT = Aws::String>
    LoRaWANPublicGatewayMetadata& WithRfRegion(RfRegionT&& value) { SetRfRegion(std::forward<RfRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that indicates whether downlink is allowed using the network.</p>
     */
    inline bool GetDlAllowed() const { return m_dlAllowed; }
    inline bool DlAllowedHasBeenSet() const { return m_dlAllowedHasBeenSet; }
    inline void SetDlAllowed(bool value) { m_dlAllowedHasBeenSet = true; m_dlAllowed = value; }
    inline LoRaWANPublicGatewayMetadata& WithDlAllowed(bool value) { SetDlAllowed(value); return *this;}
    ///@}
  private:

    Aws::String m_providerNetId;
    bool m_providerNetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_rssi{0.0};
    bool m_rssiHasBeenSet = false;

    double m_snr{0.0};
    bool m_snrHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    bool m_dlAllowed{false};
    bool m_dlAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
