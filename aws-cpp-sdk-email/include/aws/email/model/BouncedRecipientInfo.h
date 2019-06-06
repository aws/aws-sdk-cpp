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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/BounceType.h>
#include <aws/email/model/RecipientDsnFields.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Recipient-related information to include in the Delivery Status Notification
   * (DSN) when an email that Amazon SES receives on your behalf bounces.</p> <p>For
   * information about receiving email through Amazon SES, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BouncedRecipientInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API BouncedRecipientInfo
  {
  public:
    BouncedRecipientInfo();
    BouncedRecipientInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    BouncedRecipientInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline const Aws::String& GetRecipient() const{ return m_recipient; }

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline void SetRecipient(const Aws::String& value) { m_recipientHasBeenSet = true; m_recipient = value; }

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline void SetRecipient(Aws::String&& value) { m_recipientHasBeenSet = true; m_recipient = std::move(value); }

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline void SetRecipient(const char* value) { m_recipientHasBeenSet = true; m_recipient.assign(value); }

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline BouncedRecipientInfo& WithRecipient(const Aws::String& value) { SetRecipient(value); return *this;}

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline BouncedRecipientInfo& WithRecipient(Aws::String&& value) { SetRecipient(std::move(value)); return *this;}

    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline BouncedRecipientInfo& WithRecipient(const char* value) { SetRecipient(value); return *this;}


    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetRecipientArn() const{ return m_recipientArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool RecipientArnHasBeenSet() const { return m_recipientArnHasBeenSet; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetRecipientArn(const Aws::String& value) { m_recipientArnHasBeenSet = true; m_recipientArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetRecipientArn(Aws::String&& value) { m_recipientArnHasBeenSet = true; m_recipientArn = std::move(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetRecipientArn(const char* value) { m_recipientArnHasBeenSet = true; m_recipientArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline BouncedRecipientInfo& WithRecipientArn(const Aws::String& value) { SetRecipientArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline BouncedRecipientInfo& WithRecipientArn(Aws::String&& value) { SetRecipientArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline BouncedRecipientInfo& WithRecipientArn(const char* value) { SetRecipientArn(value); return *this;}


    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline const BounceType& GetBounceType() const{ return m_bounceType; }

    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline bool BounceTypeHasBeenSet() const { return m_bounceTypeHasBeenSet; }

    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline void SetBounceType(const BounceType& value) { m_bounceTypeHasBeenSet = true; m_bounceType = value; }

    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline void SetBounceType(BounceType&& value) { m_bounceTypeHasBeenSet = true; m_bounceType = std::move(value); }

    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline BouncedRecipientInfo& WithBounceType(const BounceType& value) { SetBounceType(value); return *this;}

    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline BouncedRecipientInfo& WithBounceType(BounceType&& value) { SetBounceType(std::move(value)); return *this;}


    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline const RecipientDsnFields& GetRecipientDsnFields() const{ return m_recipientDsnFields; }

    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline bool RecipientDsnFieldsHasBeenSet() const { return m_recipientDsnFieldsHasBeenSet; }

    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline void SetRecipientDsnFields(const RecipientDsnFields& value) { m_recipientDsnFieldsHasBeenSet = true; m_recipientDsnFields = value; }

    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline void SetRecipientDsnFields(RecipientDsnFields&& value) { m_recipientDsnFieldsHasBeenSet = true; m_recipientDsnFields = std::move(value); }

    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline BouncedRecipientInfo& WithRecipientDsnFields(const RecipientDsnFields& value) { SetRecipientDsnFields(value); return *this;}

    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline BouncedRecipientInfo& WithRecipientDsnFields(RecipientDsnFields&& value) { SetRecipientDsnFields(std::move(value)); return *this;}

  private:

    Aws::String m_recipient;
    bool m_recipientHasBeenSet;

    Aws::String m_recipientArn;
    bool m_recipientArnHasBeenSet;

    BounceType m_bounceType;
    bool m_bounceTypeHasBeenSet;

    RecipientDsnFields m_recipientDsnFields;
    bool m_recipientDsnFieldsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
