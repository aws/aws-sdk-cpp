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
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata();
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANPublicGatewayMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline const Aws::String& GetProviderNetId() const{ return m_providerNetId; }

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline bool ProviderNetIdHasBeenSet() const { return m_providerNetIdHasBeenSet; }

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline void SetProviderNetId(const Aws::String& value) { m_providerNetIdHasBeenSet = true; m_providerNetId = value; }

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline void SetProviderNetId(Aws::String&& value) { m_providerNetIdHasBeenSet = true; m_providerNetId = std::move(value); }

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline void SetProviderNetId(const char* value) { m_providerNetIdHasBeenSet = true; m_providerNetId.assign(value); }

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithProviderNetId(const Aws::String& value) { SetProviderNetId(value); return *this;}

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithProviderNetId(Aws::String&& value) { SetProviderNetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LoRaWAN public network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithProviderNetId(const char* value) { SetProviderNetId(value); return *this;}


    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the gateways that are operated by the network provider.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The RSSI (received signal strength indicator) value.</p>
     */
    inline double GetRssi() const{ return m_rssi; }

    /**
     * <p>The RSSI (received signal strength indicator) value.</p>
     */
    inline bool RssiHasBeenSet() const { return m_rssiHasBeenSet; }

    /**
     * <p>The RSSI (received signal strength indicator) value.</p>
     */
    inline void SetRssi(double value) { m_rssiHasBeenSet = true; m_rssi = value; }

    /**
     * <p>The RSSI (received signal strength indicator) value.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithRssi(double value) { SetRssi(value); return *this;}


    /**
     * <p>The SNR (signal to noise ratio) value.</p>
     */
    inline double GetSnr() const{ return m_snr; }

    /**
     * <p>The SNR (signal to noise ratio) value.</p>
     */
    inline bool SnrHasBeenSet() const { return m_snrHasBeenSet; }

    /**
     * <p>The SNR (signal to noise ratio) value.</p>
     */
    inline void SetSnr(double value) { m_snrHasBeenSet = true; m_snr = value; }

    /**
     * <p>The SNR (signal to noise ratio) value.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithSnr(double value) { SetSnr(value); return *this;}


    
    inline const Aws::String& GetRfRegion() const{ return m_rfRegion; }

    
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    
    inline void SetRfRegion(const Aws::String& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    
    inline void SetRfRegion(Aws::String&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    
    inline void SetRfRegion(const char* value) { m_rfRegionHasBeenSet = true; m_rfRegion.assign(value); }

    
    inline LoRaWANPublicGatewayMetadata& WithRfRegion(const Aws::String& value) { SetRfRegion(value); return *this;}

    
    inline LoRaWANPublicGatewayMetadata& WithRfRegion(Aws::String&& value) { SetRfRegion(std::move(value)); return *this;}

    
    inline LoRaWANPublicGatewayMetadata& WithRfRegion(const char* value) { SetRfRegion(value); return *this;}


    /**
     * <p>Boolean that indicates whether downlink is allowed using the network.</p>
     */
    inline bool GetDlAllowed() const{ return m_dlAllowed; }

    /**
     * <p>Boolean that indicates whether downlink is allowed using the network.</p>
     */
    inline bool DlAllowedHasBeenSet() const { return m_dlAllowedHasBeenSet; }

    /**
     * <p>Boolean that indicates whether downlink is allowed using the network.</p>
     */
    inline void SetDlAllowed(bool value) { m_dlAllowedHasBeenSet = true; m_dlAllowed = value; }

    /**
     * <p>Boolean that indicates whether downlink is allowed using the network.</p>
     */
    inline LoRaWANPublicGatewayMetadata& WithDlAllowed(bool value) { SetDlAllowed(value); return *this;}

  private:

    Aws::String m_providerNetId;
    bool m_providerNetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_rssi;
    bool m_rssiHasBeenSet = false;

    double m_snr;
    bool m_snrHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    bool m_dlAllowed;
    bool m_dlAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
