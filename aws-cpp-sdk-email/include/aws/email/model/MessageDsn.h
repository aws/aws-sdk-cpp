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
   * <p>Message-related information to include in the Delivery Status Notification
   * (DSN) when an email that Amazon SES receives on your behalf bounces.</p> <p>For
   * information about receiving email through Amazon SES, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/MessageDsn">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API MessageDsn
  {
  public:
    MessageDsn();
    MessageDsn(const Aws::Utils::Xml::XmlNode& xmlNode);
    MessageDsn& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetReportingMta() const{ return m_reportingMta; }

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline bool ReportingMtaHasBeenSet() const { return m_reportingMtaHasBeenSet; }

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline void SetReportingMta(const Aws::String& value) { m_reportingMtaHasBeenSet = true; m_reportingMta = value; }

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline void SetReportingMta(Aws::String&& value) { m_reportingMtaHasBeenSet = true; m_reportingMta = std::move(value); }

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline void SetReportingMta(const char* value) { m_reportingMtaHasBeenSet = true; m_reportingMta.assign(value); }

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline MessageDsn& WithReportingMta(const Aws::String& value) { SetReportingMta(value); return *this;}

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline MessageDsn& WithReportingMta(Aws::String&& value) { SetReportingMta(std::move(value)); return *this;}

    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline MessageDsn& WithReportingMta(const char* value) { SetReportingMta(value); return *this;}


    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline const Aws::Utils::DateTime& GetArrivalDate() const{ return m_arrivalDate; }

    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline bool ArrivalDateHasBeenSet() const { return m_arrivalDateHasBeenSet; }

    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline void SetArrivalDate(const Aws::Utils::DateTime& value) { m_arrivalDateHasBeenSet = true; m_arrivalDate = value; }

    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline void SetArrivalDate(Aws::Utils::DateTime&& value) { m_arrivalDateHasBeenSet = true; m_arrivalDate = std::move(value); }

    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline MessageDsn& WithArrivalDate(const Aws::Utils::DateTime& value) { SetArrivalDate(value); return *this;}

    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline MessageDsn& WithArrivalDate(Aws::Utils::DateTime&& value) { SetArrivalDate(std::move(value)); return *this;}


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
    inline MessageDsn& WithExtensionFields(const Aws::Vector<ExtensionField>& value) { SetExtensionFields(value); return *this;}

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline MessageDsn& WithExtensionFields(Aws::Vector<ExtensionField>&& value) { SetExtensionFields(std::move(value)); return *this;}

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline MessageDsn& AddExtensionFields(const ExtensionField& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.push_back(value); return *this; }

    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline MessageDsn& AddExtensionFields(ExtensionField&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reportingMta;
    bool m_reportingMtaHasBeenSet;

    Aws::Utils::DateTime m_arrivalDate;
    bool m_arrivalDateHasBeenSet;

    Aws::Vector<ExtensionField> m_extensionFields;
    bool m_extensionFieldsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
