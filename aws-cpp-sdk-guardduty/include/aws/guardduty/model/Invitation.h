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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * Invitation from an AWS account to become the current account's master.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Invitation">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Invitation
  {
  public:
    Invitation();
    Invitation(Aws::Utils::Json::JsonView jsonValue);
    Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Inviter account ID
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * Inviter account ID
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * Inviter account ID
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * Inviter account ID
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * Inviter account ID
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * Inviter account ID
     */
    inline Invitation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * Inviter account ID
     */
    inline Invitation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * Inviter account ID
     */
    inline Invitation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline Invitation& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline Invitation& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * This value is used to validate the inviter account to the member account.
     */
    inline Invitation& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * Timestamp at which the invitation was sent
     */
    inline const Aws::String& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(const Aws::String& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(Aws::String&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(const char* value) { m_invitedAtHasBeenSet = true; m_invitedAt.assign(value); }

    /**
     * Timestamp at which the invitation was sent
     */
    inline Invitation& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}

    /**
     * Timestamp at which the invitation was sent
     */
    inline Invitation& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}

    /**
     * Timestamp at which the invitation was sent
     */
    inline Invitation& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}


    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline Invitation& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline Invitation& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}

    /**
     * The status of the relationship between the inviter and invitee accounts.
     */
    inline Invitation& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;

    Aws::String m_invitedAt;
    bool m_invitedAtHasBeenSet;

    Aws::String m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
