/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/BehaviorOnMXFailure.h>
#include <utility>

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
   * href="https://docs.aws.amazon.com/ses/latest/dg/mail-from.html">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomainRequest">AWS
   * API Reference</a></p>
   */
  class SetIdentityMailFromDomainRequest : public SESRequest
  {
  public:
    AWS_SES_API SetIdentityMailFromDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityMailFromDomain"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The verified identity.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    SetIdentityMailFromDomainRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom MAIL FROM domain for the verified identity to use. The MAIL FROM
     * domain must 1) be a subdomain of the verified identity, 2) not be used in a
     * "From" address if the MAIL FROM domain is the destination of email feedback
     * forwarding (for more information, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/mail-from.html">Amazon SES
     * Developer Guide</a>), and 3) not be used to receive emails. A value of
     * <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
     */
    inline const Aws::String& GetMailFromDomain() const { return m_mailFromDomain; }
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }
    template<typename MailFromDomainT = Aws::String>
    void SetMailFromDomain(MailFromDomainT&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::forward<MailFromDomainT>(value); }
    template<typename MailFromDomainT = Aws::String>
    SetIdentityMailFromDomainRequest& WithMailFromDomain(MailFromDomainT&& value) { SetMailFromDomain(std::forward<MailFromDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for Amazon SES to take if it cannot successfully read the required
     * MX record when you send an email. If you choose <code>UseDefaultValue</code>,
     * Amazon SES uses amazonses.com (or a subdomain of that) as the MAIL FROM domain.
     * If you choose <code>RejectMessage</code>, Amazon SES returns a
     * <code>MailFromDomainNotVerified</code> error and not send the email.</p> <p>The
     * action specified in <code>BehaviorOnMXFailure</code> is taken when the custom
     * MAIL FROM domain setup is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline BehaviorOnMXFailure GetBehaviorOnMXFailure() const { return m_behaviorOnMXFailure; }
    inline bool BehaviorOnMXFailureHasBeenSet() const { return m_behaviorOnMXFailureHasBeenSet; }
    inline void SetBehaviorOnMXFailure(BehaviorOnMXFailure value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = value; }
    inline SetIdentityMailFromDomainRequest& WithBehaviorOnMXFailure(BehaviorOnMXFailure value) { SetBehaviorOnMXFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet = false;

    BehaviorOnMXFailure m_behaviorOnMXFailure{BehaviorOnMXFailure::NOT_SET};
    bool m_behaviorOnMXFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
