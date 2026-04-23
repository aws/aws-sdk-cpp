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
   * SMS Message.<p><h3>See Also:</h3>   <a
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
     * The body of the SMS message.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The body of the SMS message.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * The body of the SMS message.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The body of the SMS message.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The body of the SMS message.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The body of the SMS message.
     */
    inline SMSMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The body of the SMS message.
     */
    inline SMSMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The body of the SMS message.
     */
    inline SMSMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline SMSMessage& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline SMSMessage& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.
     */
    inline SMSMessage& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * Is this a transaction priority message or lower priority.
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * Is this a transaction priority message or lower priority.
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * Is this a transaction priority message or lower priority.
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * Is this a transaction priority message or lower priority.
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * Is this a transaction priority message or lower priority.
     */
    inline SMSMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * Is this a transaction priority message or lower priority.
     */
    inline SMSMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline const Aws::String& GetOriginationNumber() const{ return m_originationNumber; }

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline void SetOriginationNumber(const Aws::String& value) { m_originationNumberHasBeenSet = true; m_originationNumber = value; }

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline void SetOriginationNumber(Aws::String&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::move(value); }

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline void SetOriginationNumber(const char* value) { m_originationNumberHasBeenSet = true; m_originationNumber.assign(value); }

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline SMSMessage& WithOriginationNumber(const Aws::String& value) { SetOriginationNumber(value); return *this;}

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline SMSMessage& WithOriginationNumber(Aws::String&& value) { SetOriginationNumber(std::move(value)); return *this;}

    /**
     * The phone number that the SMS message originates from. Specify one of the
     * dedicated long codes or short codes that you requested from AWS Support and that
     * is assigned to your account. If this attribute is not specified, Amazon Pinpoint
     * randomly assigns a long code.
     */
    inline SMSMessage& WithOriginationNumber(const char* value) { SetOriginationNumber(value); return *this;}


    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline SMSMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline SMSMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * The sender ID that is shown as the message sender on the recipient's device.
     * Support for sender IDs varies by country or region.
     */
    inline SMSMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline SMSMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
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
