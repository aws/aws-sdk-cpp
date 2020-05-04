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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ConstraintViolationExceptionReason.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Performing this operation violates a minimum or maximum value limit. For
   * example, attempting to remove the last service control policy (SCP) from an OU
   * or root, inviting or creating too many accounts to the organization, or
   * attaching too many policies to an account, OU, or root. This exception includes
   * a reason that contains additional information about the violated limit.</p>
   * <p>Some of the reasons in the following list might not be applicable to this
   * specific API or operation:</p> <ul> <li> <p>ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA:
   * You attempted to remove an account from the organization that doesn't yet have
   * enough information to exist as a standalone account. This account requires you
   * to first agree to the AWS Customer Agreement. Follow the steps at <a
   * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
   * <p>ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION: You attempted to remove an
   * account from the organization that doesn't yet have enough information to exist
   * as a standalone account. This account requires you to first complete phone
   * verification. Follow the steps at <a
   * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
   * <p>ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED: You attempted to exceed the number of
   * accounts that you can create in one day.</p> </li> <li>
   * <p>ACCOUNT_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the limit on the
   * number of accounts in an organization. If you need more accounts, contact <a
   * href="https://console.aws.amazon.com/support/home#/">AWS Support</a> to request
   * an increase in your limit. </p> <p>Or the number of invitations that you tried
   * to send would cause you to exceed the limit of accounts in your organization.
   * Send fewer invitations or contact AWS Support to request an increase in the
   * number of accounts.</p> <note> <p>Deleted and closed accounts still count toward
   * your limit.</p> </note> <important> <p>If you get receive this exception when
   * running a command immediately after creating the organization, wait one hour and
   * try again. If after an hour it continues to fail with this error, contact <a
   * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p>
   * </important> </li> <li> <p>CANNOT_REGISTER_MASTER_AS_DELEGATED_ADMINISTRATOR:
   * You can designate only a member account as a delegated administrator.</p> </li>
   * <li> <p>CANNOT_REMOVE_DELEGATED_ADMINISTRATOR_FROM_ORG: To complete this
   * operation, you must first deregister this account as a delegated administrator.
   * </p> </li> <li> <p>DELEGATED_ADMINISTRATOR_EXISTS_FOR_THIS_SERVICE: To complete
   * this operation, you must first deregister all delegated administrators for this
   * service.</p> </li> <li> <p>HANDSHAKE_RATE_LIMIT_EXCEEDED: You attempted to
   * exceed the number of handshakes that you can send in one day.</p> </li> <li>
   * <p>MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE: To create an account in
   * this organization, you first must migrate the organization's master account to
   * the marketplace that corresponds to the master account's address. For example,
   * accounts with India addresses must be associated with the AISPL marketplace. All
   * accounts in an organization must be associated with the same marketplace.</p>
   * </li> <li> <p>MASTER_ACCOUNT_MISSING_CONTACT_INFO: To complete this operation,
   * you must first provide contact a valid address and phone number for the master
   * account. Then try the operation again.</p> </li> <li>
   * <p>MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED: To complete this operation, the master
   * account must have an associated account in the AWS GovCloud (US-West) Region.
   * For more information, see <a
   * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
   * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> </li> <li>
   * <p>MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED: To create an organization with
   * this master account, you first must associate a valid payment instrument, such
   * as a credit card, with the account. Follow the steps at <a
   * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
   * <p>MAX_DELEGATED_ADMINISTRATORS_FOR_SERVICE_LIMIT_EXCEEDED: You attempted to
   * register more delegated administrators than allowed for the service principal.
   * </p> </li> <li> <p>MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED: You attempted to
   * exceed the number of policies of a certain type that can be attached to an
   * entity at one time.</p> </li> <li> <p>MAX_TAG_LIMIT_EXCEEDED: You have exceeded
   * the number of tags allowed on this resource. </p> </li> <li>
   * <p>MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED: To complete this operation with
   * this member account, you first must associate a valid payment instrument, such
   * as a credit card, with the account. Follow the steps at <a
   * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">To
   * leave an organization when all required account information has not yet been
   * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
   * <p>MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED: You attempted to detach a policy
   * from an entity that would cause the entity to have fewer than the minimum number
   * of policies of a certain type required.</p> </li> <li>
   * <p>OU_DEPTH_LIMIT_EXCEEDED: You attempted to create an OU tree that is too many
   * levels deep.</p> </li> <li> <p>ORGANIZATION_NOT_IN_ALL_FEATURES_MODE: You
   * attempted to perform an operation that requires the organization to be
   * configured to support all features. An organization that supports only
   * consolidated billing features can't perform this operation.</p> </li> <li>
   * <p>OU_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the number of OUs that you
   * can have in an organization.</p> </li> <li> <p>POLICY_NUMBER_LIMIT_EXCEEDED. You
   * attempted to exceed the number of policies that you can have in an
   * organization.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ConstraintViolationException">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API ConstraintViolationException
  {
  public:
    ConstraintViolationException();
    ConstraintViolationException(Aws::Utils::Json::JsonView jsonValue);
    ConstraintViolationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConstraintViolationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConstraintViolationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConstraintViolationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const ConstraintViolationExceptionReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const ConstraintViolationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(ConstraintViolationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline ConstraintViolationException& WithReason(const ConstraintViolationExceptionReason& value) { SetReason(value); return *this;}

    
    inline ConstraintViolationException& WithReason(ConstraintViolationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    ConstraintViolationExceptionReason m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
