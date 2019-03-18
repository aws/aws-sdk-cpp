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
   * SMS message configuration.<p><h3>See Also:</h3>   <a
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
     * The SMS text body.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The SMS text body.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * The SMS text body.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The SMS text body.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The SMS text body.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The SMS text body.
     */
    inline CampaignSmsMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The SMS text body.
     */
    inline CampaignSmsMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The SMS text body.
     */
    inline CampaignSmsMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline CampaignSmsMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * Is this is a transactional SMS message, otherwise a promotional message.
     */
    inline CampaignSmsMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * Sender ID of sent message.
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * Sender ID of sent message.
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * Sender ID of sent message.
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * Sender ID of sent message.
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * Sender ID of sent message.
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * Sender ID of sent message.
     */
    inline CampaignSmsMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * Sender ID of sent message.
     */
    inline CampaignSmsMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * Sender ID of sent message.
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
