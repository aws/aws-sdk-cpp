/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/HandshakeConstraintViolationExceptionReason.h>
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
   * <p>The requested operation would violate the constraint identified in the reason
   * code.</p>  <p>Some of the reasons in the following list might not be
   * applicable to this specific API or operation:</p>  <ul> <li>
   * <p>ACCOUNT_NUMBER_LIMIT_EXCEEDED: You attempted to exceed the limit on the
   * number of accounts in an organization. Note that deleted and closed accounts
   * still count toward your limit.</p>  <p>If you get this exception
   * immediately after creating the organization, wait one hour and try again. If
   * after an hour it continues to fail with this error, contact <a
   * href="https://docs.aws.amazon.com/support/home#/">Amazon Web Services
   * Support</a>.</p>  </li> <li> <p>ALREADY_IN_AN_ORGANIZATION: The
   * handshake request is invalid because the invited account is already a member of
   * an organization.</p> </li> <li> <p>HANDSHAKE_RATE_LIMIT_EXCEEDED: You attempted
   * to exceed the number of handshakes that you can send in one day.</p> </li> <li>
   * <p>INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES: You can't issue new invitations
   * to join an organization while it's in the process of enabling all features. You
   * can resume inviting accounts after you finalize the process when all accounts
   * have agreed to the change.</p> </li> <li>
   * <p>ORGANIZATION_ALREADY_HAS_ALL_FEATURES: The handshake request is invalid
   * because the organization has already enabled all features.</p> </li> <li>
   * <p>ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION: The handshake request
   * is invalid because the organization has already started the process to enable
   * all features.</p> </li> <li> <p>ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD:
   * The request failed because the account is from a different marketplace than the
   * accounts in the organization. For example, accounts with India addresses must be
   * associated with the AISPL marketplace. All accounts in an organization must be
   * from the same marketplace.</p> </li> <li>
   * <p>ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED: You attempted to change
   * the membership of an account too quickly after its previous change.</p> </li>
   * <li> <p>PAYMENT_INSTRUMENT_REQUIRED: You can't complete the operation with an
   * account that doesn't have a payment instrument, such as a credit card,
   * associated with it.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeConstraintViolationException">AWS
   * API Reference</a></p>
   */
  class HandshakeConstraintViolationException
  {
  public:
    AWS_ORGANIZATIONS_API HandshakeConstraintViolationException();
    AWS_ORGANIZATIONS_API HandshakeConstraintViolationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API HandshakeConstraintViolationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline HandshakeConstraintViolationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline HandshakeConstraintViolationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline HandshakeConstraintViolationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const HandshakeConstraintViolationExceptionReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const HandshakeConstraintViolationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(HandshakeConstraintViolationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline HandshakeConstraintViolationException& WithReason(const HandshakeConstraintViolationExceptionReason& value) { SetReason(value); return *this;}

    
    inline HandshakeConstraintViolationException& WithReason(HandshakeConstraintViolationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    HandshakeConstraintViolationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
