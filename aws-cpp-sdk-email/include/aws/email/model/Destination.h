/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * fields.</p> <p> By default, the string must be 7-bit ASCII. If the text must
   * contain any other characters, then you must use MIME encoded-word syntax (RFC
   * 2047) instead of a literal string. MIME encoded-word syntax uses the following
   * form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see
   * <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
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
    inline void SetToAddresses(const Aws::Vector<Aws::String>& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline void SetToAddresses(Aws::Vector<Aws::String>&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& WithToAddresses(const Aws::Vector<Aws::String>& value) { SetToAddresses(value); return *this;}

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& WithToAddresses(Aws::Vector<Aws::String>&& value) { SetToAddresses(value); return *this;}

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& AddToAddresses(const Aws::String& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }

    /**
     * <p>The To: field(s) of the message.</p>
     */
    inline Destination& AddToAddresses(Aws::String&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }

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
    inline void SetCcAddresses(const Aws::Vector<Aws::String>& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline void SetCcAddresses(Aws::Vector<Aws::String>&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& WithCcAddresses(const Aws::Vector<Aws::String>& value) { SetCcAddresses(value); return *this;}

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& WithCcAddresses(Aws::Vector<Aws::String>&& value) { SetCcAddresses(value); return *this;}

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& AddCcAddresses(const Aws::String& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }

    /**
     * <p>The CC: field(s) of the message.</p>
     */
    inline Destination& AddCcAddresses(Aws::String&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }

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
    inline void SetBccAddresses(const Aws::Vector<Aws::String>& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = value; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline void SetBccAddresses(Aws::Vector<Aws::String>&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = value; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& WithBccAddresses(const Aws::Vector<Aws::String>& value) { SetBccAddresses(value); return *this;}

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& WithBccAddresses(Aws::Vector<Aws::String>&& value) { SetBccAddresses(value); return *this;}

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& AddBccAddresses(const Aws::String& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

    /**
     * <p>The BCC: field(s) of the message.</p>
     */
    inline Destination& AddBccAddresses(Aws::String&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

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
