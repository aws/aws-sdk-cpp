/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANSendDataToDevice.h>
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
   * <p>The message in the downlink queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DownlinkQueueMessage">AWS
   * API Reference</a></p>
   */
  class DownlinkQueueMessage
  {
  public:
    AWS_IOTWIRELESS_API DownlinkQueueMessage() = default;
    AWS_IOTWIRELESS_API DownlinkQueueMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API DownlinkQueueMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The message ID assigned by IoT Wireless to each downlink message, which
     * helps identify the message.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    DownlinkQueueMessage& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transmit mode to use for sending data to the wireless device. This can be
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline int GetTransmitMode() const { return m_transmitMode; }
    inline bool TransmitModeHasBeenSet() const { return m_transmitModeHasBeenSet; }
    inline void SetTransmitMode(int value) { m_transmitModeHasBeenSet = true; m_transmitMode = value; }
    inline DownlinkQueueMessage& WithTransmitMode(int value) { SetTransmitMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which Iot Wireless received the downlink message.</p>
     */
    inline const Aws::String& GetReceivedAt() const { return m_receivedAt; }
    inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }
    template<typename ReceivedAtT = Aws::String>
    void SetReceivedAt(ReceivedAtT&& value) { m_receivedAtHasBeenSet = true; m_receivedAt = std::forward<ReceivedAtT>(value); }
    template<typename ReceivedAtT = Aws::String>
    DownlinkQueueMessage& WithReceivedAt(ReceivedAtT&& value) { SetReceivedAt(std::forward<ReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoRaWANSendDataToDevice& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANSendDataToDevice>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANSendDataToDevice>
    DownlinkQueueMessage& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    int m_transmitMode{0};
    bool m_transmitModeHasBeenSet = false;

    Aws::String m_receivedAt;
    bool m_receivedAtHasBeenSet = false;

    LoRaWANSendDataToDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
