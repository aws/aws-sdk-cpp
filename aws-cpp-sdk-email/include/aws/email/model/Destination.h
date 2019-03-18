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
   * fields.</p> <note> <p>Amazon SES does not support the SMTPUTF8 extension, as
   * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
   * reason, the <i>local part</i> of a destination email address (the part of the
   * email address that precedes the @ sign) may only contain <a
   * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
   * characters</a>. If the <i>domain part</i> of an address (the part after the @
   * sign) contains non-ASCII characters, they must be encoded using Punycode, as
   * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p>
   * </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/Destination">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API Destination
  {
  public:
    Destination();
    Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetToAddresses() const{ return m_toAddresses; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline void SetToAddresses(const Aws::Vector<Aws::String>& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline void SetToAddresses(Aws::Vector<Aws::String>&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::move(value); }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& WithToAddresses(const Aws::Vector<Aws::String>& value) { SetToAddresses(value); return *this;}

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& WithToAddresses(Aws::Vector<Aws::String>&& value) { SetToAddresses(std::move(value)); return *this;}

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& AddToAddresses(const Aws::String& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& AddToAddresses(Aws::String&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& AddToAddresses(const char* value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }


    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcAddresses() const{ return m_ccAddresses; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline void SetCcAddresses(const Aws::Vector<Aws::String>& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline void SetCcAddresses(Aws::Vector<Aws::String>&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::move(value); }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& WithCcAddresses(const Aws::Vector<Aws::String>& value) { SetCcAddresses(value); return *this;}

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& WithCcAddresses(Aws::Vector<Aws::String>&& value) { SetCcAddresses(std::move(value)); return *this;}

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& AddCcAddresses(const Aws::String& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& AddCcAddresses(Aws::String&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& AddCcAddresses(const char* value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }


    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBccAddresses() const{ return m_bccAddresses; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline bool BccAddressesHasBeenSet() const { return m_bccAddressesHasBeenSet; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline void SetBccAddresses(const Aws::Vector<Aws::String>& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = value; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline void SetBccAddresses(Aws::Vector<Aws::String>&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = std::move(value); }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& WithBccAddresses(const Aws::Vector<Aws::String>& value) { SetBccAddresses(value); return *this;}

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& WithBccAddresses(Aws::Vector<Aws::String>&& value) { SetBccAddresses(std::move(value)); return *this;}

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& AddBccAddresses(const Aws::String& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& AddBccAddresses(Aws::String&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& AddBccAddresses(const char* value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_toAddresses;
    bool m_toAddressesHasBeenSet;

    Aws::Vector<Aws::String> m_ccAddresses;
    bool m_ccAddressesHasBeenSet;

    Aws::Vector<Aws::String> m_bccAddresses;
    bool m_bccAddressesHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
