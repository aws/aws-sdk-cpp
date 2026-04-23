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
  class AWS_SES_API IdentityMailFromDomainAttributes
  {
  public:
    IdentityMailFromDomainAttributes();
    IdentityMailFromDomainAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    IdentityMailFromDomainAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline const Aws::String& GetMailFromDomain() const{ return m_mailFromDomain; }

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline void SetMailFromDomain(const Aws::String& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline void SetMailFromDomain(Aws::String&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::move(value); }

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline void SetMailFromDomain(const char* value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain.assign(value); }

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline IdentityMailFromDomainAttributes& WithMailFromDomain(const Aws::String& value) { SetMailFromDomain(value); return *this;}

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline IdentityMailFromDomainAttributes& WithMailFromDomain(Aws::String&& value) { SetMailFromDomain(std::move(value)); return *this;}

    /**
     * <p>The custom MAIL FROM domain that the identity is configured to use.</p>
     */
    inline IdentityMailFromDomainAttributes& WithMailFromDomain(const char* value) { SetMailFromDomain(value); return *this;}


    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline const CustomMailFromStatus& GetMailFromDomainStatus() const{ return m_mailFromDomainStatus; }

    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline bool MailFromDomainStatusHasBeenSet() const { return m_mailFromDomainStatusHasBeenSet; }

    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline void SetMailFromDomainStatus(const CustomMailFromStatus& value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = value; }

    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline void SetMailFromDomainStatus(CustomMailFromStatus&& value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = std::move(value); }

    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline IdentityMailFromDomainAttributes& WithMailFromDomainStatus(const CustomMailFromStatus& value) { SetMailFromDomainStatus(value); return *this;}

    /**
     * <p>The state that indicates whether Amazon SES has successfully read the MX
     * record required for custom MAIL FROM domain setup. If the state is
     * <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when
     * the verified identity sends an email. All other states indicate that Amazon SES
     * takes the action described by <code>BehaviorOnMXFailure</code>.</p>
     */
    inline IdentityMailFromDomainAttributes& WithMailFromDomainStatus(CustomMailFromStatus&& value) { SetMailFromDomainStatus(std::move(value)); return *this;}


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
    inline const BehaviorOnMXFailure& GetBehaviorOnMXFailure() const{ return m_behaviorOnMXFailure; }

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
    inline bool BehaviorOnMXFailureHasBeenSet() const { return m_behaviorOnMXFailureHasBeenSet; }

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
    inline void SetBehaviorOnMXFailure(const BehaviorOnMXFailure& value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = value; }

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
    inline void SetBehaviorOnMXFailure(BehaviorOnMXFailure&& value) { m_behaviorOnMXFailureHasBeenSet = true; m_behaviorOnMXFailure = std::move(value); }

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
    inline IdentityMailFromDomainAttributes& WithBehaviorOnMXFailure(const BehaviorOnMXFailure& value) { SetBehaviorOnMXFailure(value); return *this;}

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
    inline IdentityMailFromDomainAttributes& WithBehaviorOnMXFailure(BehaviorOnMXFailure&& value) { SetBehaviorOnMXFailure(std::move(value)); return *this;}

  private:

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet;

    CustomMailFromStatus m_mailFromDomainStatus;
    bool m_mailFromDomainStatusHasBeenSet;

    BehaviorOnMXFailure m_behaviorOnMXFailure;
    bool m_behaviorOnMXFailureHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
