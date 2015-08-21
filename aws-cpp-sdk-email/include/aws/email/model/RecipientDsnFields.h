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
#include <aws/email/model/DsnAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ExtensionField.h>

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
    Recipient level DSN fields for SendBounceRequest.
  */
  class AWS_SES_API RecipientDsnFields
  {
  public:
    RecipientDsnFields();
    RecipientDsnFields(const Aws::Utils::Xml::XmlNode& xmlNode);
    RecipientDsnFields& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     The transformed address that the message was ultimately delivered to (Final-Recipient in the DSN). If not specified, it will be set to the Recipient in the BouncedRecipientInfo. This or the recipient in the BouncedRecipientInfo needs to be a recipient of the original message being bounced. If specified, this needs to be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline const Aws::String& GetFinalRecipient() const{ return m_finalRecipient; }
    /*
     The transformed address that the message was ultimately delivered to (Final-Recipient in the DSN). If not specified, it will be set to the Recipient in the BouncedRecipientInfo. This or the recipient in the BouncedRecipientInfo needs to be a recipient of the original message being bounced. If specified, this needs to be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline void SetFinalRecipient(const Aws::String& value) { m_finalRecipientHasBeenSet = true; m_finalRecipient = value; }

    /*
     The transformed address that the message was ultimately delivered to (Final-Recipient in the DSN). If not specified, it will be set to the Recipient in the BouncedRecipientInfo. This or the recipient in the BouncedRecipientInfo needs to be a recipient of the original message being bounced. If specified, this needs to be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline void SetFinalRecipient(const char* value) { m_finalRecipientHasBeenSet = true; m_finalRecipient.assign(value); }

    /*
     The transformed address that the message was ultimately delivered to (Final-Recipient in the DSN). If not specified, it will be set to the Recipient in the BouncedRecipientInfo. This or the recipient in the BouncedRecipientInfo needs to be a recipient of the original message being bounced. If specified, this needs to be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline RecipientDsnFields&  WithFinalRecipient(const Aws::String& value) { SetFinalRecipient(value); return *this;}

    /*
     The transformed address that the message was ultimately delivered to (Final-Recipient in the DSN). If not specified, it will be set to the Recipient in the BouncedRecipientInfo. This or the recipient in the BouncedRecipientInfo needs to be a recipient of the original message being bounced. If specified, this needs to be just an email address (i.e. do not prepend with "rfc 822;").
    */
    inline RecipientDsnFields& WithFinalRecipient(const char* value) { SetFinalRecipient(value); return *this;}

    /*
     The action taken that failed while trying to deliver the message. This is required by RFC 3464.
    */
    inline const DsnAction& GetAction() const{ return m_action; }
    /*
     The action taken that failed while trying to deliver the message. This is required by RFC 3464.
    */
    inline void SetAction(const DsnAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /*
     The action taken that failed while trying to deliver the message. This is required by RFC 3464.
    */
    inline RecipientDsnFields&  WithAction(const DsnAction& value) { SetAction(value); return *this;}

    /*
     The MTA that the Remote MTA was attempting to deliver the message to. Should be RFC 3464 formatted to be "mta-name-type; mta-name" (e.g. "dns; foo.amazonses.com"). This really only applies to propagating synchronous bounces (which is where a remote MTA is involved).
    */
    inline const Aws::String& GetRemoteMta() const{ return m_remoteMta; }
    /*
     The MTA that the Remote MTA was attempting to deliver the message to. Should be RFC 3464 formatted to be "mta-name-type; mta-name" (e.g. "dns; foo.amazonses.com"). This really only applies to propagating synchronous bounces (which is where a remote MTA is involved).
    */
    inline void SetRemoteMta(const Aws::String& value) { m_remoteMtaHasBeenSet = true; m_remoteMta = value; }

    /*
     The MTA that the Remote MTA was attempting to deliver the message to. Should be RFC 3464 formatted to be "mta-name-type; mta-name" (e.g. "dns; foo.amazonses.com"). This really only applies to propagating synchronous bounces (which is where a remote MTA is involved).
    */
    inline void SetRemoteMta(const char* value) { m_remoteMtaHasBeenSet = true; m_remoteMta.assign(value); }

    /*
     The MTA that the Remote MTA was attempting to deliver the message to. Should be RFC 3464 formatted to be "mta-name-type; mta-name" (e.g. "dns; foo.amazonses.com"). This really only applies to propagating synchronous bounces (which is where a remote MTA is involved).
    */
    inline RecipientDsnFields&  WithRemoteMta(const Aws::String& value) { SetRemoteMta(value); return *this;}

    /*
     The MTA that the Remote MTA was attempting to deliver the message to. Should be RFC 3464 formatted to be "mta-name-type; mta-name" (e.g. "dns; foo.amazonses.com"). This really only applies to propagating synchronous bounces (which is where a remote MTA is involved).
    */
    inline RecipientDsnFields& WithRemoteMta(const char* value) { SetRemoteMta(value); return *this;}

    /*
     The status code that indicates what went wrong. This is required by RFC 3464.
    */
    inline const Aws::String& GetStatus() const{ return m_status; }
    /*
     The status code that indicates what went wrong. This is required by RFC 3464.
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     The status code that indicates what went wrong. This is required by RFC 3464.
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     The status code that indicates what went wrong. This is required by RFC 3464.
    */
    inline RecipientDsnFields&  WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     The status code that indicates what went wrong. This is required by RFC 3464.
    */
    inline RecipientDsnFields& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     Extended explanation of what went wrong, usually an SMTP response. See RFC 3463 for the correct formatting of this parameter.
    */
    inline const Aws::String& GetDiagnosticCode() const{ return m_diagnosticCode; }
    /*
     Extended explanation of what went wrong, usually an SMTP response. See RFC 3463 for the correct formatting of this parameter.
    */
    inline void SetDiagnosticCode(const Aws::String& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = value; }

    /*
     Extended explanation of what went wrong, usually an SMTP response. See RFC 3463 for the correct formatting of this parameter.
    */
    inline void SetDiagnosticCode(const char* value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode.assign(value); }

    /*
     Extended explanation of what went wrong, usually an SMTP response. See RFC 3463 for the correct formatting of this parameter.
    */
    inline RecipientDsnFields&  WithDiagnosticCode(const Aws::String& value) { SetDiagnosticCode(value); return *this;}

    /*
     Extended explanation of what went wrong, usually an SMTP response. See RFC 3463 for the correct formatting of this parameter.
    */
    inline RecipientDsnFields& WithDiagnosticCode(const char* value) { SetDiagnosticCode(value); return *this;}

    /*
     Time the final delivery attempt was made. It should be in RFC 822 date-time format if specified.
    */
    inline double GetLastAttemptDate() const{ return m_lastAttemptDate; }
    /*
     Time the final delivery attempt was made. It should be in RFC 822 date-time format if specified.
    */
    inline void SetLastAttemptDate(double value) { m_lastAttemptDateHasBeenSet = true; m_lastAttemptDate = value; }

    /*
     Time the final delivery attempt was made. It should be in RFC 822 date-time format if specified.
    */
    inline RecipientDsnFields&  WithLastAttemptDate(double value) { SetLastAttemptDate(value); return *this;}

    /*
     Additional x-headers to include in the DSN.
    */
    inline const Aws::Vector<ExtensionField>& GetExtensionFields() const{ return m_extensionFields; }
    /*
     Additional x-headers to include in the DSN.
    */
    inline void SetExtensionFields(const Aws::Vector<ExtensionField>& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields = value; }

    /*
     Additional x-headers to include in the DSN.
    */
    inline RecipientDsnFields&  WithExtensionFields(const Aws::Vector<ExtensionField>& value) { SetExtensionFields(value); return *this;}

    /*
     Additional x-headers to include in the DSN.
    */
    inline RecipientDsnFields& AddExtensionFields(const ExtensionField& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.push_back(value); return *this; }

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
    double m_lastAttemptDate;
    bool m_lastAttemptDateHasBeenSet;
    Aws::Vector<ExtensionField> m_extensionFields;
    bool m_extensionFieldsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
