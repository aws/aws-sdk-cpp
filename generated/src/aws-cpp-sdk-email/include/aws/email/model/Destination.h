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
    AWS_SES_API Destination();
    AWS_SES_API Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetToAddresses() const{ return m_toAddresses; }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline void SetToAddresses(const Aws::Vector<Aws::String>& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline void SetToAddresses(Aws::Vector<Aws::String>&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::move(value); }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline Destination& WithToAddresses(const Aws::Vector<Aws::String>& value) { SetToAddresses(value); return *this;}

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline Destination& WithToAddresses(Aws::Vector<Aws::String>&& value) { SetToAddresses(std::move(value)); return *this;}

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline Destination& AddToAddresses(const Aws::String& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline Destination& AddToAddresses(Aws::String&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The recipients to place on the To: line of the message.</p>
     */
    inline Destination& AddToAddresses(const char* value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }


    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcAddresses() const{ return m_ccAddresses; }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline void SetCcAddresses(const Aws::Vector<Aws::String>& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline void SetCcAddresses(Aws::Vector<Aws::String>&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::move(value); }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline Destination& WithCcAddresses(const Aws::Vector<Aws::String>& value) { SetCcAddresses(value); return *this;}

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline Destination& WithCcAddresses(Aws::Vector<Aws::String>&& value) { SetCcAddresses(std::move(value)); return *this;}

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline Destination& AddCcAddresses(const Aws::String& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline Destination& AddCcAddresses(Aws::String&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The recipients to place on the CC: line of the message.</p>
     */
    inline Destination& AddCcAddresses(const char* value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }


    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBccAddresses() const{ return m_bccAddresses; }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline bool BccAddressesHasBeenSet() const { return m_bccAddressesHasBeenSet; }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline void SetBccAddresses(const Aws::Vector<Aws::String>& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = value; }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline void SetBccAddresses(Aws::Vector<Aws::String>&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = std::move(value); }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline Destination& WithBccAddresses(const Aws::Vector<Aws::String>& value) { SetBccAddresses(value); return *this;}

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline Destination& WithBccAddresses(Aws::Vector<Aws::String>&& value) { SetBccAddresses(std::move(value)); return *this;}

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline Destination& AddBccAddresses(const Aws::String& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline Destination& AddBccAddresses(Aws::String&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The recipients to place on the BCC: line of the message.</p>
     */
    inline Destination& AddBccAddresses(const char* value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

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
