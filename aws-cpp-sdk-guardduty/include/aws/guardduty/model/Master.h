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

  class AWS_GUARDDUTY_API Master
  {
  public:
    Master();
    Master(Aws::Utils::Json::JsonView jsonValue);
    Master& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Master account ID</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Master account ID</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Master account ID</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Master account ID</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Master account ID</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Master account ID</p>
     */
    inline Master& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Master account ID</p>
     */
    inline Master& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Master account ID</p>
     */
    inline Master& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline Master& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline Master& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>This value is used to validate the master account to the member account.</p>
     */
    inline Master& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline Master& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline Master& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the relationship between the master and member accounts.</p>
     */
    inline Master& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}


    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline const Aws::String& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline void SetInvitedAt(const Aws::String& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline void SetInvitedAt(Aws::String&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline void SetInvitedAt(const char* value) { m_invitedAtHasBeenSet = true; m_invitedAt.assign(value); }

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline Master& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline Master& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}

    /**
     * <p>Timestamp at which the invitation was sent</p>
     */
    inline Master& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;

    Aws::String m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet;

    Aws::String m_invitedAt;
    bool m_invitedAtHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
