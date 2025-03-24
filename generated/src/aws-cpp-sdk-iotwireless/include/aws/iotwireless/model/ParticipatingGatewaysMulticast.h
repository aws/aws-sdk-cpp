/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specify the list of gateways to which you want to send the multicast downlink
   * messages. The multicast message will be sent to each gateway in the list, with
   * the transmission interval as the time interval between each
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ParticipatingGatewaysMulticast">AWS
   * API Reference</a></p>
   */
  class ParticipatingGatewaysMulticast
  {
  public:
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast() = default;
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of gateways that you want to use for sending the multicast downlink
     * message. Each downlink message will be sent to all the gateways in the list in
     * the order that you provided. If the gateway list is empty, then AWS IoT Core for
     * LoRaWAN chooses the gateways that were most recently used by the devices to send
     * an uplink message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayList() const { return m_gatewayList; }
    inline bool GatewayListHasBeenSet() const { return m_gatewayListHasBeenSet; }
    template<typename GatewayListT = Aws::Vector<Aws::String>>
    void SetGatewayList(GatewayListT&& value) { m_gatewayListHasBeenSet = true; m_gatewayList = std::forward<GatewayListT>(value); }
    template<typename GatewayListT = Aws::Vector<Aws::String>>
    ParticipatingGatewaysMulticast& WithGatewayList(GatewayListT&& value) { SetGatewayList(std::forward<GatewayListT>(value)); return *this;}
    template<typename GatewayListT = Aws::String>
    ParticipatingGatewaysMulticast& AddGatewayList(GatewayListT&& value) { m_gatewayListHasBeenSet = true; m_gatewayList.emplace_back(std::forward<GatewayListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration of time in milliseconds for which AWS IoT Core for LoRaWAN will
     * wait before transmitting the multicast payload to the next gateway in the
     * list.</p>
     */
    inline int GetTransmissionInterval() const { return m_transmissionInterval; }
    inline bool TransmissionIntervalHasBeenSet() const { return m_transmissionIntervalHasBeenSet; }
    inline void SetTransmissionInterval(int value) { m_transmissionIntervalHasBeenSet = true; m_transmissionInterval = value; }
    inline ParticipatingGatewaysMulticast& WithTransmissionInterval(int value) { SetTransmissionInterval(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_gatewayList;
    bool m_gatewayListHasBeenSet = false;

    int m_transmissionInterval{0};
    bool m_transmissionIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
