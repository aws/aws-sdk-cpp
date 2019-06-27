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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies the default settings for a one-time SMS message that's sent
   * directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SMSMessage
  {
  public:
    SMSMessage();
    SMSMessage(Aws::Utils::Json::JsonView jsonValue);
    SMSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline SMSMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline SMSMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline SMSMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline SMSMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The SMS message type. Valid values are: TRANSACTIONAL, the message is
     * critical or time-sensitive, such as a one-time password that supports a customer
     * transaction; and, PROMOTIONAL, the message is not critical or time-sensitive,
     * such as a marketing message.</p>
     */
    inline SMSMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline const Aws::String& GetOriginationNumber() const{ return m_originationNumber; }

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline void SetOriginationNumber(const Aws::String& value) { m_originationNumberHasBeenSet = true; m_originationNumber = value; }

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline void SetOriginationNumber(Aws::String&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::move(value); }

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline void SetOriginationNumber(const char* value) { m_originationNumberHasBeenSet = true; m_originationNumber.assign(value); }

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline SMSMessage& WithOriginationNumber(const Aws::String& value) { SetOriginationNumber(value); return *this;}

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline SMSMessage& WithOriginationNumber(Aws::String&& value) { SetOriginationNumber(std::move(value)); return *this;}

    /**
     * <p>The number that the SMS message originates from. This should be one of the
     * dedicated long codes or short codes that you requested from AWS Support and is
     * assigned to your AWS account. If you don't specify a long or short code, Amazon
     * Pinpoint assigns a random long code to the SMS message.</p>
     */
    inline SMSMessage& WithOriginationNumber(const char* value) { SetOriginationNumber(value); return *this;}


    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    Aws::String m_originationNumber;
    bool m_originationNumberHasBeenSet;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
