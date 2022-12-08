/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details about a member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_SECURITYHUB_API Member();
    AWS_SECURITYHUB_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The email address of the member account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline const Aws::String& GetAdministratorId() const{ return m_administratorId; }

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline void SetAdministratorId(const Aws::String& value) { m_administratorIdHasBeenSet = true; m_administratorId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline void SetAdministratorId(Aws::String&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline void SetAdministratorId(const char* value) { m_administratorIdHasBeenSet = true; m_administratorId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline Member& WithAdministratorId(const Aws::String& value) { SetAdministratorId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline Member& WithAdministratorId(Aws::String&& value) { SetAdministratorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline Member& WithAdministratorId(const char* value) { SetAdministratorId(value); return *this;}


    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMemberStatus() const{ return m_memberStatus; }

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline void SetMemberStatus(const Aws::String& value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline void SetMemberStatus(Aws::String&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline void SetMemberStatus(const char* value) { m_memberStatusHasBeenSet = true; m_memberStatus.assign(value); }

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline Member& WithMemberStatus(const Aws::String& value) { SetMemberStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline Member& WithMemberStatus(Aws::String&& value) { SetMemberStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>CREATED</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>INVITED</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>ENABLED</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>REMOVED</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>RESIGNED</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>DELETED</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>ACCOUNT_SUSPENDED</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline Member& WithMemberStatus(const char* value) { SetMemberStatus(value); return *this;}


    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline void SetInvitedAt(const Aws::Utils::DateTime& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline void SetInvitedAt(Aws::Utils::DateTime&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline Member& WithInvitedAt(const Aws::Utils::DateTime& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline Member& WithInvitedAt(Aws::Utils::DateTime&& value) { SetInvitedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline Member& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline Member& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    Aws::String m_memberStatus;
    bool m_memberStatusHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt;
    bool m_invitedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
