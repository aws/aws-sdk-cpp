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
#include <aws/email/model/TlsPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ReceiptAction.h>
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
   * <p>Receipt rules enable you to specify which actions Amazon SES should take when
   * it receives mail on behalf of one or more email addresses or domains that you
   * own.</p> <p>Each receipt rule defines a set of email addresses or domains that
   * it applies to. If the email addresses or domains match at least one recipient
   * address of the message, Amazon SES executes all of the receipt rule's actions on
   * the message.</p> <p>For information about setting up receipt rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptRule">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ReceiptRule
  {
  public:
    ReceiptRule();
    ReceiptRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule. The name must:</p> <ul> <li> <p>This value can
     * only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li> <li>
     * <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If <code>true</code>, the receipt rule is active. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If <code>true</code>, the receipt rule is active. The default value is
     * <code>false</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, the receipt rule is active. The default value is
     * <code>false</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If <code>true</code>, the receipt rule is active. The default value is
     * <code>false</code>.</p>
     */
    inline ReceiptRule& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline ReceiptRule& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES will bounce emails that are
     * not received over TLS. The default is <code>Optional</code>.</p>
     */
    inline ReceiptRule& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}


    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipients() const{ return m_recipients; }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline void SetRecipients(const Aws::Vector<Aws::String>& value) { m_recipientsHasBeenSet = true; m_recipients = value; }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline void SetRecipients(Aws::Vector<Aws::String>&& value) { m_recipientsHasBeenSet = true; m_recipients = std::move(value); }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline ReceiptRule& WithRecipients(const Aws::Vector<Aws::String>& value) { SetRecipients(value); return *this;}

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline ReceiptRule& WithRecipients(Aws::Vector<Aws::String>&& value) { SetRecipients(std::move(value)); return *this;}

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline ReceiptRule& AddRecipients(const Aws::String& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline ReceiptRule& AddRecipients(Aws::String&& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(std::move(value)); return *this; }

    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule will match all recipients under all
     * verified domains.</p>
     */
    inline ReceiptRule& AddRecipients(const char* value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }


    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline const Aws::Vector<ReceiptAction>& GetActions() const{ return m_actions; }

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline void SetActions(const Aws::Vector<ReceiptAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline void SetActions(Aws::Vector<ReceiptAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline ReceiptRule& WithActions(const Aws::Vector<ReceiptAction>& value) { SetActions(value); return *this;}

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline ReceiptRule& WithActions(Aws::Vector<ReceiptAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline ReceiptRule& AddActions(const ReceiptAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline ReceiptRule& AddActions(ReceiptAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>true</code>, then messages that this receipt rule applies to are
     * scanned for spam and viruses. The default value is <code>false</code>.</p>
     */
    inline bool GetScanEnabled() const{ return m_scanEnabled; }

    /**
     * <p>If <code>true</code>, then messages that this receipt rule applies to are
     * scanned for spam and viruses. The default value is <code>false</code>.</p>
     */
    inline bool ScanEnabledHasBeenSet() const { return m_scanEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, then messages that this receipt rule applies to are
     * scanned for spam and viruses. The default value is <code>false</code>.</p>
     */
    inline void SetScanEnabled(bool value) { m_scanEnabledHasBeenSet = true; m_scanEnabled = value; }

    /**
     * <p>If <code>true</code>, then messages that this receipt rule applies to are
     * scanned for spam and viruses. The default value is <code>false</code>.</p>
     */
    inline ReceiptRule& WithScanEnabled(bool value) { SetScanEnabled(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet;

    Aws::Vector<Aws::String> m_recipients;
    bool m_recipientsHasBeenSet;

    Aws::Vector<ReceiptAction> m_actions;
    bool m_actionsHasBeenSet;

    bool m_scanEnabled;
    bool m_scanEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
