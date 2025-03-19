/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/CustomMailFromStatus.h>
#include <aws/email/model/BehaviorOnMXFailure.h>
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
   * <p>Represents the custom MAIL FROM domain attributes of a verified identity
   * (email address or domain).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/IdentityMailFromDomainAttributes">AWS
   * API Reference</a></p>
   */
  class IdentityMailFromDomainAttributes
  {
  public:
    AWS_SES_API IdentityMailFromDomainAttributes() = default;
    AWS_SES_API IdentityMailFromDomainAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API IdentityMailFromDomainAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline const Aws::String& GetMailFromDomain() const { return m_mailFromDomain; }
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }
    template<typename MailFromDomainT = Aws::String>
    void SetMailFromDomain(MailFromDomainT&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::forward<MailFromDomainT>(value); }
    template<typename MailFromDomainT = Aws::String>
    IdentityMailFromDomainAttributes& WithMailFromDomain(MailFromDomainT&& value) { SetMailFromDomain(std::forward<MailFromDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline CustomMailFromStatus GetMailFromDomainStatus() const { return m_mailFromDomainStatus; }
    inline bool MailFromDomainStatusHasBeenSet() const { return m_mailFromDomainStatusHasBeenSet; }
    inline void SetMailFromDomainStatus(CustomMailFromStatus value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = value; }
    inline IdentityMailFromDomainAttributes& WithMailFromDomainStatus(CustomMailFromStatus value) { SetMailFromDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon SES takes if it cannot successfully read the required
     * MX record when you send an email. A value of <code>UseDefaultValue</code>
     * indicates that if Amazon SES cannot read the required MX record, it uses
     * amazonses.com (or a subdomain of that) as the MAIL FROM domain. A value of
     * <code>RejectMessage</code> indicates that if Amazon SES cannot read the required
     * MX record, Amazon SES returns a <code>MailFromDomainNotVerified</code> error and
     * does not send the email.</p> <p>The custom MAIL FROM setup states that result in
     * this behavior are <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code>.</p>
     */
    inline BehaviorOnMXFailure GetBehaviorOnMXFailure() const { return m_behaviorOnMXFailure; }
    inline bool BehaviorOnMXFailureHasBeenSet() const { return m_behaviorOnMXFailureHasBeenSet; }
    inline void SetBehaviorOnMXFailure(BehaviorOnMXFailure value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = value; }
    inline IdentityMailFromDomainAttributes& WithBehaviorOnMXFailure(BehaviorOnMXFailure value) { SetBehaviorOnMXFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet = false;

    CustomMailFromStatus m_mailFromDomainStatus{CustomMailFromStatus::NOT_SET};
    bool m_mailFromDomainStatusHasBeenSet = false;

    BehaviorOnMXFailure m_behaviorOnMXFailure{BehaviorOnMXFailure::NOT_SET};
    bool m_behaviorOnMXFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
