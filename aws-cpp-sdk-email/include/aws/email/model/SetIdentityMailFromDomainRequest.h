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
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/BehaviorOnMXFailure.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable the Amazon SES custom MAIL FROM
   * domain setup for a verified identity. For information about using a custom MAIL
   * FROM domain, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API SetIdentityMailFromDomainRequest : public SESRequest
  {
  public:
    SetIdentityMailFromDomainRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>The verified identity for which you want to enable or disable the specified
     * custom MAIL FROM domain.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline const Aws::String& GetMailFromDomain() const{ return m_mailFromDomain; }

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline void SetMailFromDomain(const Aws::String& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline void SetMailFromDomain(Aws::String&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline void SetMailFromDomain(const char* value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain.assign(value); }

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithMailFromDomain(const Aws::String& value) { SetMailFromDomain(value); return *this;}

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithMailFromDomain(Aws::String&& value) { SetMailFromDomain(value); return *this;}

    /**
     * <p>The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used
     * in a "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon
     * SES Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithMailFromDomain(const char* value) { SetMailFromDomain(value); return *this;}

    /**
     * <p>The action that you want Amazon SES to take if it cannot successfully read
     * the required MX record when you send an email. If you choose
     * <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain
     * of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>,
     * Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not
     * send the email.</p> <p>The action specified in <code>BehaviorOnMXFailure</code>
     * is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline const BehaviorOnMXFailure& GetBehaviorOnMXFailure() const{ return m_behaviorOnMXFailure; }

    /**
     * <p>The action that you want Amazon SES to take if it cannot successfully read
     * the required MX record when you send an email. If you choose
     * <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain
     * of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>,
     * Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not
     * send the email.</p> <p>The action specified in <code>BehaviorOnMXFailure</code>
     * is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMXFailure(const BehaviorOnMXFailure& value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = value; }

    /**
     * <p>The action that you want Amazon SES to take if it cannot successfully read
     * the required MX record when you send an email. If you choose
     * <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain
     * of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>,
     * Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not
     * send the email.</p> <p>The action specified in <code>BehaviorOnMXFailure</code>
     * is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMXFailure(BehaviorOnMXFailure&& value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = value; }

    /**
     * <p>The action that you want Amazon SES to take if it cannot successfully read
     * the required MX record when you send an email. If you choose
     * <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain
     * of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>,
     * Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not
     * send the email.</p> <p>The action specified in <code>BehaviorOnMXFailure</code>
     * is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithBehaviorOnMXFailure(const BehaviorOnMXFailure& value) { SetBehaviorOnMXFailure(value); return *this;}

    /**
     * <p>The action that you want Amazon SES to take if it cannot successfully read
     * the required MX record when you send an email. If you choose
     * <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain
     * of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>,
     * Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not
     * send the email.</p> <p>The action specified in <code>BehaviorOnMXFailure</code>
     * is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline SetIdentityMailFromDomainRequest& WithBehaviorOnMXFailure(BehaviorOnMXFailure&& value) { SetBehaviorOnMXFailure(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet;
    BehaviorOnMXFailure m_behaviorOnMXFailure;
    bool m_behaviorOnMXFailureHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
