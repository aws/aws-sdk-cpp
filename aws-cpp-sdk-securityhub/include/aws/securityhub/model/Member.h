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
  class AWS_SECURITYHUB_API Member
  {
  public:
    Member();
    Member(Aws::Utils::Json::JsonView jsonValue);
    Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the member account.</p>
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
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline Member& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline Member& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the Security Hub master account associated with this
     * member account.</p>
     */
    inline Member& WithMasterId(const char* value) { SetMasterId(value); return *this;}


    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline const Aws::String& GetMemberStatus() const{ return m_memberStatus; }

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline void SetMemberStatus(const Aws::String& value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline void SetMemberStatus(Aws::String&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline void SetMemberStatus(const char* value) { m_memberStatusHasBeenSet = true; m_memberStatus.assign(value); }

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline Member& WithMemberStatus(const Aws::String& value) { SetMemberStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
     */
    inline Member& WithMemberStatus(Aws::String&& value) { SetMemberStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the relationship between the member account and its master
     * account. </p>
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
    bool m_accountIdHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet;

    Aws::String m_memberStatus;
    bool m_memberStatusHasBeenSet;

    Aws::Utils::DateTime m_invitedAt;
    bool m_invitedAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
