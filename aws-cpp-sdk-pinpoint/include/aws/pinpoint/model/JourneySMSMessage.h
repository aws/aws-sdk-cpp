/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the sender ID and message type for an SMS message that's sent to
   * participants in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneySMSMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API JourneySMSMessage
  {
  public:
    JourneySMSMessage();
    JourneySMSMessage(Aws::Utils::Json::JsonView jsonValue);
    JourneySMSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline JourneySMSMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline JourneySMSMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}

  private:

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
