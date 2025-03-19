/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email.html">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BouncedRecipientInfo">AWS
   * API Reference</a></p>
   */
  class BouncedRecipientInfo
  {
  public:
    AWS_SES_API BouncedRecipientInfo() = default;
    AWS_SES_API BouncedRecipientInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API BouncedRecipientInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The email address of the recipient of the bounced email.</p>
     */
    inline const Aws::String& GetRecipient() const { return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    template<typename RecipientT = Aws::String>
    void SetRecipient(RecipientT&& value) { m_recipientHasBeenSet = true; m_recipient = std::forward<RecipientT>(value); }
    template<typename RecipientT = Aws::String>
    BouncedRecipientInfo& WithRecipient(RecipientT&& value) { SetRecipient(std::forward<RecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to receive email for the recipient of the bounced email. For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetRecipientArn() const { return m_recipientArn; }
    inline bool RecipientArnHasBeenSet() const { return m_recipientArnHasBeenSet; }
    template<typename RecipientArnT = Aws::String>
    void SetRecipientArn(RecipientArnT&& value) { m_recipientArnHasBeenSet = true; m_recipientArn = std::forward<RecipientArnT>(value); }
    template<typename RecipientArnT = Aws::String>
    BouncedRecipientInfo& WithRecipientArn(RecipientArnT&& value) { SetRecipientArn(std::forward<RecipientArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the bounce. You must provide either this parameter or
     * <code>RecipientDsnFields</code>.</p>
     */
    inline BounceType GetBounceType() const { return m_bounceType; }
    inline bool BounceTypeHasBeenSet() const { return m_bounceTypeHasBeenSet; }
    inline void SetBounceType(BounceType value) { m_bounceTypeHasBeenSet = true; m_bounceType = value; }
    inline BouncedRecipientInfo& WithBounceType(BounceType value) { SetBounceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recipient-related DSN fields, most of which would normally be filled in
     * automatically when provided with a <code>BounceType</code>. You must provide
     * either this parameter or <code>BounceType</code>.</p>
     */
    inline const RecipientDsnFields& GetRecipientDsnFields() const { return m_recipientDsnFields; }
    inline bool RecipientDsnFieldsHasBeenSet() const { return m_recipientDsnFieldsHasBeenSet; }
    template<typename RecipientDsnFieldsT = RecipientDsnFields>
    void SetRecipientDsnFields(RecipientDsnFieldsT&& value) { m_recipientDsnFieldsHasBeenSet = true; m_recipientDsnFields = std::forward<RecipientDsnFieldsT>(value); }
    template<typename RecipientDsnFieldsT = RecipientDsnFields>
    BouncedRecipientInfo& WithRecipientDsnFields(RecipientDsnFieldsT&& value) { SetRecipientDsnFields(std::forward<RecipientDsnFieldsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recipient;
    bool m_recipientHasBeenSet = false;

    Aws::String m_recipientArn;
    bool m_recipientArnHasBeenSet = false;

    BounceType m_bounceType{BounceType::NOT_SET};
    bool m_bounceTypeHasBeenSet = false;

    RecipientDsnFields m_recipientDsnFields;
    bool m_recipientDsnFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
