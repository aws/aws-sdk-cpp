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
   * <p>Gateway list item object that specifies the frequency and list of gateways
   * for which the downlink message should be sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GatewayListItem">AWS
   * API Reference</a></p>
   */
  class GatewayListItem
  {
  public:
    AWS_IOTWIRELESS_API GatewayListItem();
    AWS_IOTWIRELESS_API GatewayListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GatewayListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline GatewayListItem& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline GatewayListItem& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline GatewayListItem& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The frequency to use for the gateways when sending a downlink message to the
     * wireless device.</p>
     */
    inline int GetDownlinkFrequency() const{ return m_downlinkFrequency; }

    /**
     * <p>The frequency to use for the gateways when sending a downlink message to the
     * wireless device.</p>
     */
    inline bool DownlinkFrequencyHasBeenSet() const { return m_downlinkFrequencyHasBeenSet; }

    /**
     * <p>The frequency to use for the gateways when sending a downlink message to the
     * wireless device.</p>
     */
    inline void SetDownlinkFrequency(int value) { m_downlinkFrequencyHasBeenSet = true; m_downlinkFrequency = value; }

    /**
     * <p>The frequency to use for the gateways when sending a downlink message to the
     * wireless device.</p>
     */
    inline GatewayListItem& WithDownlinkFrequency(int value) { SetDownlinkFrequency(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    int m_downlinkFrequency;
    bool m_downlinkFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
