/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email.html">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/MessageDsn">AWS
   * API Reference</a></p>
   */
  class MessageDsn
  {
  public:
    AWS_SES_API MessageDsn() = default;
    AWS_SES_API MessageDsn(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API MessageDsn& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The reporting MTA that attempted to deliver the message, formatted as
     * specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). The default value is <code>dns;
     * inbound-smtp.[region].amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetReportingMta() const { return m_reportingMta; }
    inline bool ReportingMtaHasBeenSet() const { return m_reportingMtaHasBeenSet; }
    template<typename ReportingMtaT = Aws::String>
    void SetReportingMta(ReportingMtaT&& value) { m_reportingMtaHasBeenSet = true; m_reportingMta = std::forward<ReportingMtaT>(value); }
    template<typename ReportingMtaT = Aws::String>
    MessageDsn& WithReportingMta(ReportingMtaT&& value) { SetReportingMta(std::forward<ReportingMtaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the message was received by the reporting mail transfer agent (MTA), in
     * <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline const Aws::Utils::DateTime& GetArrivalDate() const { return m_arrivalDate; }
    inline bool ArrivalDateHasBeenSet() const { return m_arrivalDateHasBeenSet; }
    template<typename ArrivalDateT = Aws::Utils::DateTime>
    void SetArrivalDate(ArrivalDateT&& value) { m_arrivalDateHasBeenSet = true; m_arrivalDate = std::forward<ArrivalDateT>(value); }
    template<typename ArrivalDateT = Aws::Utils::DateTime>
    MessageDsn& WithArrivalDate(ArrivalDateT&& value) { SetArrivalDate(std::forward<ArrivalDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline const Aws::Vector<ExtensionField>& GetExtensionFields() const { return m_extensionFields; }
    inline bool ExtensionFieldsHasBeenSet() const { return m_extensionFieldsHasBeenSet; }
    template<typename ExtensionFieldsT = Aws::Vector<ExtensionField>>
    void SetExtensionFields(ExtensionFieldsT&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields = std::forward<ExtensionFieldsT>(value); }
    template<typename ExtensionFieldsT = Aws::Vector<ExtensionField>>
    MessageDsn& WithExtensionFields(ExtensionFieldsT&& value) { SetExtensionFields(std::forward<ExtensionFieldsT>(value)); return *this;}
    template<typename ExtensionFieldsT = ExtensionField>
    MessageDsn& AddExtensionFields(ExtensionFieldsT&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.emplace_back(std::forward<ExtensionFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reportingMta;
    bool m_reportingMtaHasBeenSet = false;

    Aws::Utils::DateTime m_arrivalDate{};
    bool m_arrivalDateHasBeenSet = false;

    Aws::Vector<ExtensionField> m_extensionFields;
    bool m_extensionFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
