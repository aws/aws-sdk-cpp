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
   * messages. The multicast message will be sent to each gateway in the sequence
   * provided in the list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ParticipatingGatewaysMulticast">AWS
   * API Reference</a></p>
   */
  class ParticipatingGatewaysMulticast
  {
  public:
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast();
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ParticipatingGatewaysMulticast& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of gateways that you want to use for sending the multicast downlink.
     * Each downlink will be sent to all the gateways in the list with transmission
     * interval between them. If list is empty the gateway list will be dynamically
     * selected similar to the case of no ParticipatingGateways </p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayList() const{ return m_gatewayList; }
    inline bool GatewayListHasBeenSet() const { return m_gatewayListHasBeenSet; }
    inline void SetGatewayList(const Aws::Vector<Aws::String>& value) { m_gatewayListHasBeenSet = true; m_gatewayList = value; }
    inline void SetGatewayList(Aws::Vector<Aws::String>&& value) { m_gatewayListHasBeenSet = true; m_gatewayList = std::move(value); }
    inline ParticipatingGatewaysMulticast& WithGatewayList(const Aws::Vector<Aws::String>& value) { SetGatewayList(value); return *this;}
    inline ParticipatingGatewaysMulticast& WithGatewayList(Aws::Vector<Aws::String>&& value) { SetGatewayList(std::move(value)); return *this;}
    inline ParticipatingGatewaysMulticast& AddGatewayList(const Aws::String& value) { m_gatewayListHasBeenSet = true; m_gatewayList.push_back(value); return *this; }
    inline ParticipatingGatewaysMulticast& AddGatewayList(Aws::String&& value) { m_gatewayListHasBeenSet = true; m_gatewayList.push_back(std::move(value)); return *this; }
    inline ParticipatingGatewaysMulticast& AddGatewayList(const char* value) { m_gatewayListHasBeenSet = true; m_gatewayList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration of time for which AWS IoT Core for LoRaWAN will wait before
     * transmitting the multicast payload to the next gateway in the list.</p>
     */
    inline int GetTransmissionInterval() const{ return m_transmissionInterval; }
    inline bool TransmissionIntervalHasBeenSet() const { return m_transmissionIntervalHasBeenSet; }
    inline void SetTransmissionInterval(int value) { m_transmissionIntervalHasBeenSet = true; m_transmissionInterval = value; }
    inline ParticipatingGatewaysMulticast& WithTransmissionInterval(int value) { SetTransmissionInterval(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_gatewayList;
    bool m_gatewayListHasBeenSet = false;

    int m_transmissionInterval;
    bool m_transmissionIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
