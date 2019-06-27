/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/MessageType.h>
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
   * <p>Specifies the content and settings for an SMS message that's sent to
   * recipients of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignSmsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignSmsMessage
  {
  public:
    CampaignSmsMessage();
    CampaignSmsMessage(Aws::Utils::Json::JsonView jsonValue);
    CampaignSmsMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the SMS message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline CampaignSmsMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline CampaignSmsMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline CampaignSmsMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline CampaignSmsMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The type of SMS message. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message isn't critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline CampaignSmsMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline CampaignSmsMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline CampaignSmsMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID to display on recipients' devices when they receive the SMS
     * message.</p>
     */
    inline CampaignSmsMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
