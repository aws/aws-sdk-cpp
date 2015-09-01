/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    $shape.documentation
  */
  class AWS_SES_API BouncedRecipientInfo
  {
  public:
    BouncedRecipientInfo();
    BouncedRecipientInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    BouncedRecipientInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline const Aws::String& GetRecipient() const{ return m_recipient; }

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline void SetRecipient(const Aws::String& value) { m_recipientHasBeenSet = true; m_recipient = value; }

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline void SetRecipient(Aws::String&& value) { m_recipientHasBeenSet = true; m_recipient = value; }

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline void SetRecipient(const char* value) { m_recipientHasBeenSet = true; m_recipient.assign(value); }

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline BouncedRecipientInfo& WithRecipient(const Aws::String& value) { SetRecipient(value); return *this;}

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline BouncedRecipientInfo& WithRecipient(Aws::String&& value) { SetRecipient(value); return *this;}

    /*
     The address of a recipient that bounced from the original message. Will be used as the Original-Recipient (and also the Final-Recipient if a BounceType is given or if FinalRecipient not specified in the RecipientDsnFields). If the FinalRecipient is not specified, this must be a recipient of the original inbound message. Should be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline BouncedRecipientInfo& WithRecipient(const char* value) { SetRecipient(value); return *this;}

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline const Aws::String& GetRecipientArn() const{ return m_recipientArn; }

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline void SetRecipientArn(const Aws::String& value) { m_recipientArnHasBeenSet = true; m_recipientArn = value; }

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline void SetRecipientArn(Aws::String&& value) { m_recipientArnHasBeenSet = true; m_recipientArn = value; }

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline void SetRecipientArn(const char* value) { m_recipientArnHasBeenSet = true; m_recipientArn.assign(value); }

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline BouncedRecipientInfo& WithRecipientArn(const Aws::String& value) { SetRecipientArn(value); return *this;}

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline BouncedRecipientInfo& WithRecipientArn(Aws::String&& value) { SetRecipientArn(value); return *this;}

    /*
     The ARN of the identity for the address of the recipient that bounced from the original message (i.e. the Recipient member of this structure). This is only necessary if the caller doesn't own the identity being bounced and is using sending authorization policies to bounce messages sent to another account.
    */
    inline BouncedRecipientInfo& WithRecipientArn(const char* value) { SetRecipientArn(value); return *this;}

    /*
     The reason for the bounce, which is used to auto populate the recipient-level DSN fields. This or RecipientDsnFields is required.
    */
    inline const BounceType& GetBounceType() const{ return m_bounceType; }

    /*
     The reason for the bounce, which is used to auto populate the recipient-level DSN fields. This or RecipientDsnFields is required.
    */
    inline void SetBounceType(const BounceType& value) { m_bounceTypeHasBeenSet = true; m_bounceType = value; }

    /*
     The reason for the bounce, which is used to auto populate the recipient-level DSN fields. This or RecipientDsnFields is required.
    */
    inline void SetBounceType(BounceType&& value) { m_bounceTypeHasBeenSet = true; m_bounceType = value; }

    /*
     The reason for the bounce, which is used to auto populate the recipient-level DSN fields. This or RecipientDsnFields is required.
    */
    inline BouncedRecipientInfo& WithBounceType(const BounceType& value) { SetBounceType(value); return *this;}

    /*
     The reason for the bounce, which is used to auto populate the recipient-level DSN fields. This or RecipientDsnFields is required.
    */
    inline BouncedRecipientInfo& WithBounceType(BounceType&& value) { SetBounceType(value); return *this;}

    /*
     Recipient-level DSN fields, most of which would normally be filled in automatically given a BounceType. This or BounceType is required.
    */
    inline const RecipientDsnFields& GetRecipientDsnFields() const{ return m_recipientDsnFields; }

    /*
     Recipient-level DSN fields, most of which would normally be filled in automatically given a BounceType. This or BounceType is required.
    */
    inline void SetRecipientDsnFields(const RecipientDsnFields& value) { m_recipientDsnFieldsHasBeenSet = true; m_recipientDsnFields = value; }

    /*
     Recipient-level DSN fields, most of which would normally be filled in automatically given a BounceType. This or BounceType is required.
    */
    inline void SetRecipientDsnFields(RecipientDsnFields&& value) { m_recipientDsnFieldsHasBeenSet = true; m_recipientDsnFields = value; }

    /*
     Recipient-level DSN fields, most of which would normally be filled in automatically given a BounceType. This or BounceType is required.
    */
    inline BouncedRecipientInfo& WithRecipientDsnFields(const RecipientDsnFields& value) { SetRecipientDsnFields(value); return *this;}

    /*
     Recipient-level DSN fields, most of which would normally be filled in automatically given a BounceType. This or BounceType is required.
    */
    inline BouncedRecipientInfo& WithRecipientDsnFields(RecipientDsnFields&& value) { SetRecipientDsnFields(value); return *this;}

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
