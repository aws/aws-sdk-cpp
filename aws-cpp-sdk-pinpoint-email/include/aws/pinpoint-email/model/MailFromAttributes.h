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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/MailFromDomainStatus.h>
#include <aws/pinpoint-email/model/BehaviorOnMxFailure.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A list of attributes that are associated with a MAIL FROM
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/MailFromAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API MailFromAttributes
  {
  public:
    MailFromAttributes();
    MailFromAttributes(Aws::Utils::Json::JsonView jsonValue);
    MailFromAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline const Aws::String& GetMailFromDomain() const{ return m_mailFromDomain; }

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline void SetMailFromDomain(const Aws::String& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline void SetMailFromDomain(Aws::String&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::move(value); }

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline void SetMailFromDomain(const char* value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain.assign(value); }

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline MailFromAttributes& WithMailFromDomain(const Aws::String& value) { SetMailFromDomain(value); return *this;}

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline MailFromAttributes& WithMailFromDomain(Aws::String&& value) { SetMailFromDomain(std::move(value)); return *this;}

    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline MailFromAttributes& WithMailFromDomain(const char* value) { SetMailFromDomain(value); return *this;}


    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline const MailFromDomainStatus& GetMailFromDomainStatus() const{ return m_mailFromDomainStatus; }

    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline bool MailFromDomainStatusHasBeenSet() const { return m_mailFromDomainStatusHasBeenSet; }

    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline void SetMailFromDomainStatus(const MailFromDomainStatus& value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = value; }

    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline void SetMailFromDomainStatus(MailFromDomainStatus&& value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = std::move(value); }

    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline MailFromAttributes& WithMailFromDomainStatus(const MailFromDomainStatus& value) { SetMailFromDomainStatus(value); return *this;}

    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint detected the required MX record for the MAIL FROM domain.</p>
     * </li> <li> <p> <code>FAILED</code> – Amazon Pinpoint can't find the required MX
     * record, or the record no longer exists.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the status of the MAIL FROM domain.</p> </li>
     * </ul>
     */
    inline MailFromAttributes& WithMailFromDomainStatus(MailFromDomainStatus&& value) { SetMailFromDomainStatus(std::move(value)); return *this;}


    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline const BehaviorOnMxFailure& GetBehaviorOnMxFailure() const{ return m_behaviorOnMxFailure; }

    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline bool BehaviorOnMxFailureHasBeenSet() const { return m_behaviorOnMxFailureHasBeenSet; }

    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = value; }

    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = std::move(value); }

    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline MailFromAttributes& WithBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { SetBehaviorOnMxFailure(value); return *this;}

    /**
     * <p>The action that Amazon Pinpoint to takes if it can't read the required MX
     * record for a custom MAIL FROM domain. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline MailFromAttributes& WithBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { SetBehaviorOnMxFailure(std::move(value)); return *this;}

  private:

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet;

    MailFromDomainStatus m_mailFromDomainStatus;
    bool m_mailFromDomainStatusHasBeenSet;

    BehaviorOnMxFailure m_behaviorOnMxFailure;
    bool m_behaviorOnMxFailureHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
