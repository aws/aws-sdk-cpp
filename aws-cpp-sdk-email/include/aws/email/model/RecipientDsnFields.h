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
#include <aws/email/model/DsnAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ExtensionField.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/RecipientDsnFields">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API RecipientDsnFields
  {
  public:
    RecipientDsnFields();
    RecipientDsnFields(const Aws::Utils::Xml::XmlNode& xmlNode);
    RecipientDsnFields& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline const Aws::String& GetFinalRecipient() const{ return m_finalRecipient; }

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline bool FinalRecipientHasBeenSet() const { return m_finalRecipientHasBeenSet; }

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline void SetFinalRecipient(const Aws::String& value) { m_finalRecipientHasBeenSet = true; m_finalRecipient = value; }

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline void SetFinalRecipient(Aws::String&& value) { m_finalRecipientHasBeenSet = true; m_finalRecipient = std::move(value); }

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline void SetFinalRecipient(const char* value) { m_finalRecipientHasBeenSet = true; m_finalRecipient.assign(value); }

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline RecipientDsnFields& WithFinalRecipient(const Aws::String& value) { SetFinalRecipient(value); return *this;}

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline RecipientDsnFields& WithFinalRecipient(Aws::String&& value) { SetFinalRecipient(std::move(value)); return *this;}

    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified
     * in the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p> <note> <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> </note>
     */
    inline RecipientDsnFields& WithFinalRecipient(const char* value) { SetFinalRecipient(value); return *this;}


    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline const DsnAction& GetAction() const{ return m_action; }

    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline void SetAction(const DsnAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline void SetAction(DsnAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline RecipientDsnFields& WithAction(const DsnAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline RecipientDsnFields& WithAction(DsnAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline const Aws::String& GetRemoteMta() const{ return m_remoteMta; }

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline bool RemoteMtaHasBeenSet() const { return m_remoteMtaHasBeenSet; }

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline void SetRemoteMta(const Aws::String& value) { m_remoteMtaHasBeenSet = true; m_remoteMta = value; }

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline void SetRemoteMta(Aws::String&& value) { m_remoteMtaHasBeenSet = true; m_remoteMta = std::move(value); }

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline void SetRemoteMta(const char* value) { m_remoteMtaHasBeenSet = true; m_remoteMta.assign(value); }

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline RecipientDsnFields& WithRemoteMta(const Aws::String& value) { SetRemoteMta(value); return *this;}

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline RecipientDsnFields& WithRemoteMta(Aws::String&& value) { SetRemoteMta(std::move(value)); return *this;}

    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline RecipientDsnFields& WithRemoteMta(const char* value) { SetRemoteMta(value); return *this;}


    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline RecipientDsnFields& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline RecipientDsnFields& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline RecipientDsnFields& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline const Aws::String& GetDiagnosticCode() const{ return m_diagnosticCode; }

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline bool DiagnosticCodeHasBeenSet() const { return m_diagnosticCodeHasBeenSet; }

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline void SetDiagnosticCode(const Aws::String& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = value; }

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline void SetDiagnosticCode(Aws::String&& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = std::move(value); }

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline void SetDiagnosticCode(const char* value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode.assign(value); }

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline RecipientDsnFields& WithDiagnosticCode(const Aws::String& value) { SetDiagnosticCode(value); return *this;}

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline RecipientDsnFields& WithDiagnosticCode(Aws::String&& value) { SetDiagnosticCode(std::move(value)); return *this;}

    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline RecipientDsnFields& WithDiagnosticCode(const char* value) { SetDiagnosticCode(value); return *this;}


    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptDate() const{ return m_lastAttemptDate; }

    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline bool LastAttemptDateHasBeenSet() const { return m_lastAttemptDateHasBeenSet; }

    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline void SetLastAttemptDate(const Aws::Utils::DateTime& value) { m_lastAttemptDateHasBeenSet = true; m_lastAttemptDate = value; }

    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline void SetLastAttemptDate(Aws::Utils::DateTime&& value) { m_lastAttemptDateHasBeenSet = true; m_lastAttemptDate = std::move(value); }

    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline RecipientDsnFields& WithLastAttemptDate(const Aws::Utils::DateTime& value) { SetLastAttemptDate(value); return *this;}

    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline RecipientDsnFields& WithLastAttemptDate(Aws::Utils::DateTime&& value) { SetLastAttemptDate(std::move(value)); return *this;}


    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline const Aws::Vector<ExtensionField>& GetExtensionFields() const{ return m_extensionFields; }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline bool ExtensionFieldsHasBeenSet() const { return m_extensionFieldsHasBeenSet; }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline void SetExtensionFields(const Aws::Vector<ExtensionField>& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields = value; }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline void SetExtensionFields(Aws::Vector<ExtensionField>&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields = std::move(value); }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline RecipientDsnFields& WithExtensionFields(const Aws::Vector<ExtensionField>& value) { SetExtensionFields(value); return *this;}

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline RecipientDsnFields& WithExtensionFields(Aws::Vector<ExtensionField>&& value) { SetExtensionFields(std::move(value)); return *this;}

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline RecipientDsnFields& AddExtensionFields(const ExtensionField& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.push_back(value); return *this; }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline RecipientDsnFields& AddExtensionFields(ExtensionField&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_finalRecipient;
    bool m_finalRecipientHasBeenSet;

    DsnAction m_action;
    bool m_actionHasBeenSet;

    Aws::String m_remoteMta;
    bool m_remoteMtaHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_diagnosticCode;
    bool m_diagnosticCodeHasBeenSet;

    Aws::Utils::DateTime m_lastAttemptDate;
    bool m_lastAttemptDateHasBeenSet;

    Aws::Vector<ExtensionField> m_extensionFields;
    bool m_extensionFieldsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
