/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptRule">AWS
   * API Reference</a></p>
   */
  class ReceiptRule
  {
  public:
    AWS_SES_API ReceiptRule() = default;
    AWS_SES_API ReceiptRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the receipt rule. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), dashes (-), or periods (.). </p> </li> <li> <p>Start and
     * end with a letter or number.</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReceiptRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the receipt rule is active. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ReceiptRule& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon SES should require that incoming email is delivered
     * over a connection encrypted with Transport Layer Security (TLS). If this
     * parameter is set to <code>Require</code>, Amazon SES bounces emails that are not
     * received over TLS. The default is <code>Optional</code>.</p>
     */
    inline TlsPolicy GetTlsPolicy() const { return m_tlsPolicy; }
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }
    inline void SetTlsPolicy(TlsPolicy value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }
    inline ReceiptRule& WithTlsPolicy(TlsPolicy value) { SetTlsPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipient domains and email addresses that the receipt rule applies to.
     * If this field is not specified, this rule matches all recipients on all verified
     * domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipients() const { return m_recipients; }
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }
    template<typename RecipientsT = Aws::Vector<Aws::String>>
    void SetRecipients(RecipientsT&& value) { m_recipientsHasBeenSet = true; m_recipients = std::forward<RecipientsT>(value); }
    template<typename RecipientsT = Aws::Vector<Aws::String>>
    ReceiptRule& WithRecipients(RecipientsT&& value) { SetRecipients(std::forward<RecipientsT>(value)); return *this;}
    template<typename RecipientsT = Aws::String>
    ReceiptRule& AddRecipients(RecipientsT&& value) { m_recipientsHasBeenSet = true; m_recipients.emplace_back(std::forward<RecipientsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ordered list of actions to perform on messages that match at least one of
     * the recipient email addresses or domains specified in the receipt rule.</p>
     */
    inline const Aws::Vector<ReceiptAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<ReceiptAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ReceiptAction>>
    ReceiptRule& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = ReceiptAction>
    ReceiptRule& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, then messages that this receipt rule applies to are
     * scanned for spam and viruses. The default value is <code>false</code>.</p>
     */
    inline bool GetScanEnabled() const { return m_scanEnabled; }
    inline bool ScanEnabledHasBeenSet() const { return m_scanEnabledHasBeenSet; }
    inline void SetScanEnabled(bool value) { m_scanEnabledHasBeenSet = true; m_scanEnabled = value; }
    inline ReceiptRule& WithScanEnabled(bool value) { SetScanEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    TlsPolicy m_tlsPolicy{TlsPolicy::NOT_SET};
    bool m_tlsPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_recipients;
    bool m_recipientsHasBeenSet = false;

    Aws::Vector<ReceiptAction> m_actions;
    bool m_actionsHasBeenSet = false;

    bool m_scanEnabled{false};
    bool m_scanEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
