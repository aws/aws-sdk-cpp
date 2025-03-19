/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
   * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
   * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
   * reason, the email address string must be 7-bit ASCII. If you want to send to or
   * from email addresses that contain Unicode characters in the domain part of an
   * address, you must encode the domain using Punycode. Punycode is not permitted in
   * the local part of the email address (the part before the @ sign) nor in the
   * "friendly from" name. If you want to use Unicode characters in the "friendly
   * from" name, you must encode the "friendly from" name using MIME encoded-word
   * syntax, as described in <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Sending raw
   * email using the Amazon SES API</a>. For more information about Punycode, see <a
   * href="http://tools.ietf.org/html/rfc3492">RFC 3492</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_SES_API Destination() = default;
    AWS_SES_API Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetToAddresses() const { return m_toAddresses; }
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }
    template<typename ToAddressesT = Aws::Vector<Aws::String>>
    void SetToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::forward<ToAddressesT>(value); }
    template<typename ToAddressesT = Aws::Vector<Aws::String>>
    Destination& WithToAddresses(ToAddressesT&& value) { SetToAddresses(std::forward<ToAddressesT>(value)); return *this;}
    template<typename ToAddressesT = Aws::String>
    Destination& AddToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.emplace_back(std::forward<ToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcAddresses() const { return m_ccAddresses; }
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }
    template<typename CcAddressesT = Aws::Vector<Aws::String>>
    void SetCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::forward<CcAddressesT>(value); }
    template<typename CcAddressesT = Aws::Vector<Aws::String>>
    Destination& WithCcAddresses(CcAddressesT&& value) { SetCcAddresses(std::forward<CcAddressesT>(value)); return *this;}
    template<typename CcAddressesT = Aws::String>
    Destination& AddCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.emplace_back(std::forward<CcAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBccAddresses() const { return m_bccAddresses; }
    inline bool BccAddressesHasBeenSet() const { return m_bccAddressesHasBeenSet; }
    template<typename BccAddressesT = Aws::Vector<Aws::String>>
    void SetBccAddresses(BccAddressesT&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = std::forward<BccAddressesT>(value); }
    template<typename BccAddressesT = Aws::Vector<Aws::String>>
    Destination& WithBccAddresses(BccAddressesT&& value) { SetBccAddresses(std::forward<BccAddressesT>(value)); return *this;}
    template<typename BccAddressesT = Aws::String>
    Destination& AddBccAddresses(BccAddressesT&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.emplace_back(std::forward<BccAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_toAddresses;
    bool m_toAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccAddresses;
    bool m_ccAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_bccAddresses;
    bool m_bccAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
