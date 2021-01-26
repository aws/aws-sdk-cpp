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
   * <p>LoRaWANGateway object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGateway">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANGateway
  {
  public:
    LoRaWANGateway();
    LoRaWANGateway(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The gateway's EUI value.</p>
     */
    inline const Aws::String& GetGatewayEui() const{ return m_gatewayEui; }

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline bool GatewayEuiHasBeenSet() const { return m_gatewayEuiHasBeenSet; }

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline void SetGatewayEui(const Aws::String& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = value; }

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline void SetGatewayEui(Aws::String&& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = std::move(value); }

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline void SetGatewayEui(const char* value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui.assign(value); }

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline LoRaWANGateway& WithGatewayEui(const Aws::String& value) { SetGatewayEui(value); return *this;}

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline LoRaWANGateway& WithGatewayEui(Aws::String&& value) { SetGatewayEui(std::move(value)); return *this;}

    /**
     * <p>The gateway's EUI value.</p>
     */
    inline LoRaWANGateway& WithGatewayEui(const char* value) { SetGatewayEui(value); return *this;}


    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline const Aws::String& GetRfRegion() const{ return m_rfRegion; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(const Aws::String& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(Aws::String&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(const char* value) { m_rfRegionHasBeenSet = true; m_rfRegion.assign(value); }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANGateway& WithRfRegion(const Aws::String& value) { SetRfRegion(value); return *this;}

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANGateway& WithRfRegion(Aws::String&& value) { SetRfRegion(std::move(value)); return *this;}

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANGateway& WithRfRegion(const char* value) { SetRfRegion(value); return *this;}

  private:

    Aws::String m_gatewayEui;
    bool m_gatewayEuiHasBeenSet;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
