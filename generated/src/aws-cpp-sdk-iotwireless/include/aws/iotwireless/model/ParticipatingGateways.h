/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/DownlinkMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/GatewayListItem.h>
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
   * <p>Specify the list of gateways to which you want to send downlink data traffic
   * when the wireless device is running in class B or class C mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ParticipatingGateways">AWS
   * API Reference</a></p>
   */
  class ParticipatingGateways
  {
  public:
    AWS_IOTWIRELESS_API ParticipatingGateways() = default;
    AWS_IOTWIRELESS_API ParticipatingGateways(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ParticipatingGateways& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to send the downlink message in sequential mode or
     * concurrent mode, or to use only the chosen gateways from the previous uplink
     * message transmission.</p>
     */
    inline DownlinkMode GetDownlinkMode() const { return m_downlinkMode; }
    inline bool DownlinkModeHasBeenSet() const { return m_downlinkModeHasBeenSet; }
    inline void SetDownlinkMode(DownlinkMode value) { m_downlinkModeHasBeenSet = true; m_downlinkMode = value; }
    inline ParticipatingGateways& WithDownlinkMode(DownlinkMode value) { SetDownlinkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of gateways that you want to use for sending the downlink data
     * traffic.</p>
     */
    inline const Aws::Vector<GatewayListItem>& GetGatewayList() const { return m_gatewayList; }
    inline bool GatewayListHasBeenSet() const { return m_gatewayListHasBeenSet; }
    template<typename GatewayListT = Aws::Vector<GatewayListItem>>
    void SetGatewayList(GatewayListT&& value) { m_gatewayListHasBeenSet = true; m_gatewayList = std::forward<GatewayListT>(value); }
    template<typename GatewayListT = Aws::Vector<GatewayListItem>>
    ParticipatingGateways& WithGatewayList(GatewayListT&& value) { SetGatewayList(std::forward<GatewayListT>(value)); return *this;}
    template<typename GatewayListT = GatewayListItem>
    ParticipatingGateways& AddGatewayList(GatewayListT&& value) { m_gatewayListHasBeenSet = true; m_gatewayList.emplace_back(std::forward<GatewayListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration of time for which AWS IoT Core for LoRaWAN will wait before
     * transmitting the payload to the next gateway.</p>
     */
    inline int GetTransmissionInterval() const { return m_transmissionInterval; }
    inline bool TransmissionIntervalHasBeenSet() const { return m_transmissionIntervalHasBeenSet; }
    inline void SetTransmissionInterval(int value) { m_transmissionIntervalHasBeenSet = true; m_transmissionInterval = value; }
    inline ParticipatingGateways& WithTransmissionInterval(int value) { SetTransmissionInterval(value); return *this;}
    ///@}
  private:

    DownlinkMode m_downlinkMode{DownlinkMode::NOT_SET};
    bool m_downlinkModeHasBeenSet = false;

    Aws::Vector<GatewayListItem> m_gatewayList;
    bool m_gatewayListHasBeenSet = false;

    int m_transmissionInterval{0};
    bool m_transmissionIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
