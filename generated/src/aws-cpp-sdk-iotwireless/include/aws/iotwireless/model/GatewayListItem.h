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
    AWS_IOTWIRELESS_API GatewayListItem() = default;
    AWS_IOTWIRELESS_API GatewayListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GatewayListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the wireless gateways that you want to add to the list of gateways
     * when sending downlink messages.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    GatewayListItem& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency to use for the gateways when sending a downlink message to the
     * wireless device.</p>
     */
    inline int GetDownlinkFrequency() const { return m_downlinkFrequency; }
    inline bool DownlinkFrequencyHasBeenSet() const { return m_downlinkFrequencyHasBeenSet; }
    inline void SetDownlinkFrequency(int value) { m_downlinkFrequencyHasBeenSet = true; m_downlinkFrequency = value; }
    inline GatewayListItem& WithDownlinkFrequency(int value) { SetDownlinkFrequency(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    int m_downlinkFrequency{0};
    bool m_downlinkFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
